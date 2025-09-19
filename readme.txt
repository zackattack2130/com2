I basically had to remake the firmware from scratch. Here's what I thought was going on:

I think your split matrix wasn't split correctly or was set up in a way that's "deprecated". Make sure your matrix is set up in the reverse order that it is on the left half, so if col0 on the left is the leftmost column, on the right half it should be your rightmost column, and vice versa. The row connections should be the same on both sides too.

Firmware had a lot of deprecated features so I commented a lot of what was in config.h and deleted info.json. If you want to enable bootmagic again, it should be basically the same way you had it previously, but in keyboard.json. I think I erased it.

I made a basic keymap for you to use if you would like to test your keyboard again. Just make sure your serial connections are correct. As for the USB C port, it doesn't matter where your connections go since it looks like it's literally just a jack of sorts, just make sure the connections are the same on both halves. I also think you were supposed to use regular serial, not soft serial.

Also, compare your keyboard firmware to others that are already available. You can get a lot of info of how to set up your boards that way.

Good luck.