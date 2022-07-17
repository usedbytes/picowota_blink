# `picowota_blink` - Example project using the `picowota` bootloader

This is an example project for using the
[`picowota`](https://github.com/usedbytes/picowota) bootloader in an app.

Build it like so:
```
export PICO_SDK_PATH=path/to/pico-sdk
export PICOWOTA_WIFI_SSID=YourNetworkName
export PICOWOTA_WIFI_PASS=YourPassw0rd

git clone https://github.com/usedbytes/picowota_blink
cd picowota_blink
git submodule update --init picowota

mkdir build
cd build
cmake -DPICO_BOARD=picow_w ..
make
```

Then you can flash the resulting `picowota_blink.uf2`, `.elf` or `.bin` file
in the "usual" way - via the Pico USB mass storage mode, `picotool` or whatever.

See https://github.com/usedbytes/picowota for more information.
