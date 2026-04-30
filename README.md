# Realistic Colored Buttons C++ GUI App

A more advanced Qt-based C++ application featuring interactive colored buttons with realistic UI elements and functionality.

## Features

- **Interactive Buttons**: 5 colored buttons (Red, Green, Blue, Yellow, Purple) with hover effects
- **Status Display**: A label that shows which button was last clicked
- **Background Changes**: Clicking a button changes the window's background color
- **Information Dialogs**: Each button click shows a message box with color information
- **Reset Functionality**: A reset button to restore the default background
- **Modern Styling**: Rounded buttons, hover effects, and improved layout

## Prerequisites

- C++ compiler (e.g., g++)
- CMake (version 3.16 or higher)
- Qt6 development libraries

### Installing Qt6 on Linux

For Ubuntu/Debian:
```bash
sudo apt update
sudo apt install qt6-base-dev cmake build-essential
```

## Building the Application

1. Navigate to the project directory:
   ```bash
   cd /home/shivam/cpp
   ```

2. Create a build directory:
   ```bash
   mkdir build
   cd build
   ```

3. Configure with CMake:
   ```bash
   cmake ..
   ```

4. Build the project:
   ```bash
   make
   ```

## Running the Application

After building, run the executable:
```bash
./ColoredButtonsApp
```

This will open an interactive window with:
- A title and status label
- Five colored buttons with hover effects
- A reset button

Click any colored button to:
- Update the status message
- Change the window background
- Display an information dialog about the color

## Code Overview

- `main.cpp`: Contains the main application with a custom QWidget class, signal-slot connections, and interactive features
- `CMakeLists.txt`: Build configuration file for CMake

## Enhancements Made

- Converted to a class-based structure for better organization
- Added QLabel for status display
- Implemented button click handlers with QMessageBox dialogs
- Added hover effects and rounded button styling
- Included background color changes and reset functionality
- Improved layout and visual design