# 🌡️ Temperature Converter

A **cross-platform C++ console application** that converts temperatures between Celsius, Fahrenheit, and Kelvin scales. Built with modern C++ and designed for simplicity and reliability.

[![Build Status](https://img.shields.io/badge/build-passing-brightgreen)]()
[![Platform](https://img.shields.io/badge/platform-Windows%20%7C%20Linux-blue)]()
[![License](https://img.shields.io/badge/license-MIT-green)]()
[![C++](https://img.shields.io/badge/C%2B%2B-17-blue)]()

## 🚀 Features

✨ **Complete Temperature Conversion Suite**
- 🔄 Celsius ↔ Fahrenheit
- 🔄 Celsius ↔ Kelvin  
- 🔄 Fahrenheit ↔ Kelvin

🛡️ **Robust & User-Friendly**
- 📝 Interactive menu-driven interface
- ✅ Comprehensive input validation
- 🚫 Absolute zero temperature checking
- 🔁 Continuous conversion loop with "convert another" option
- ℹ️ Built-in educational information about temperature scales

💻 **Cross-Platform Support**
- 🪟 Windows executable (.exe)
- 🐧 Linux binary
- 📦 Standalone executables - no installation required

## 📥 Quick Start

### Download & Run

#### 🪟 Windows
1. Download `TemperatureConverter-windows.exe` from [Releases]
2. Double-click to run or use Command Prompt:
   ```cmd
   TemperatureConverter-windows.exe
   ```

#### 🐧 Linux
1. Download `temperature-converter-linux` from [Releases](../../releases)
2. Make executable and run:
   chmod +x temperature-converter-linux

   ./temperature-converter-linux
   

### Build from Source

```bash
# Clone the repository
git clone https://github.com/HA2077/Temperature-converter.git
cd Temperature-converter

# Install dependencies (Linux)
sudo apt install build-essential cmake mingw-w64

# Build for both platforms
chmod +x build_both.sh
./Build.sh

# Executables will be in releases/ folder
```

## 🎮 Usage Example

```
🌡️  --- Temperature Converter ---
1. Celsius to Fahrenheit
2. Celsius to Kelvin
3. Fahrenheit to Celsius
4. Fahrenheit to Kelvin
5. Kelvin to Celsius
6. Kelvin to Fahrenheit
7. Info
8. Exit
Enter your choice (1-8): 1

Enter the temperature: 25
✅ Temperature in Fahrenheit: 77.00°F

Convert another? (Y for yes and N for No): N
--- Closing the program ---
```

## 🛠️ Technical Details

- **Language:** C++17
- **Build System:** CMake
- **Cross-compilation:** MinGW-w64 for Windows builds on Linux
- **Architecture:** x86_64
- **Dependencies:** None (standalone executables)

## 🔄 Version History

### 📋 Recent Updates

| Version | Date | Description |
|---------|------|-------------|
| **v2.5** | 25/9/9 | 🔧 Added detailed comments and fixed input validation functions + `cin.ignore()` buffer size |
| **v2.4** | 25/8/28 | ✨ Enhanced output formatting and implemented absolute zero checking |
| **v2.3** | 25/8/25 | ℹ️ Added educational info section for temperature scales + exit option (choices 7, 8) |
| **v2.2** | 25/8/23 | 🔁 Implemented continuous loop with "convert another" option and UI improvements |
| **v2.1** | 25/8/19 | 🛡️ Added `HandleErrors` function for comprehensive input validation |

## 🤝 Contributing

Contributions are welcome! This project is part of my C++ and Git/GitHub learning journey.

1. 🍴 Fork the repository
2. 🌿 Create a feature branch (`git checkout -b feature/amazing-feature`)
3. 💾 Commit your changes (`git commit -m 'Add amazing feature'`)
4. 📤 Push to branch (`git push origin feature/amazing-feature`)
5. 🔄 Open a Pull Request

## 📄 License

This project is licensed under the MIT License - see the [LICENSE] file for details.

## 🙏 Acknowledgments

- Built as part of my C++ learning journey
- Thanks to the open-source community for tools and inspiration
- Special thanks to everyone who provides feedback and suggestions

---

⭐ **If you find this project helpful, please consider giving it a star!** ⭐

---

And as if 2025/9/28 this repo will not be worked on but the work would move to my other project so stay tuned.