<h1 align="center">SANJAYA-LINK</h1>

<p align="center">
<img width="400" height="360"  alt="pcbfront" src="https://github.com/user-attachments/assets/c3369427-1581-4659-8ab2-9adb238aad8e" /> 
<img width="400" height="360"  alt="pcbback" src="https://github.com/user-attachments/assets/a0e73dcb-63ba-456d-a128-28c25953e38f" />
</p>
 
 ---

 # 1. Overview

VIDURA-LINK is a custom 1-Watt telemetry and control system built for drones, fixed-wing UAVs, and RC models. While standard ELRS or Crossfire modules are great, I wanted a transparent, fully customizable link based on the RP2040 and SX1262 that I could integrate directly into my own flight controllers and ground stations.

## Features
- **RP2040** – Dual-core Cortex-M0+ microcontroller running up to 133 MHz. It handles all logic and communication.
- **SX1262** – LoRa transceiver for long-range, low-power wireless communication (EU bands).
- **0900FM15K0039001E** – RF crystal oscillator for stable timing.
- **W25Q128JVS** – 128 Mbit SPI flash memory for additional storage.
- **AP2112K-3.3** – 3.3V voltage regulator.
- **PE4259** – RF switch between antenna and transceiver.
- **Status LEDs** – For easier debugging or indication.
- **Dimensions:** - 51.82mm x 48.39mm

## What it is 
This is a custom-built, compact board that pairs the **RP2040 processor** with an **SX1262 LoRa radio**.
Basically, long-range wireless communicator (through Radio Signals). I designed it to be a simple way to send data over long distances without needing Wi-Fi or any other mediums.

## Why I Made This Project
I was searching a solution for telemetery of data for my upcoming **Drone** and **Model Rocketry** ideas. Then i got deep into this idea and after researching a lot i found it intresting and do-able, and decided to build this from scratch. I’ve spent a lot of time debugging things like the clock settings and power rails to make sure it actually stays running on a battery which was hectic.

## How To Use
- **Connect:** Plug the module into your computer via the USB-C port to load your code.
- **Power:** You can run it off a battery or the USB supply; I’ve included a regulator to keep the power clean and stable.
- **Lesss Goo** Just write your script, upload it, and watch it start communicating over the LoRa network.

---

# 2. Layouts

## Schematics
<img width="947" height="652" alt="Schematic" src="https://github.com/user-attachments/assets/8c92dd71-45e3-4e95-a76a-ea5a56a42677" />

## PCB

<img width="645" height="694" alt="PCBrouted" src="https://github.com/user-attachments/assets/e14998f8-d8f0-4d33-b8d6-00c647cdaa10" />

---

# 3. BOM (Bill Of Materials)

