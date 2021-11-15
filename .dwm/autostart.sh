#!/bin/bash

#Apps
picom --experimental-backends &
nitrogen --restore &
xsetroot -cursor_name left_ptr &
numlockx on &
greenclip daemon &
/usr/lib/polkit-gnome/polkit-gnome-authentication-agent-1 &
easyeffects --gapplication-service &
pamac-tray &

#Nice Ones
~/bin/lock.sh &
eww daemon &

#statusbar
killall dwmblocks
dwmblocks &

#Monitor settings
xrandr --output HDMI-0 --mode 1440x900 -r 75 --pos 0x180 --rotate normal --output DP-4 --primary --mode 1920x1080 -r 144 --pos 1440x0 --rotate normal &
