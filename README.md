## dwm

<img src='screens/dwm.png'>

## eww

<img src='screens/eww.png'>

## some info

-  **dwm flexipatch** - https://github.com/bakkeby/dwm-flexipatch

-  **st flexipatch** - https://github.com/bakkeby/st-flexipatch

-  **eww widget theme** - https://github.com/adi1090x/widgets

## dependencies

- **Fonts:** JetBrains Mono, JetbrainsMono Nerd Fonts, Iosevka, Iosevka Nerd Fonts, SFPro and Feather
- **Eww:** You can find eww launcher in my .dots repo
- **Rofi**
- **Greenclip**: For working clipboard in rofi
- **Picom**: You can use any picom fork, but i recommend to use this fork with patch for shadows with rounded corners https://github.com/s0nny7/picom
- **Dunst**: for notifications
- **Nitrogen**: wallpaper setup tool
- **Easyeffects**: AutoEQ for headphones
- **Zenpower**: cpu temperature info
- **Spotify**: music plugin in eww works only with this player, but you can configure it for yourself

## configuration

- **Important**: Go to my .dots repo and clone bin folder and place it in your PATH, without it scripts won't work and change  
- **EWW**: First take a look at scripts folder for change to your preference. Change file manager for yours, weather api key and links. Also change profile data which is located in 66 and 67 line of eww.xml

## keybinds

|              Keybind            |                 Function                 |
| ------------------------------- | ---------------------------------------- |
| `Super + Enter`                 | Launch terminal                          |
| `Super + B`                     | Hide bar                                 |
| `Super + J/K`                   | Focus Left or Right Stack                |
| `Super + S`                     | Swap focus on left or right stack        |
| `Super + H/L`                   | Change size of master stack.             |
| `Super + Shift + H/L/O`         | Set the size of windows in all stacks.   |
| `Super + Shift + J/K`           | Move stacks in tags.                     |
| `Super + Tab`                   | Show previous tag                        |
| `Super + Shift + C`             | Kill client                              |
| `Super + Shift + Q`             | Quit dwm                                 |
| `Super + Control + Shift + Q`   | Restart DWM                              |
| `Super + T`                     | Set tiling layout                        |
| `Super + F`                     | Set floating layout                      |
| `Super + M`                     | Set monocle layout                       |
| `Super + Shift + Space`         | Toggle floating                          |
| `Super + Y`                     | Toggle fullscreen                        |
| `Super + Shift + Comma/Period`  | Cycle available layouts                  |
| `Super + 0`                     | Show all windows from tags               |
| `Super + Comma/Period`          | Focus left or right monitor              |
| `Super + Control + Comma/Period`| Tag left or right monitor                |
| `Super + E`                     | Open EWW Panel                           |
| `Super + Shift + E`             | close EWW Panel                          |
| `Super + D`                     | Open rofi launcher menu                  |
| `Super + Shift + A`             | Open rofi clipboard menu                 |
| `Super + F1`                    | lockscreen                               |
| `Super + X`                     | Start inhibitor                          |
| `Super + Shift + X`             | disable inhibitor                        |
| `PrintScr`                      | Copy screenshot to clipboard             |
| `Super + PrintScr`              | Save screenshot to folder                |

**Note**: There is also a keybing file in dwm source code folder.
