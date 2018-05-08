# Current Arduino Sensors
Current sensors, using YHDC Split Core Current Transformer SCT-013 100A

# Installation
```
git submodule update --init
make
make upload
```

# Features
- Monitor multiple current sensors. Sensors must be plugged from Analog 0 to sensors count. (Analog 0 = Sensor 0, Analog 1 = Sensor 1, ...)
- Output on Serial (9600 bps) one line per sensor: `Px: watt ampere` (x = sensor id, watt and ampere are float value)

