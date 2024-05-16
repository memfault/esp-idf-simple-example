# Memfault ESP32 Basic Integration Example

This example project shows a very simple Memfault integration, based on the
[Console/Advanced
example](https://github.com/espressif/esp-idf/tree/master/examples/system/console/advanced)
from the ESP-IDF repo.

The main purpose of this project is to show the size difference between the
Memfault Firmware SDK v1.0.1 and v1.9.0 on an esp-idf project.

Clone this project with the `--recursive` flag to also clone the submodule:

```bash
git clone --recursive https://github.com/memfault/esp-idf-simple-example.git
```

To build for Memfault Firmware SDK v1.0.1, follow these steps:

```bash
# assuming an activated esp-idf build environment (i.e. idf.py is available)

# checkout the Memfault SDK v1.0.0
git -C third-party/memfault-firmware-sdk checkout 1.0.1

# build the project and generate a size report
idf.py build size
```

To repeat with the Memfault Firmware SDK v1.9.0, follow these steps:

```bash
git -C third-party/memfault-firmware-sdk checkout 1.9.0
# do a hard purge of the directory, to clean out all generated artifacts
git clean -dxf

idf.py build size
```
