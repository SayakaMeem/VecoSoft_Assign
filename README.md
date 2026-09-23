# VecoSoft - Order Tracking Screen (Mobile)

A modern, responsive mobile Order Tracking experience built with React / Next.js and Tailwind CSS.
Designed for 360px - 430px viewport, centered phone frame on desktop.

**Live:** https://veco-soft-assign.vercel.app  
**Repo:** https://github.com/SayakaMeem/VecoSoft_Assign

### ✨ Features

**1. Visual Delivery Timeline**
- 4 states: Processing → Shipped → Out for Delivery → Delivered
- Animated pulse for current step, checkmarks for completed, timestamps
- Connected progress line with active state

**2. Order Info**
- Estimated delivery date/time with live countdown
- Product summary (image, name, qty, price)
- Shipping address & Tracking ID: TRK382940192
- Sticky Contact Support button

**3. Three Interactive Scenarios (Preview Toggle)**
- **Delayed Order:** Past estimated date, red/amber warning banner, strikethrough old date + new estimate, actions: Contact Carrier, Reschedule, Refund
- **Delivered but Not Received:** Conflict state with orange warning, actions: Report Issue, View Proof of Delivery, Request Investigation
- **Tracking Not Available Yet:** Clean empty state (not broken), shimmer animation, skeleton timeline, info message

**4. Polish**
- Loading skeleton (500ms on scenario switch)
- Error toast state
- Empty state illustration with CSS
- Clean hierarchy, 16-20px spacing, rounded-2xl cards, soft shadows
- Inter font, minimal Apple/Shopify style

### 🛠 Tech Stack

- React / Next.js
- Tailwind CSS
- Mock / Static Data (no backend)
- Lucide-style inline SVG icons

### 📁 Project Structure

D:\GitProjects\VecoSoft_Assign
├── index.html (main build - order tracking screen)
├── vercel.json (routing fix for Vercel)
├── README.md
└── PROMPT_HISTORY.md (AI usage history - mandatory)


### 🚀 How to Run

**Option 1 - Direct:**
Double-click `index.html`

**Option 2 - Local Server (VS Code):**
```bash
cd D:\GitProjects\VecoSoft_Assign
npx serve .
# open http://localhost:3000

Option 3 - Dev:

Bash
npm install
npm run dev
🌐 Deployment (Vercel)
This project is configured for Vercel with vercel.json.

Deploy from VS Code terminal:

Deploy from VS Code terminal:

Bash
cd D:\GitProjects\VecoSoft_Assign
npx vercel --prod
Framework: Other
Build Command: (empty)
Output Directory: (empty)
Link to existing: veco-soft-assign
If you see 404, ensure file is named index.html not Order-Tracking.html.

📱 Responsive
Optimized for 360px - 430px. Desktop shows centered 390px phone frame with shadow and rounded border.

🤖 AI Tools Used
Meta AI for planning, design, coding, debugging
Complete prompt history available in PROMPT_HISTORY.md
👩‍💻 Author
Sayaka Meem - Frontend Assessment - VecoSoft



