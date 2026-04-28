# SKILL LAB PRATICAL HACKATHON

## Final Project README

> **Project Weight:** 100%  
> **Team Size:** 4/3 students  
> **Project Duration:** 8 hours  
> **Total Time Available:** 32 effort-hours per team  
> **Project Type:** Playful, interactive, technology-based experience

---

# Before you begin

## Fork and rename this repository

After forking this repository, rename it using the format:

`SKILLLAB_PROR-2026-TeamName`

### Example

`SKILLLAB_PROR-2026-AuroWizards`

Do not keep the default repository name.

---

# How to use this README

This file is your team’s **working project document**.

You must keep updating it throughout the build period.  
By the final review, this README should clearly show:

- your idea,
- your planning,
- your design decisions,
- your technical process,
- your build progress,
- your testing,
- your failures and changes,
- your final outcome.

## Rules

- Fill every section.
- Do not delete headings.
- If something does not apply, write `Not applicable` and explain why.
- Add images, screenshots, sketches, links, and videos wherever useful.
- Update task status and weekly logs regularly.
- Use this file as evidence of process, not only as a final report.

---

# 1. Team Identity

## 1.1 Studio / Group Name

`Tech Explorer`

## 1.2 Team Members

| Name           | Primary Role                    | Secondary Role | Strengths Brought to the Project |
| -------------- | ------------------------------- | -------------- | -------------------------------- |
|Pranjal Saha | `` | `Product Designing`  | `Hardware `| `Material Handling, Hardware`    |
| Divyesh Rawat  | `Research`   | `Designing`     | `Material Handling, Hardware`    |
| Yograj Tare  | `Documentation`   | `coding`     | `Material Handling, Hardware`    |
| Vitthalrao Zende  | `Hardware`   | `Hardware`     | `Material Handling, Hardware,coding`    |

