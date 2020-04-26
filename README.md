# Creative++

[![Build Status](https://travis-ci.org/violetcraze/CreativeXX.svg?branch=master)](https://travis-ci.org/violetcraze/CreativeXX)

An experiment to see if I can make my own c++ library for real time creative graphics.

Not useable at the moment, I suggest you checkout [openFrameworks](https://openframeworks.cc/) or [Cinder](https://www.libcinder.org/) unless you want something that's very incompleate.

## Contributing

Contributions are welcome although there's little documentation (which will hopefully be fixed soon). Currently Linux is the only supported platform.

### Setup (Linux)

- Fork the repository

- Clone with submodules on `git clone --recurse-submodules https://github.com/<your-github-username>/CreativeXX.git`

- Setup Git Hooks and Install Dependencies

```bash
cd CreativeXX
./scripts/linux/hooks.sh
./scripts/linux/ubuntu-install.sh
```

- Install [CMake](https://cmake.org/download/) (if you don't already have v 3.12 or higher)

```bash
curl <link to latest linux script install found at https://cmake.org/download/> -o cmake.sh
sudo sh cmake.sh --prefix=/usr/local/ --exclude-subdir
```

You should be all set but if you have problems [file an issue](https://github.com/violetcraze/CreativeXX/issues/new).

### Building the Project

You could use an editor that supports CMake like CLion or vscode but if not here's how to do it from the terminal.

```bash
<in root directory of project>
mkdir cmake-build-debug
cd cmake-build-debug
cmake ..
make -j4
cd ..
```

The library is in /lib and binaries are in /bin.
