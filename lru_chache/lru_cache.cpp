#include <iostream>
#include <unordered_map>
#include <list>
#include <string>

class LRUCache {
private:
    int maxCapacity;
    // Keeps track of our data in order of use (newest at the front, oldest at the back)
    std::list<std::pair<std::string, int>> itemsList;
    // Maps a key directly to its spot in the list for super fast O(1) lookups
    std::unordered_map<std::string, std::list<std::pair<std::string, int>>::iterator> itemsMap;

public:
    LRUCache(int capacity) {
        maxCapacity = capacity;
    }

    int get(std::string key) {
        // If the key isn't in our cache, return -1
        if (itemsMap.find(key) == itemsMap.end()) {
            return -1;
        }
        
        // It's here! Move it to the very front so we know it was just used.
        itemsList.splice(itemsList.begin(), itemsList, itemsMap[key]);
        return itemsMap[key]->second;
    }

    void put(std::string key, int value) {
        // If the key already exists, update its value and move it to the front
        if (itemsMap.find(key) != itemsMap.end()) {
            itemsMap[key]->second = value;
            itemsList.splice(itemsList.begin(), itemsList, itemsMap[key]);
            return;
        }

        // If we are out of space, kick out the oldest item (sitting at the back)
        if (itemsList.size() >= maxCapacity) {
            auto oldest = itemsList.back();
            itemsMap.erase(oldest.first); // Remove from map
            itemsList.pop_back();        // Remove from list
        }

        // Add the new item right at the front
        itemsList.push_front({key, value});
        itemsMap[key] = itemsList.begin();
    }
};

int main() {
    // Let's test it out with a capacity of 2
    LRUCache cache(2);
    
    cache.put("A", 10);
    cache.put("B", 20);
    
    std::cout << "Get A: " << cache.get("A") << " (Expected: 10)\n";
    
    cache.put("C", 30); // This kicks out "B" because "B" is now the oldest
    
    std::cout << "Get B: " << cache.get("B") << " (Expected: -1)\n";
    std::cout << "Get C: " << cache.get("C") << " (Expected: 30)\n";
    std::cout << "Get A: " << cache.get("A") << " (Expected: 10)\n";

    return 0;
}