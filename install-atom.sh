#!/bin/bash
INSTALL_LOC=~/Programs/atom
LAUNCHER_LOC=~/Desktop/atom.desktop
BIN_LOC=$INSTALL_LOC/usr/bin

echo 'Downloading Atom!'

# Download
cd ~/Downloads
wget https://atom.io/download/deb

echo 'Unpacking Atom!'

# Unpack
mkdir -p $INSTALL_LOC
dpkg -x deb $INSTALL_LOC

echo 'Creating Launcher on Desktop!'

# Create Launcher
printf "[Desktop Entry]\nName=Atom Text Editor\nExec=$BIN_LOC/atom\nTerminal=false\nType=Application" > $LAUNCHER_LOC
chmod +x $LAUNCHER_LOC

echo 'Adding to Path!'

echo "export PATH=$BIN_LOC:$PATH" >> ~/.bash_profile

echo 'Installing Awesome C++ Packages!'

# Now Install Some Awesome C++ Packages!
$BIN_LOC/apm install linter
$BIN_LOC/apm install linter-gcc
$BIN_LOC/apm install autocomplete-clang

echo 'Installation Complete! Close your terminal for full effect!'
