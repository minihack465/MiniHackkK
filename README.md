# MiniHack

A modular starter project for a Geometry Dash Geode mod.

## Project structure

- `src/main.cpp` — mod entry point
- `src/Config.hpp` and `src/Config.cpp` — feature definitions and in-memory settings
- `src/MiniHackMenu.hpp` and `src/MiniHackMenu.cpp` — starter popup
- `mod.json` — Geode mod metadata
- `CMakeLists.txt` — CMake build definition
- `.github/workflows/build.yml` — GitHub Actions build workflow

## Before building

1. Change `example.minihack` in `mod.json` to a unique Geode mod ID.
2. Replace the developer placeholder in `mod.json`.
3. Check the Geode SDK version and workflow settings against the version installed for your Geometry Dash setup.

## Important

This archive is a starter scaffold, not a finished feature-complete mod.
The four feature entries are currently definitions only; hitbox drawing, custom icons,
level information, player statistics, and the custom MH button still need their
gameplay/UI hooks implemented and tested against the exact Geode SDK version.
