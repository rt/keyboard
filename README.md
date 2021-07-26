# keyboard

<img src="./current-desktop.jpg"
     alt="for funsy ..."
     style="width=400px;height=400px;align=center;" />

My keyboard maps ...

I was having a hard time maintaining a fork of qmk_firmware without having conflicts (?)
It's easier to just have my keyboard files here and copy them to a qmk_firmware clone.

```bash
git clone https://github.com/qmk/qmk_firmware
cd keyboard/
./copy_qmk_files # assumes ../../qmk_firmware/
cd ../qmk_firmware/
make handwired/mrkabuda:ryan:avrdude
```

**Dependencies**
You won't be able to flash the first time, and there will be a warning.
```bash
./util/qmk_install.sh
make git-submodule
```

