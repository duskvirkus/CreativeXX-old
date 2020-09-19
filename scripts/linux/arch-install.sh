#!/bin/bash
set -e

sudo pacman -S --noconfirm xorg-server
sudo pacman -S --noconfirm libxrandr
sudo pacman -S --noconfirm libxinerama
sudo pacman -S --noconfirm libxcursor
sudo pacman -S --noconfirm libxi
sudo pacman -S --noconfirm mesa
sudo pacman -S --noconfirm glu
sudo pacman -S --noconfirm freeglut