![image alt](https://github.com/yograjtare1601-dot/SKILLLAB__PROR_2026_Tech_Explorers/blob/main/images/Team_Teach_Explorer.jpeg?raw=true)

## 1.3 Project Title

`"Memory matrix game"`

`(because Project-or)`



## 1.4 One-Line Pitch

`A projected, fully customizable time portal where engineering education is done through PUBG battlefield in the comfort of our home`

## 1.5 Expanded Project Idea

In 1–2 paragraphs, explain:

- what your project is,
- what kind of experience it creates,
- what technologies are involved.

**Response:**  
`A projected and fully customizable time portal can transform engineering education into an immersive PUBG-style battlefield experience from the comfort of home. In this environment, students can learn engineering concepts by entering a virtual battlefield where challenges, obstacles, and missions are designed around real technical problems. Instead of passively studying theory, learners actively apply concepts such as electronics, coding, sensors, robotics, mechanics, and system design to complete missions, solve problems, and progress through different levels. This approach makes engineering education more interactive, engaging, and practical by combining gaming, simulation, and hands-on problem-solving in a familiar and exciting format.`

---

# 2. Philosophy Fit

## 2.1 Experience, Not Social Problem

This module does **not** require your project to solve a large social problem.

You are allowed to build:

- toys,
- games,
- interactive objects,
- playful machines,
- kinetic artifacts,
- humorous devices,
- strange but delightful experiences,
- things that are entertaining to use or watch.



# 3. Inspiration

## 3.1 References

List what inspired the project.

| Source Type | Title / Link                                                        | What Inspired You                                                                         |
| ----------- | ------------------------------------------------------------------- | ----------------------------------------------------------------------------------------- |
| `[YOUTUBE]`   | `(https://youtu.be/R_HF4PIuCJA?si=_zFgoTzvEJT0yjld)` | `Memory Mapping` | 
|             |                                                                     |                                                                                           |
|             |                                                                     |                                                                                           |

## 3.2 Original Twist

What makes your project original?
The originality of this project lies in transforming a simple LED blinking system into an interactive, joystick-controlled memory challenge that combines embedded systems with human cognitive   


---

# 4. Project Intent

## 4.1 User Journey 

Describe exactly how a user will use the project.Make it a story
A Person connects the Raspberry Pi Pico to power and the LEDs turn ON in a simple blinking pattern. The student presses a button, and the LEDs start moving one by one like a running light. When the button is pressed again, the pattern changes to a different style. The student realizes that by giving simple inputs, they can control how the LEDs behave.From this project we can increas our memory strength.

                                                  |



---

# 5. Definition of Success

## 5.1 Definition of “Usable”
In our LED Simulator using the Raspberry Pi Pico, usability means:
1. LEDs change patterns correctly
2. Button/joystick works smoothly
3. User can easily interact without difficulty


## 5.2 Minimum Usable Version

What is the smallest version of this project that still delivers the core experience?
The smallest version of the LED Simulator uses one LED and a microcontroller to demonstrate basic ON/OFF control and timing, which forms the foundation of all LED patterns.  


## 5.3 Stretch Features

What features are nice to have but not essential?
Features like display, sound, wireless control, and advanced effects are optional enhancements that improve user experience but are not required for the basic working of the LED Simulator.

---

# 6. System Overview

## 6.1 Project Type

Check all that apply.

- [x] Electronics-based

- [ ] Mechanical

- [x] Sensor-based

- [x] App-connected

- [x] Motorized

- [ ] Sound-based

- [x] Light-based

- [x] Screen/UI-based

- [x] Fabricated structure

- [x] Game logic based

- [x] Installation

- [ ] Other:

## 6.2 High-Level System Description

Explain how the system works in simple terms.

Include:

- input,
- processing,
- output,
- physical structure,
- app interaction if any.

**Response:**  

## 6.3 Input / Output Map

| System Part            | Type                  | What It Does                                                             |
| ---------------------- | --------------------- | ------------------------------------------------------------------------ |
| Joystick               | Input                 | Allows the user to navigate through led's and make the correct pattern         |
| Shrike Lite (RP2040)   | Processing            | Executes game logic, reads input, controls joysticks, and evaluates answers |
| led's (x5)| Output                | show the pattern                      |
| LCD Display            | Output                | Shows answer options and game messages                                   |

|BreadboRD     | Mechanical/Structural | Holds all components together and forms the body of JORVIS               |


---

# 7. Sketches and Visual Planning

## 7.1 Concept Sketch

Add an early sketch of the full idea.

**Insert image below:**  
`[Upload image and link here]`

Example:

```md

```



## 7.2 Labeled Build Sketch

Add a sketch with labels showing:

- structure,
- electronics placement,
- user touch points,
- moving parts,
- output elements.

**Insert image below:**  
`[Upload image and link here]`
![image alt](https://github.com/yograjtare1601-dot/SKILLLAB__PROR_2026_Tech_Explorers/blob/main/images/lables%20build%20sketch.jpeg?raw=true)
## 7.3 Approximate Dimensions

| Dimension        | Value   |
| ---------------- | ------- |
| Length           | `16 cm` |
| Width            | `16 cm` |
| Height           | `8 cm`  |
| Estimated weight | `400 g` |

---

# 8. Electronics Planning

## 8.1 Electronics Used

| Component                 | Quantity | Purpose                               |
| ------------------------- | --------:| ------------------------------------- |
| `[Shrike lite]`                 | `1`      | `[Main controller]`                   |
| `[Joystck]`    | `1`      | `[Control led's]`                  |
| `[LED]`             | `8`      | `[Main logic]`                     |
| `[Display]`        | `1`      | `[ show Progess]`                       |
| `[Buzzer]`   | `2`      | `[Show Progress]`                             |
| `[Push button]`             | `2`      | `[Display obstacles]`                 |
| `Register` | `8`      | `[Protection]` |
| `Breadborad` | `1`      | `[For prototyping]` |


## 8.2 Wiring Plan

Describe the main electrical connections.

**Response:**  
`The Shrike lite is connected to the led setup using fice GPIO pins (5,6,7,8,9) the logic is created by the microcontroller.

The the joystick is connected to the shrike lite using pins 26 for analog (VRx) gnd ,VCC
All components share a common ground to ensure stable operation. The projector and camera are connected to the laptop, which handles tracking and game logic separately.`

## 8.3 Circuit Diagram

Insert a hand-drawn or software-made circuit diagram.

**Insert image below:**  
`[Upload image and link here]`
<img width="867" height="1156" alt="" src="" />


# 9. Power Plan

| Question         | Response                                                                                                                                          |
| ---------------- | ------------------------------------------------------------------------------------------------------------------------------------------------- |
| Power source     | `Battery (Li-ion pack)`                                                                                                                           |
| Voltage required | `~6–8.4V for motors (via driver), stepped down to 5V for ESP32 (buck converter)`                                                                  |
| Current concerns | `Motors can draw high current under load, which may cause voltage drops affecting ESP32 and WiFi stability`                                       |
| Safety concerns  | `Avoid over-discharging Li-ion batteries, ensure proper voltage regulation, prevent short circuits, and secure wiring to avoid loose connections` |

---

# 10. Software Planning

## 10.1 Software Tools

| Tool / Platform                | Purpose                                        |
| ------------------------------ | ---------------------------------------------- |
| `[MicroPython]`                | `Control ESP32`                                |
| `[Python/PyGame/OpenCV]`       | `Track markers, game logic, create projection` |
| `[Fusion/Blender/Illustrator]` | `[Prototyping structure]`                      |
|                                |                                                |

## 10.2 Software Logic

Describe what the code must do.

Include:

- startup behavior,
- input handling,
- sensor reading,
- decision logic,
- output behavior,
- communication logic,
- reset behavior.

**Response:**  
`

- **Startup behavior:**  
  The ESP32 initializes motor pins, PWM control, and starts a WiFi access point with a web server. The laptop initializes camera input, tracking system, and projection mapping.
- **Input handling:**  
  Movement commands are received from the laptop (pygame sends http requests)
- **Sensor reading:**  
  The camera continuously captures frames, and OpenCV detects ArUco markers to determine the car’s position and orientation.
- **Decision logic:**  
  The system maps the car’s position into a virtual coordinate system and checks for nearby obstacles or collisions. If movement is valid, the command is allowed; if not, it is blocked or replaced with a feedback action (like a slight shake).
- **Output behavior:**  
  The ESP32 drives the motors using PWM signals to control speed and direction. The projector displays the updated game environment, including obstacles, targets, and feedback visuals.
- **Communication logic:**  
  The laptop sends HTTP requests (e.g., `/forward`, `/left`) to the ESP32 over WiFi. The ESP32 parses these commands and executes motor actions.
- **Reset behavior:**  
  If no command is received within a short timeout, the ESP32 stops the motors. The game resets when a level is completed or restarted.`

## 10.3 Code Flowchart

Insert a flowchart showing your code logic.

Suggested sequence:

- start,
- initialize,
- wait for input,
- read input,
- decision,
- trigger output,
- repeat or reset,
- error handling.

**Insert image below:**  
<img width="1600" height="1200" alt="image" src="" />
<img width="1600" height="1200" alt="image" src="" />




# 11. Bill of Materials

## 11.1 Full BOM

| Item                             | Quantity | In Kit? | Need to Buy? | Estimated Cost | Material / Spec               | Why This Choice?          |
| -------------------------------- | --------:| ------- | ------------ | --------------:| ----------------------------- | ------------------------- |
| `[ESP32]`                        | `1`      | `Yes`   | `No`         | `0`            | `38 Pin ESP32`                | `[To control components]` |
| `[Motor Driver]`                 | `[1]`    | `[Yes]` | `[No]`       | `0`            | `[LN296]`                     | `[To drive both motors]`  |
| `[DC Motors and wheel]`          | `[2]`    | `[No]`  | `[Yes]`      | `[150]`        | `[BO Motors and 6 cm wheels]` | `[high torque motors]`    |
| `[Buck Converter]`               | `[1]`    | `[No]`  | `[Yes]`      | `[75]`         |                               |                           |
| `[Li-ion batteries with holder]` | `[1]`    | `[No]`  | `[Yes]`      | `[200]`        |                               |                           |

## 11.2 Material Justification

Explain why you selected your main materials and components.

**Response:**  
`DC motors (BO motors) were chosen instead of servos or steppers because the system requires continuous rotation for movement rather than precise angular control (Previously, we were considering using steppers as we were planning on tracking movement on the ESP using its relative position from an origin, but since we're using a camera now, this is not required). A motor driver (L298N) was used to allow bidirectional control and speed variation using PWM.`


## 11.3 Items You chose

| Item                 | Why Needed               | Purchase Link | Latest Safe Date to Procure | Status       |
| -------------------- | ------------------------ | ------------- | --------------------------- | ------------ |
| `BO Motors + Wheels` | `Drive system for car`   | `robu.in`     | `15th April`                | `[Received]` |
| `Buck Converter`     | `Stable power for ESP32` | `local store` | `before testing`            | `[Received]` |
| `Li-ion Batteries`   | `Portable power`         | `local store` | `before testing`            | `Recieved`   |

## 11.4 Budget Summary

| Budget Item           | Estimated Cost              |
| --------------------- | ---------------------------:|
| Electronics           | `[400]`                     |
| Mechanical parts      | `[200]`                     |
| Fabrication materials | `[0 (Available on campus)]` |
| Purchased extras      | `[0]`                       |
| Contingency           | `[300]`                     |
| **Total**             | `[900]`                     |

## 11.5 Budget Reflection

If your cost is too high, what can be simplified, removed, substituted, or shared?

**Response:**  

---

# 12. Planning the Work

## 12.1 Team Working Agreement

Write how your team will work together.

Include:

- how tasks are divided,
- how decisions are made,
- how progress will be checked,
- what happens if a task is delayed,
- how documentation will be maintained.

**Response:**  


## 12.2 Task Breakdown

| Task ID | Task                    | Owner    | Estimated Hours | Deadline     | Dependency | Status |
| ------- | ----------------------- | -------- | ---------------:| ------------ | ---------- | ------ |
| T1      | `[Finalize concept]`    | `[Both]` | `2`             | `1st April`  | `None`     | `Done` |


## 12.3 Responsibility Split

| Area                 | Main Owner | Support Owner |
| -------------------- | ---------- | ------------- |
| Concept              | `[Gopal]`  | `[Kader]`    |
| Electronics          | `[]`       | `[]`     |
| Coding               | `[]`       | `[]`     |
| Mechanical build     | `[]`       | `[]`    |
| Testing              | `[]`       | `[]`    |
| Documentation        | `[]`       | `[]`     |

---

# 13. 2 hour Milestones

## 13.1 8-hour Plan

### Bi Hour 1 — Plan and De-risk

Expected outcomes:

- [x] Idea finalized
- [x] Core interaction decided
- [x] Sketches made
- [x] BOM completed
- [x] Purchase needs identified
- [ ] Key uncertainty identified
- [x] Basic feasibility tested

### Bi Hour 2 — Build Subsystems

Expected outcomes:

- [x] Electronics tests completed
- [ ] CAD / structure planning completed
- [ ] App UI started if needed
- [x] Mechanical concept tested
- [x] Main subsystems partially working

### Bi Hour 3 — Integrate

Expected outcomes:

- [x] Physical body built
- [x] Electronics integrated
- [x] Code connected to hardware
- [ ] App connected if required
- [x] First playable version exists

### Bi Hour 4 — Refine and Finish

Expected outcomes:

- [x] Technical bugs reduced
- [x] Playtesting completed
- [x] Improvements made
- [x] Documentation completed
- [x] Final build ready

## 13.2  Update Log

| Week   | Planned Goal   | What Actually Happened | What Changed   | Next Steps     |
| ------ | -------------- | ---------------------- | -------------- | -------------- |
|  Hour 1 | | `[Write here]`         | `[Write here]` | `[Write here]` |
|  Hour  2 | `[Writeh here]` | `[Write here]`         | `[Write here]` | `[Write here]` |
| Hour 3 | `[Write here]` | `[Write here]`         | `[Write here]` | `[Write here]` |
| Hour 4 | `[Write here]` | `[Write here]`         | `[Write here]` | `[Write here]` |

---

# 14. Risks and Unknowns

## 14.1 Risk Register

| Risk                                                            | Type         | Likelihood | Impact   | Mitigation Plan                                                                       | Owner                |
| --------------------------------------------------------------- | ------------ | ---------- | -------- | ------------------------------------------------------------------------------------- | -------------------- |
| WiFi connection between laptop and ESP32 becomes unstable       | `Technical`  | `Medium`   | `High`   | Keep ESP32 close, ensure stable power supply, reduce network load, add fail-safe stop | `[Gopal]`           |


## 14.2 Biggest Unknown Right Now

What is the single biggest uncertainty in your project at this stage?
The biggest problem faced at this stage is ensuring consistent and accurate synchronization between user input (joystick/buttons) and real-time LED pattern updates, especially under timing , as small delays or logic mismatches can affect responsiveness and overall user experience 


---

# 15. Testing 

## 15.1 Technical Testing Plan

| What Needs Testing     | How You Will Test It                                                                 | Success Condition                                                                                    |
| ---------------------- | ------------------------------------------------------------------------------------ | ---------------------------------------------------------------------------------------------------- |
| `[Wifi connection]`    | `[Check if motor spins via app button]`                                              | `[Both motors accurately respond to wifi signals]`                                                   |
                       |
## 15.2 Testing and Debugging Log

| Date          | Problem Found                         | Type         | What You Tried                                | Result               | Next Action                                    |
| ------------- | ------------------------------------- | ------------ | --------------------------------------------- | -------------------- | ---------------------------------------------- |
| `28th April`  | Led were not glowing at first and'       | `Electrical  | `We have tried by chsanging diffrent codes  | Then led started to glow | Started working with joy stick            
| 28th April  | Lcd display was not working with shrike | Electrical | We changed pico to esp32 to check whether lcd is working | We saw that lcd is not working | We have started with assembling of joystick
|28th April  | Actual label of joystick to work was 5v but it was working on 3.3v properly | Electrical | So led started to glow while we were moving joystick| Started of assembling of both components | 


## 15.3 Playtesting Notes

| Tester      | What They Did                        | What Confused Them                    | What They Enjoyed                         | What You Will Change                          |
| ----------- | ------------------------------------ | ------------------------------------- | ----------------------------------------- | --------------------------------------------- |
Pranjal | Designed LED patterns, developed code using Raspberry Pi Pico, and handled system integration |He was confused about the led pattern at first | Enjoyed creating and testing different LED patterns and logic | Improve code optimization and add more pattern variations |
Yograj | Tested LEDs, verified connections, and checked pattern outputs |about the pattern output and numbering of led |Enjoyed observing different LED behaviors and patterns | Improve testing accuracy and reduce wiring errors |
Divyesh | Assembled circuit on breadboard, handled wiring of LEDs and resistors and done documentation |Find diffculty while making documentation |Enjoyed building the physical setup and circuit connections | Improve wiring neatness and connection stability |
Vitthalrao | Tested LCD, verified display connections and output |Lcd was not working at first so we have to double check it | Enjoyed working with display and seeing system output visually | Improve display clarity and integration with patterns |


---

# 16. Build Documentation

## 16.1 Fabrication Process

Describe how the project was physically made.

Include:

- cutting,
- 3D printing,
- assembly,
- fastening,
- wiring,
- finishing,
- revisions.
  
The fabrication process of the LED Pattern Memory Game involved designing, assembling, and integrating hardware components using a Raspberry Pi Pico and joystick module.

Design:
The circuit was planned by selecting components and arranging LEDs and joystick on a breadboard for proper layout and visibility.

Cutting:
Jumper wires were cut to appropriate lengths to maintain a neat and organized circuit.

3D Printing (Optional):
An enclosure can be designed using CAD and fabricated using 3D printing for better structure and safety.

Assembly:
All components, including LEDs and joystick, were placed on the breadboard in an accessible arrangement.

Fastening:
Components were securely fitted on the breadboard, and enclosure fastening can be done if used.

Wiring:
LEDs were connected to Pico GPIO pins through resistors, with a common ground. The joystick was connected to analog and digital pins for input control.

Finishing:
Connections were checked and adjusted to ensure proper working and a clean layout.

Revisions:
The system was tested multiple times, and minor corrections were made to improve performance and accuracy.
`Design (CAD Modeling):
The initial model was created using CAD software, where components were designed based on the actual dimensions of the electronic parts. This ensured accurate fitting and minimized errors during assembly.
Cutting (Laser Cutting):
The designed parts were fabricated using laser cutting techniques. Sheets were cut precisely according to the CAD model to create the structural base and mounts for components.`

`Components were fixed using adhesives and mechanical supports. Certain parts were intentionally kept modular (not permanently fixed) to allow easy replacement and modification of electronics.
Surface Finishing:
Some parts were sanded to smooth rough edges after cutting. Sawdust mixed with adhesive was used to fill gaps and uneven edges, improving structural finish. The final structure was then painted for better aesthetics and durability.`

`Environment Setup (Dark Room Fabrication):
To enhance projection visibility, a controlled dark environment was created using Z-boards, paper sheets, and bedsheets. This minimized external light interference and improved projection clarity.
Revisions and Iterations:
Multiple adjustments were made throughout the process, including refining alignment, improving structural stability, repositioning components, and optimizing the interaction between the physical car and projected environment.`

## 16.2 Build Photos

Add photos throughout the project.

Suggested images:

- early sketch,
- prototype,
- electronics testing,
- mechanism test,
- app screenshot,
- final build.
- <img width="960" height="1280" alt="WhatsApp Image 2026-04-24 at 9 46 02 AM (1)" src="https://github.com/user-attachments/assets/74baa570-5770-483e-be6d-d2f03386e37c" />





# 17. Final Outcome

## 17.1 Final Description

Describe the final version of your project.
The final version of the project is an interactive LED-based system built using a Raspberry Pi Pico with the Shrike Light module, where multiple LEDs display dynamic patterns controlled by programmed logic and user input. The microcontroller generates clear and responsive visual outputs, with LEDs representing different states such as movement, patterns, or game elements.
User interaction through a joystick (or buttons) enables real-time control, making the system interactive rather than just pre-programmed. The design emphasizes clarity and smooth transitions, ensuring patterns run without flickering and are easy to understand. Patterns include sequential lighting, random generation, and movement-based effects that simulate motion across LEDs. Overall, the project successfully integrates hardware and software into a stable, responsive, and engaging system within given constraints.  


## 17.2 What Works Well
The code we have selected has run properly and led started to glow properly and at wrong selection the buzzer started to buzz 


## 17.3 What Still Needs Improvement
We stil need to improve code to re-set the LED and we could add lED so that at wich level the person reached that can be showed and a sound system to make it more intresting  

## 17.4 What Changed From the Original Plan

How did the project change from the initial idea?
The project evolved from a basic LED pattern generator into a more interactive and responsive system, where instead of just displaying predefined patterns, user input (joystick/buttons) was incorporated to control movement and behavior. Initially, the focus was on complex visual patterns, but due to hardware and time constraints, the design was simplified to clearer, more meaningful patterns with better responsiveness. The project also shifted from static animations to a dynamic system with real-time feedback, improving user engagement and overall functionality.  


---

# 18. Reflection

## 18.1 Team Reflection

What did your team do well?
Strong collaboration within the limited 8-hour timeline, with parallel progress on LED hardware setup, pattern logic coding, and documentation. Quick and practical decision-making during ideation, especially in selecting achievable LED patterns and interaction methods. Effective adaptability in simplifying designs to ensure a working prototype. Continuous team support where members assisted in debugging circuits and code together. Successful integration of LED hardware and software logic into a responsive and visually clear system.
What slowed you down?  
We want use lcd display for the score projection but due to some hardware and technical issue we are not able to use it, It wasted most of our time. The integration of led patterns and joystick was hectic as we face many challenges to conncet it like led's are not working in sequence ,when the button on the joystick is pressed it is not working.

How well did you manage time, tasks, and responsibilities?
The task were divided by the four grp members equally the thouth was to complete it withing 6 hoursn but it was'nt gone as planned we were late according tothe time set within ourself but at last the work was fully done all the members understood about their work and responsibility   



## 18.2 Technical Reflection

What did you learn about:


Electronics: Learned how to safely and efficiently control multiple LEDs using microcontroller outputs, resistors, and proper wiring.
learn about why experimenting with connection is important 

Coding: Learned to create and manage LED patterns using loops,  timing control, and logical sequencing (all the codes copied from Chat-gpt).

Mechanisms: Learned how light patterns and timing can simulate motion and create interactive visual behavior using joystick.

Fabrication: Not Applicable.

Integration: Learned to combine hardware and software so that code-driven logic produces accurate real-world LED patterns.



**Response:**  


## 18.3 Design Reflection

What did you learn about:

Designing: Good design is about simplifying complex systems into something buildable within real constraints, ensuring hardware, code, and interaction all work together smoothly.

Delight: Score base system helps user to get more intrest in the game.

Clarity: Physical outputs must be unambiguous; clear servo positions and well-timed movements are essential for users to correctly interpret semaphore gestures.

Physical Interaction: Using joystick for the led pattern recognition it helps user to engage more and keep there intrest in it.

Understanding: Users learn better when information is introduced gradually, starting with simple led pattern and clear visual patterns it helps to strength our memory.

Iteration: Continuous testing and refinement were critical;most improvment came from debugging and trying different logic patterns.



## 18.4 If You Had One More hour

What would you improve next?

First we will add a display for showing a score and a sound system for making the game more engaging.Also we want to make a 4x4 or 8x8 led pannel so that the game can become more instesting and chalenging.

---

# 19. Final Submission Checklist

Before submission, confirm that:

- [x] Team details are complete
- [x] Project description is complete
- [x] Inspiration sources are included
- [x] Sketches are added
- [x] BOM is complete
- [x] Purchase list is complete
- [x] Budget summary is complete
- [x] Mechanical planning is documented if applicable
- [ ] App planning is documented if applicable
- [x] Code flowchart is added
- [x] Task breakdown is complete
- [x] Weekly logs are updated
- [x] Risk register is complete
- [x] Testing log is updated
- [x] Playtesting notes are included
- [x] Build photos are included
- [x] Final reflection is written
<img width="1131" height="1600" alt="image" src="" />

---


---


