<div align="center">
VecoSoft — Order Tracking Screen (Mobile)
A modern, responsive 390px order tracking experience — designed mobile-first

[Live Demo](https://veco-soft-assign.vercel.app)
[Repo](https://github.com/SayakaMeem/VecoSoft_Assign)
[Meta AI Build](https://www.meta.ai/share/c/sVIPTzdaqE)
[Viewport](#)

</div>
📄 Design Documentation & Prompt History
The complete interactive wireframe, Figma specifications (390px), and full prompt-to-build history for this assignment are documented here:
→ https://www.meta.ai/share/c/sVIPTzdaqE

This link contains the source of truth for the 3-state design system, timeline logic, and component specs.

Overview
A clean, Apple / Shopify-inspired order tracking screen built with React / Next.js + Tailwind CSS. Optimized for 360px–430px mobile viewport and presented in a centered phone frame on desktop.

Live: https://veco-soft-assign.vercel.app
Tracking ID: TRK382940192

Features
1. Visual Delivery Timeline
Four-stage progress with intentional states:

Processing → Shipped → Out for Delivery → Delivered
Active step: animated pulse + soft shadow
Completed: checkmark + connected progress line
Timestamps for each transition
2. Order Context
Estimated delivery date with live countdown
Product summary (image, name, qty, price)
Shipping address + Tracking ID
Sticky Contact Support action
3. Three Edge-Case Scenarios
Built as interactive preview toggles — not separate pages:

State	Visual Treatment	Actions
Delayed Order	Red/amber banner #FEF2F2 / #DC2626, strikethrough old date → new estimate	Contact Carrier, Reschedule, Request Refund
Delivered but Not Received	Orange warning #FFF7ED / #EA580C, conflict state	Report Issue, View Proof of Delivery, Request Investigation
Tracking Not Available Yet	Skeleton UI, shimmer, empty-state illustration	Disabled tracking link, info message
4. Craft & Polish
500ms skeleton on scenario switch
Error toast pattern
16–20px spacing, rounded-2xl cards, soft shadows
Inter typeface, minimal iconography
Tech Stack
Framework: React / Next.js
Styling: Tailwind CSS
Data: Mock / Static (no backend)
Icons: Lucide-style inline SVG
Project Structure
D:\GitProjects\VecoSoft_Assign
├── index.html                         # Main build — order tracking screen
├── optional/
│   └── order-tracking-390px-wireframe.html  # 390px text-based wireframe spec
├── vercel.json                        # Routing fix for Vercel SPA
├── README.md
└── PROMPT_HISTORY.md                  # AI usage history (mandatory)
Getting Started
Option 1 — Open directly

bash
# Double-click
index.html
Option 2 — Local server (VS Code)

bash
cd D:\GitProjects\VecoSoft_Assign
npx serve .
# http://localhost:3000
Option 3 — Dev

bash
npm install
npm run dev
Deployment (Vercel)
This project includes vercel.json for clean SPA routing.

bash
cd D:\GitProjects\VecoSoft_Assign
npx vercel --prod
Framework Preset: Other
Build Command: (empty)
Output Directory: (empty)
Project: veco-soft-assign
If you see 404 on Vercel, ensure the entry file is named index.html at the root.

Responsive Design
Mobile: Optimized for 360px–430px
Desktop: Centered 390px phone frame with rounded-[32px] + shadow, simulating native device
AI Development
Designed and built with Meta AI.

Full prompt history, design decisions, and interactive spec:
https://www.meta.ai/share/c/sVIPTzdaqE
Summary also in PROMPT_HISTORY.md
Author
Sayaka Meem — Frontend Assessment — VecoSoft

<div align="center">
Full Build & Prompt → meta.ai/share/c/sVIPTzdaqE

</div>
