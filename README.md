<div align="center">

# VecoSoft — Order Tracking Screen (Mobile)

**A modern, responsive mobile Order Tracking experience — 360px to 430px optimized**
<div align="center">

[![🌐 Live Demo](https://img.shields.io/badge/🌐_Live_Demo-veco--soft--assign.vercel.app-000000?style=for-the-badge&logo=vercel&logoColor=white)](https://veco-soft-assign.vercel.app)
[![💻 GitHub Repo](https://img.shields.io/badge/💻_GitHub_Repo-SayakaMeem%2FVecoSoft_Assign-24292f?style=for-the-badge&logo=github&logoColor=white)](https://github.com/SayakaMeem/VecoSoft_Assign)
[![🤖 Meta AI Build](https://img.shields.io/badge/🤖_Meta_AI_Build-Interactive_Wireframe_&_Prompt-0467DF?style=for-the-badge&logo=meta&logoColor=white)](https://www.meta.ai/share/c/sVIPTzdaqE)

</div>

---

<h1 style="font-size: 42px; margin-bottom: 8px;">🎯 Official Meta AI Build & Prompt History</h1>

<h2 style="font-size: 28px; font-weight: 700; margin-top: 0;">
  <a href="https://www.meta.ai/share/c/sVIPTzdaqE">https://www.meta.ai/share/c/sVIPTzdaqE</a>
</h2>

</div>

> [!IMPORTANT]
> **For Reviewers / Recruiters**
>
> This entire project was architected inside Meta AI. The complete Figma 390px spec, 3-state interactive wireframe, timeline logic, and mandatory prompt history are documented at:
>
> **👉 https://www.meta.ai/share/c/sVIPTzdaqE**
>
> Please review this link first — it is the source of truth for this assessment.

---

## Overview

A clean, Apple / Shopify-inspired Order Tracking screen built with React / Next.js and Tailwind CSS.

Designed for **360px to 430px viewport** on mobile, with a centered 390px phone frame on desktop.

**Live Demo:** https://veco-soft-assign.vercel.app
**Repository:** https://github.com/SayakaMeem/VecoSoft_Assign
**Design Documentation:** https://www.meta.ai/share/c/sVIPTzdaqE

## Features

### 1. Visual Delivery Timeline

- Four states: Processing → Shipped → Out for Delivery → Delivered
- Animated pulse for current step, checkmarks for completed steps
- Timestamps + connected progress line

### 2. Order Information

- Estimated delivery date/time with live countdown
- Product summary with image, name, quantity, and price
- Shipping address and Tracking ID: `TRK382940192`
- Sticky Contact Support button

### 3. Three Interactive Scenarios

## 🎯 Order Status Scenarios

| Scenario | 🎨 Visual Treatment | 👤 User Actions |
| :--- | :--- | :--- |
| **⚠️ Delayed Order** | 🔴 Red / 🟡 Amber alert<br>~~Old date~~ → **New estimate**<br>Animated pulse on delay badge | 📞 Contact Carrier<br>📅 Reschedule<br>💸 Request Refund |
| **📦 Delivered but Not Received** | 🟠 Orange warning<br>⚔️ Conflict state banner<br>Proof vs. claim mismatch | 🚨 Report Issue<br>🧾 View Proof of Delivery<br>🔍 Request Investigation |
| **⏳ Tracking Not Available Yet** | ✨ Clean empty state<br>💫 Shimmer / Skeleton timeline<br>Informational placeholder | ℹ️ Informational message only |

### 4. Polish and UX Craft


### 🔄 Interaction States
- 💀 **Loading Skeleton:** 500ms shimmer on scenario switch (timeline + cards)
- 🚨 **Error Toast:** Top-right toast with auto-dismiss (4s) + retry action
- 🎨 **Empty State:** Pure CSS illustration (no images) + friendly copy

### 🎯 Design Principles
- 📐 **Spacing:** Clean hierarchy, `16px` to `20px` rhythm (4pt grid)
- 🃏 **Cards:** `rounded-2xl` (16px), soft shadows `shadow-sm` → `shadow-lg` on hover
- 🔤 **Typography:** `Inter` font family - 400 / 500 / 600 weights
- ⚪ **Aesthetic:** Minimal, airy, lots of whitespace
## 🛠️ Tech Stack

- ⚛️ **Framework:** React / Next.js
- 🎨 **Styling:** Tailwind CSS
- 📦 **Data:** Mock / Static Data (no backend)
- ✨ **Icons:** Lucide-style inline SVG

## Project Structure
VecoSoft_Assign/
├── 🌐 optional/ # Optional Mocha deployment
│ ├── index.html
│ └── vercel.json
├── 📄 index.html # Main application
├── ⚙️ vercel.json # Vercel configuration
├── 📖 README.md # Documentation + live link
└── 📝 PROMPT_HISTORY.md # (Mandatory) AI prompts used

## How to Run

**Option 1 - Direct:** Double-click `index.html`

**Option 2 - Local Server:**
```bash
cd D:\GitProjects\VecoSoft_Assign
npx serve .

Deployment (Vercel)
Bash
npx vercel --prod
Framework: Other / Build: empty / Output: empty

Framework: Other / Build: empty / Output: empty

Responsive
Mobile: 360px - 430px optimized
Desktop: Centered 390px phone frame
AI Tools Used
Meta AI for planning, design, coding, debugging
Full history: https://www.meta.ai/share/c/sVIPTzdaqE
Author
Sayaka Meem — Frontend Assessment — VecoSoft

<div align="center">
Final Review Link
<h2 style="font-size: 28px;"> <a href="https://www.meta.ai/share/c/sVIPTzdaqE">https://www.meta.ai/share/c/sVIPTzdaqE</a> </h2> <p>Full interactive wireframe, Figma specs, and prompt history</p> </div>

