EXTRAKEY_ENABLE = yes       # Audio control and System control

# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no    # Breathing sleep LED during USB suspend

# If you want to change the display of OLED, you need to change here
SRC += ./lib/layer_state_reader.c \
#./lib/mode_icon_reader.c

CONSOLE_ENABLE=no
TAP_DANCE_ENABLE = yes
AUTO_SHIFT_ENABLE = yes
UNICODEMAP_ENABLE = yes
LEADER_ENABLE = yes
