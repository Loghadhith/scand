```markdown
# SystemC-Based NAND Flash Functional Model

This project is a lightweight functional model of a NAND flash memory built using SystemC. It simulates basic NAND operations such as **read**, **write**, and **erase** at a block/page level. The goal is to provide an abstract yet realistic behavioral representation of NAND flash suitable for architecture exploration, early firmware validation, or educational purposes.

---

## 🚀 Features

- Functional NAND model with blocks, pages, and latency handling
- SystemC-based event-driven simulation
- Simple, modular C++/SystemC design
- CMake build system
- Git submodule for SystemC (optional and portable setup)
- Testbench that demonstrates usage and simulation flow

---

## 🧱 Project Structure

```

nand-flash-model/
├── CMakeLists.txt
├── README.md
├── .gitignore
├── external/                 # SystemC submodule (optional)
│   └── systemc/
├── src/
│   ├── nand\_flash.hpp        # NAND model interface
│   └── nand\_flash.cpp        # NAND model implementation
├── test/
│   └── nand\_flash\_tb.cpp     # Testbench (sc\_main)
└── build/                    # CMake build output (not in repo)

````

---

## ⚙️ Building the Project

### 🔁 1. Clone the Repository

```bash
git clone --recurse-submodules <repo-url>
cd nand-flash-model
````

> If you forgot `--recurse-submodules`:

```bash
git submodule update --init --recursive
```

---

### 🛠 2. Build SystemC (once)

```bash
cd external/systemc
mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=$(pwd)/install -DCMAKE_BUILD_TYPE=Release -DENABLE_PTHREADS=ON
make -j$(nproc)
make install
```

---

### 🧪 3. Build & Run the Project

```bash
cd ../../../build
cmake ..
make
./nand_flash_model
```

