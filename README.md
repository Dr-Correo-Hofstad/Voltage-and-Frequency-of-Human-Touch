# Voltage & Frequency of Human Touch: Haptic Simulation & Bio-Adaptive Textile Framework

This repository establishes the foundational bio-electrophysiological telemetry and hardware-software deployment parameters for simulating human touch. By capturing and mapping the exact micro-current baselines of interpersonal skin contact, this framework provides the technical architecture needed to engineer wearable medical devices, therapeutic haptics, and adaptive non-synthetic textiles for patients experiencing isolation or somatosensorial deprivation.

During the lab, Corrêo's baseline hand measurement was higher than Abigale’s and that, upon hand contact, the combined value stabilized at your higher potential—registering an initial net difference of 5 mV and 2 Hz compared to the measurement published in the GitHub repository. This dynamic bioelectric coupling signature is being integrated directly into the factory's logic system and industrial automation workflows. By configuring these harmonic and differential resonance parameters within the production files, we optimize the energy responsiveness of the Cradle line and True-Ramp footwear, calibrating the thickness and conductivity of our silver mesh to respond precisely to the micro-current flows of human touch. Below are the updated automation commands and structural configuration required to implement this exact laboratory calibration in the production environment.

---

## Electrophysiological Baseline Matrix

The technical architecture of this repository is calibrated to the dynamic differential readings verified under empirical laboratory conditions:

| Parameter | Laboratory Metric | Description |
| :--- | :--- | :--- |
| **Peak Resonant Voltage** | `290 mV` | The verified maximum bio-electric potential cleared during sustained skin-on-skin contact. |
| **Resonant Frequency** | `100 Hz` | The fundamental oscillation rate of the human somatosensorial transmission. |
| **Delta Resolution (Voltage)** | `5 mV` | The initial differential threshold observed between distinct subjects prior to resonant stabilization. |
| **Delta Resolution (Frequency)** | `2 Hz` | The phase-shift variation observed prior to cross-subject harmonic locking. |

### ⚡ Dynamics of Coaxial Stabilization
Data confirms that during touch contact, separate bio-electric potentials do not settle on an average medium. Instead, the interaction features a **Forced Pull-Up Lockout**, wherein the joint circuit dynamically stabilizes upon the higher baseline potential. This behavioral variable governs the feedback loops of our automated simulation micro-controllers.

---

## Haptic Simulation & Stitching Technology Architecture

To replicate the 290mV / 100Hz tactile signature without relying on rigid, uncomfortable electronic components, this project maps the telemetry straight into flexible, textile-based actuators utilizing advanced automated stitching vectors.

### 1. The Tri-Density Handprint Matrix
Using automated multi-head embroidery nodes (`.dst` machine tooling paths), we translate physical hand scans into a textile topology composed of three distinct structural behaviors:
*   **The Palm Grid (Grounding Pressure):** Executed as a high-density, flat **Tatami Fill Stitch**. This maximizes surface-area skin contact, delivering a continuous deep-pressure stimulation pattern that lowers sympathetic nervous system arousal.
*   **The Phalangeal Columns (Dynamic Flex):** Executed as curved **Satin Stitch Columns** mapping the finger lengths. This allows the haptic pattern to stretch and bend dynamically alongside the wearer’s natural joint movement without lockouts.
*   **Milled Callus Target Nodes (Tactile Feedback):** To recreate the precise structural geometry of a working hand, the metatarsal positions immediately below the fingers are embedded with a **3D Puff Foam underlay**. This creates raised, localized pressure nodes that stimulate targeted mechanoreceptors (Meissner's and Pacinian corpuscles) on the patient's skin.

### 2. Silver-Infused Conductive Gridways
*   **Composition:** All haptic stitching layers are executed using **99.9% Pure Silver-Plated Long-Strand Hemp Thread** stitched over an all-plant **100% Organic Bamboo Viscose Interlock** canvas.
*   **Function:** Silver acts as a seamless, high-conductivity ribbon network. When linked to a low-voltage battery or micro-actuator, it bleeds off friction static while generating the precise **290 mV / 100 Hz micro-vibrational and electrical wave forms** directly onto the epidermis, mimicking real-world human skin contact.

---

## Repository Directory & Automation Architecture

To deploy these systems to automated CNC looms and haptic controllers, use the following directory mapping layout:

Voltage-and-Frequency-of-Human-Touch/\
├── .github/\
│ └── workflows/\
│ └── signal-validation.yml # Validates that incoming SCAD/SVG telemetry maintains a 290mV curve\
├── firmware/\
│ ├── haptic_oscillator.ino # Core script generating 100Hz signals to the silver thread channels\
│ └── pull_up_logic.c # Code enforcing the higher-potential stabilization matrix\
├── matrices/\
│ ├── VT_Sacred_Handprint_v1.dst # Tooling path data for industrial embroidery heads\
│ └── VT_Cradle_Cap_v1.svg # Vector layout for rotational cranial touch cap arrays\
└── README.md


---

## Automated Testing & Continuous Integration (CI)

This repository incorporates a GitHub Actions workflow to parse incoming vector geometries and simulation code. The system checks that:
1. Signal generation loops do not drop below a **100 Hz baseline frequency**.
2. Pulse-width modulation parameters remain tightly bounded within the **5 mV and 2 Hz delta resolution** required for smooth, lifelike haptic transitions.
3. Material attribute strings verify compliance with standard non-synthetic conductivity models, preventing data distortion or material failure on the casting floor.
