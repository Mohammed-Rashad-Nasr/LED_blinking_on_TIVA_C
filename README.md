
# LED blinking using TIVA C

this project is an application to test arm cortex m4 drivers written on tiva c board and tested using kiel simulator .
project made during egFWD advanced embedded systems nanodegree as an application on arm interfacing section .

## drivers used

 - GPIO  : used to control led toggeling and bit masking feature is implemented and tested 
 - Systick : used for delay time as representation for duty cycle  
 - NVIC : used to handle interrupts generated by systick
 - MCU : used for clock initialization 


## Features

- on and off times are controlled during runtime using pushbuttons
- on and off times are not limitted to systick maximum value because there is a function to control delay time and reload systick registers automatically 


## Documentation

video is uploaded for demonstration and testing
[![Watch the video](https://drive.google.com/file/d/1ebVJp4SOgRS_9NGiqXKgnytu2LeRKJsO/view?usp=share_link)

## flowchart

![flowchart](https://github.com/Mohammed-Rashad-Nasr/LED_blinking_on_TIVA_C/blob/main/Flowcharts.png)
