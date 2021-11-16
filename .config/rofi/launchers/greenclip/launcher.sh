#!/usr/bin/env bash

## Author  : Aditya Shakya
## Mail    : adi1090x@gmail.com
## Github  : @adi1090x
## Twitter : @adi1090x

theme="style_7"
dir="$HOME/.config/rofi/launchers/greenclip"

# Tokyo
ALPHA="#00000000"
BG="#15161E"
FG="#c0caf5"
SELECT="#1a1b26"
# accent colors
COLORS=('#f7768e' '#e0af68' '#7dcfff' '#a9b1d6' '#ebcb8d' '#bb9af7' '#c0caf5' \
		'#9ece6a' '#7aa2f7' '#db4b4b' '#ff9e64')

# One Dark
#ALPHA="#00000000"
#BG="#1e222a"
#FG="#efefef"
#SELECT="#282c34"
# accent colors
#COLORS=('#e06c75' '#c9866f' '#39D7E5' '#6bb2c0' '#ebcb8d' '#bc7ad9' '#71abeb' \
#		'#9ec07c' '#4d78cc' '#98c379' '#8b3f45')

# Gruvbox
#ALPHA="#00000000"
#BG="#1d2021"
#FG="#f9f5d7"
#SELECT="#282828"
# accent colors
#COLORS=('#fb4934' '#fabd2f' '#458588' '#427b58' '#d79921' '#b16286' '#83a598' \
#		'#9ec07c' '#076678' '#689d6a' '#9d0006')


ACCENT="${COLORS[$(( $RANDOM % 11 ))]}ff"

# overwrite colors file
cat > $dir/colors.rasi <<- EOF
	/* colors */

	* {
	  al:  $ALPHA;
	  bg:  $BG;
	  se:  $SELECT;
	  fg:  $FG;
	  ac:  $ACCENT;
	}
EOF

rofi -modi ":greenclip print" -show  -run-command '{cmd}' -theme $dir/"$theme"