# 🌿 Eco-Track: Personal Carbon Footprint Manager

## 📌 Project Overview
Eco-Track is a console-based logical tool designed to help individuals monitor their daily waste production and calculate their carbon footprint. The goal is to promote sustainability by providing real-time feedback and eco-friendly tips based on user data.

## 🚀 Key Features
- **Daily Log:** Record plastic and paper waste in kilograms.
- **Carbon Score Calculation:** Uses logical algorithms to estimate CO2 impact.
- **Data Persistence:** Saves all records to a `.txt` file using C++ File Handling, so data is never lost.
- **Smart Recommendations:** Provides personalized "Green Tips" based on the user's score.
- **Historical View:** Allows users to track their progress over time.

## 🛠️ Technical Implementation (CSE 1110–1116 Concepts)
Following the Category 1 requirements, this project focuses on robust programming logic:
- **Structures (struct):** To organize waste records efficiently.
- **File Handling (ifstream/ofstream):** To store and retrieve data locally.
- **Modular Programming:** Logical tasks are divided into functions for clean and readable code.
- **Console Interface:** A user-friendly command-line interface as requested.

## 📂 Project Structure
- `demo1.cpp`: The core C++ logic and backend.
- `index.html`: A web-based presentation/landing page to explain the project's vision.
- `records.txt`: Local database for storing user entries.

## 🖥️ How to Run
1. Clone the repository.
2. Compile the C++ file: `g++ demo1.cpp -o EcoTrack`.
3. Run the executable: `./EcoTrack` (Linux/Mac) or `EcoTrack.exe` (Windows).
4. Open `index.html` in any browser to see the project presentation.

## 👥 Presentation & Pitch
- **Problem:** Many people are unaware of their daily environmental impact.
- **Solution:** A simple, lightweight tool that makes tracking easy and provides actionable advice.
- **Originality:** Addresses a real-world problem with clean, console-driven logic.

---
