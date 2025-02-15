# Meta Hacker Cup 2024 - Problem A: Subsonic Subway

## Problem Overview

This is my solution to the first round of the Meta Hacker Cup 2024, Problem A asks calulate the minimum speed at which sonic need to run in order to deliver his sandwhichs. The goal of this problem is to print out the minimun speed for each set of platforms.

Link to problem: [Meta Hacker Cup Problem A - Link](https://www.facebook.com/codingcompetitions/hacker-cup/2024/round-1/problems/A?source=google)

## Solution Approach

The solution to this problem follows these steps:

1. **Understanding the Input:**
   - The frist line of input is an integer corsesponding to the number of test cases to follow. The following integer is the number of platforms for each test case. Each platform has a coressponding time interval in which the sandwhichs need to me delivered.

2. **Breaking Down the Problem:**
   - By visulizing the problem as a graph of time and distance, the minimum speed is the maximum slope of the line that touch all the time intervals
   - ![alt text](https://raw.githubusercontent.com/c137v8/subsonic_subway/refs/heads/main/graph.png)
   
3. **Algorithm:**
   - For each platform, the slop is calulated from origin. If the slope is less than the previous value, the minspeed variable is updated with the new value.

4. **Edge Cases:**
   - If the minspeed ends up being greater than maxspeed, -1 is printed signifing that no speed for the given platforms is possible

## Code Implementation

This repository contains the code to solve the Meta Hacker Cup 2024 Problem A. The solution is written in C++. You can find the implementation in the `main.cpp` file.

### Files

- `main.cpp`: The main solution code.
- `README.md`: This file, which explains the problem and solution.
- `subsonic_subway_input.txt` : Inputs for the question 

## How to Run the Code

To run the solution, follow these steps:

1. Clone this repository:

   ```bash
   git clone https://github.com/c137v8/subsonic_subway
   cd subsonic_subway
   g++ main.cpp
   ./a.out subsonic_subway_input.txt