| Item | Description | Quantity | Total Price (USD) | URL |
|------|------------|----------|-------------------|-----|
| 100nF 0402 Capacitor | Ceramic capacitor 100nF 0402 package | 24 | 0.18 |https://robu.in/product/gcm155l8eh104ke07d-murata-electronics-50v-100nf-x8l-%c2%b110-0402-multilayer-ceramic-capacitors-mlcc-smd-smt-rohs/ |
| 1uF 0402 Capacitor | Ceramic capacitor 1uF 0402 package | 4 | 0.40 |https://www.digikey.in/en/products/detail/murata-electronics/GRM155R61H105ME05D/12091059 |
| 15pF 0402 Capacitor | Ceramic capacitor 15pF 0402 package | 5 | 0.12 |https://robu.in/product/gjm1555c1h150fb01d-murata-electronics-50v-15pf-c0g-%c2%b11-0402-multilayer-ceramic-capacitors-mlcc-smd-smt-rohs/ |
| 10uF 0402 Capacitor | Ceramic capacitor 10uF 0402 package | 4 | 1.04 | https://www.digikey.in/en/products/detail/murata-electronics/GRT155R61A106ME13D/19115561|
| 1nF 0402 Capacitor | Ceramic capacitor 1nF 0402 package | 2 | 0.28 |https://www.digikey.in/en/products/detail/kemet/C0402C102K5GECAUTO7411/8648675 |
| 39pF 0402 Capacitor | Ceramic capacitor 39pF 0402 package | 2 | 0.20 |https://www.digikey.in/en/products/detail/murata-electronics/GCM1555C1H390JA16J/4903596 |
| 3.3pF 0402 Capacitor | Ceramic capacitor 3.3pF 0402 package | 4 | 0.40 | https://www.digikey.in/en/products/detail/murata-electronics/GJM1555C1H3R3CB01D/702288|
| 470nF 0402 Capacitor | Ceramic capacitor 470nF 0402 package | 2 | 0.22 |https://www.digikey.in/en/products/detail/murata-electronics/GRM155R61A474KE15D/702528 |
| 47pF 0402 Capacitor | Ceramic capacitor 47pF 0402 package | 4 | 0.12 |https://robu.in/product/gcm1555c1h470fa16d-murata-electronics-50v-47pf-c0g-%c2%b11-0402-multilayer-ceramic-capacitors-mlcc-smd-smt-rohs/ |
| Blue LED 0402 | Blue indicator LED | 2 | 0.38 |https://www.digikey.in/en/products/detail/w%C3%BCrth-elektronik/150080BS75000/4489912 |
| Red LED 0402 | Red indicator LED | 2 | 0.38 |https://www.digikey.in/en/products/detail/w%C3%BCrth-elektronik/150080SS75000/4489921 |
| BLM15AX102SN1D | Ferrite bead 1kΩ @100MHz 0402 | 2 | 0.20 | https://www.digikey.in/en/products/detail/murata-electronics/BLM15AX102SN1D/2256877|
| 0900FM15K0039001E | LoRa RF front-end filter | 2 | 0.90 |https://www.digikey.in/en/products/detail/johanson-technology-inc/0900FM15K0039001E/16639329 |
| USB-C Port | USB Type-C receptacle | 2 | 1.54 |https://www.digikey.in/en/products/detail/gct/USB4105-GF-A/11198441 |
| SMA Connector | RF antenna connector | 2 | 6.56 |https://www.digikey.in/en/products/detail/taoglas-limited/EMPCB-SMAFSTJ-B-HT/3522337 |
| 15uH 0402 Inductor | Power inductor 15uH | 2 | 0.12 |https://www.digikey.in/en/products/detail/murata-electronics/LQW15DN150M00D/9559544 |
| 47nH 0402 Inductor | RF inductor 47nH | 2 | 0.20 | https://www.digikey.in/en/products/detail/murata-electronics/LQG15WH47NJ02D/11690059|
| 9.1nH 0402 Inductor | RF inductor 9.1nH | 4 | 0.13 |https://robu.in/product/lqw15an9n1g00d-murata-wirewound-inductor-9-1-nh-0-14-ohm-5-5-ghz-540-ma-0402-1005-metric-lqw15a_00/ |
| 100Ω 0402 Resistor | Resistor 100Ω | 2 | 0.20 | https://www.digikey.in/en/products/detail/yageo/RC0402FR-10100RL/16982189|
| 10kΩ 0402 Resistor | Resistor 10kΩ | 2 | 0.20 |https://www.digikey.in/en/products/detail/yageo/RT0402FRD0710KL/5926329 |
| 27.4Ω 0402 Resistor | Resistor 27.4Ω | 4 | 0.40 |https://www.digikey.in/en/products/detail/bourns-inc/CR0402-FX-27R4GLF/3783281 |
| 1kΩ 0402 Resistor | Resistor 1kΩ | 8 | 0.79 |https://www.digikey.in/en/products/detail/yageo/RC0402FR-071KL/726513 |
| 5.1kΩ 0402 Resistor | Resistor 5.1kΩ | 4 | 0.40 |https://www.digikey.in/en/products/detail/yageo/RC0402FR-135K1L/14286364 |
| Tactile Switch | Reset / Boot tactile switch | 4 | 0.88 |https://www.digikey.in/en/products/detail/same-sky-formerly-cui-devices/TS09-63-25-WT-260-SMT-TR/15839064 |
| SX1262IMLTRT | LoRa transceiver IC | 2 | 6.22 |https://robu.in/product/sx1262imltrt-semitech-300kbps-general-purposeism1ghz-spi-qfn-24-ep4x4-rf-transceiver-ics-rohs/ |
| RP2040 | Microcontroller | 2 | 1.74 |https://robu.in/product/raspberry-pi-rp2040/ |
| W25Q64JVSSIQ | SPI Flash memory | 2 | 4.40 |https://robu.in/product/w25q64jvssiq-winbond-elec-sop-8-208mil-nor-flash-rohs/ |
| AP2127K-3.3 | 3.3V LDO regulator | 2 | 0.38 |https://www.digikey.in/en/products/detail/diodes-incorporated/AP2127K-3-3TRG1/4470786 |
| RF Switch SPDT | RF switch SC70-6 | 2 | 1.56 |https://www.digikey.in/en/products/detail/psemi/4259-63/2614473 |
| 32MHz Crystal | System clock crystal | 2 | 0.88 | https://robu.in/product/yxc-ysx221sl-32mhz-12pf-20ppm-4pad-smd-smt-crystal/|
| 12MHz Crystal | System clock crystal | 2 | 0.40 |https://robu.in/product/ysx321sl-12mhz-10pf-10ppm-4pins-smd-smt-metal-surface-quartz-crystal-pack-of-2/ |
| Schottky Diode | Fast switching diode | 2 | 0.46 |https://www.digikey.in/en/products/detail/mcc-micro-commercial-components/MBR0520-TP/717250 |
| USBLC6-2SC6 | USB ESD protection | 2 | 0.70 | https://www.digikey.in/en/products/detail/stmicroelectronics/USBLC6-2SC6/1040559|
| TPD1E05U06 | ESD protection diode | 2 | 0.70 | https://www.digikey.in/en/products/detail/texas-instruments/TPD1E05U06DPYR/3844805|
| MF-MSMF050 | Resettable fuse | 2 | 1.02 | https://www.digikey.in/en/products/detail/bourns-inc/MF-MSMF050-30X-2/15926789|
| Header Pins | Pin headers | 2 | 0.13 |https://robu.in/product/2-54mm-1x40-pin-male-single-row-straight-short-header-strip-pack-of-3/ |
| 865–868MHz Antenna | Rubber duck antenna | 1 | 0.69 | https://robu.in/product/865-868mhz-1-8-dbi-gain-rubber-duck-antenna/|
| Solder Wire | Soldering wire | 1 | 3.30 | https://robu.in/product/soldering-wire-1-mm-100g/|
| Soldering Flux | Flux for soldering | 1 | 3.24 |https://www.amazon.in/dp/B08VHD1VS1?ref=cm_sw_r_cso_wa_apan_dp_CBZ3XEAZ58AZ3J60TK4D&ref_=cm_sw_r_cso_wa_apan_dp_CBZ3XEAZ58AZ3J60TK4D&social_share=cm_sw_r_cso_wa_apan_dp_CBZ3XEAZ58AZ3J60TK4D |
| Tip Tinner | Soldering tip cleaner | 1 | 5.41 |https://www.amazon.in/dp/B09BQRQ9JF?ref=cm_sw_r_cso_wa_apan_dp_LIGHTSABER1XE9YXXVSO&ref_=cm_sw_r_cso_wa_apan_dp_LIGHTSABER1XE9YXXVSO&social_share=cm_sw_r_cso_wa_apan_dp_LIGHTSABER1XE9YXXVSO |
| Hot Air Station | YIHUA 8858-IV portable | 1 | 25.09 |https://robu.in/product/yihua-8858-iv-portable-hot-air-station/ |
| PCB Manufacturing | Printed circuit board | 1 | 24.14 | |
| **Shipping** | **Shipping fee** | 1 | 13.01 | |
| **TOTAL** |  |  | **112.65 USD** | |

# Note:
- i've included everything including Total Shipping Fee and Cart screen shots in the BOM.
- I'm building 2 LoRa boards so that i can verify and use them in my future projects.

**Thank You!!**
