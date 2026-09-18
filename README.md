# Modern C++ Starter Template

A modern, clean C++20 starter template following the [Pitchfork Layout](https://github.com/vector-of-bool/pitchfork).

## Structure

```text
├── .clang-format         # Google-based formatting rules
├── .vscode/              # VS Code build and debug configurations
├── CMakeLists.txt        # Root CMake configuration
├── CMakePresets.json     # Compiler and build presets
├── include/project/      # Public library headers
│   └── App.hpp
├── src/                  # Source files
│   ├── App.cpp
│   └── main.cpp          # Application entry point
└── tests/                # Automated unit tests
    ├── CMakeLists.txt
    └── test_main.cpp
```

## Prerequisites

- **CMake** 3.20 or newer
- **Clang / GCC** supporting C++20
- **GDB** (for debugging)

## Quick Start

### 1. Configure
```bash
cmake --preset preset-clang
```

### 2. Build
```bash
cmake --build --preset preset-clang
```

### 3. Run
```bash
./out/build/preset-clang/project
```

### 4. Run Tests
```bash
ctest --preset preset-clang
```

## Renaming for a New Project

To rename `project` to your project's name:
1. Rename `include/project/` to `include/<your_project>/`.
2. Update `project` and `project_lib` in `CMakeLists.txt`.
3. Update the namespace in `include/<your_project>/App.hpp` and `src/App.cpp`.
