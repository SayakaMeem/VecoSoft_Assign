# LRU Cache Implementation in C++

Efficient implementation of Least Recently Used (LRU) Cache using STL.

### Concept
LRU Cache evicts the least recently used item when capacity is exceeded. 
Achieves O(1) for both get and put.

### Data Structures Used
- std::list<pair<string, int>> - maintains order (most recent at front)
- unordered_map<string, iterator> - O(1) access

### How It Works
1. get(key): If exists, move node to front and return value, else -1
2. put(key, value): 
   - If exists: update and move to front
   - If full: remove from back (oldest)
   - Insert new at front

### How to Run
g++ lru_cache.cpp -o lru_cache
./lru_cache

### Expected Output
Get A: 10 (Expected: 10)
Get B: -1 (Expected: -1)
Get C: 30 (Expected: 30)
Get A: 10 (Expected: 10)