# Battery Log Analyzer in C

This is a small student level C project for analyzing battery measurement data.

The program reads samples from a text file. Each sample contains:

- time
- voltage
- current

Then it:

- computes power for each sample
- finds minimum, maximum, and average values
- detects undervoltage and overcurrent conditions
- sorts samples by voltage

## Topics used

This project uses basic C programming topics such as:

- structs
- arrays
- functions
- file input
- loops
- sorting

## Input format

The input file contains one sample per line in the following format:

time voltage current

Example:

0 4.20 0.80  
1 4.15 0.95  
2 4.05 1.10  

## How to compile

```bash
gcc main.c -o battery_log_analyzer
