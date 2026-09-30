# Server Health Monitor

## Overview

Server Health Monitor is a C++ console application developed as part of my hands-on learning in C++ and Linux (Ubuntu). The project was created to strengthen my programming and Linux fundamentals as I build toward cloud-native and systems development.

The application allows users to evaluate multiple servers by entering CPU and RAM utilization values. It validates the provided data, determines the health status of each server based on predefined utilization thresholds, and generates a summary of the overall results.

Through this project, I applied core C++ concepts in a practical server-monitoring scenario rather than using isolated programming exercises.

## Features

- Evaluate multiple servers in a single run
- Accept CPU and RAM utilization values for each server
- Validate CPU and RAM values within the 0–100% range
- Classify each server based on resource utilization
- Track Healthy, Moderate, High Usage, and Invalid results
- Generate a summary after all servers have been evaluated

## Server Health Classification

| Status | Condition |
|---|---|
| Healthy | CPU ≤ 60% and RAM ≤ 60% |
| Moderate | CPU ≤ 80% and RAM ≤ 80% |
| High Usage | Valid values that exceed the Moderate thresholds |
| Invalid | CPU or RAM is outside the 0–100% range |

## C++ Concepts Practiced

This project helped me practice and apply:

- Variables and data types
- Input and output using `cin` and `cout`
- Conditional statements (`if`, `else if`, `else`)
- Logical operators (`&&`, `||`)
- Functions
- Parameters and arguments
- Boolean return values
- `for` loops
- `while` loops
- Arrays
- Vectors
- Input validation
- Counters
- Basic program organization

## Technologies

- C++
- Linux / Ubuntu
- GNU C++ Compiler (`g++`)
- Git
- GitHub

## How to Compile and Run

Clone the repository:

```bash
git clone https://github.com/Arham-Mazhar/server-health-monitor.git
```

Move into the project directory:

```bash
cd server-health-monitor
```

Compile the C++ source file:

```bash
g++ health_monitoring_system.cpp -o HMS
```

Run the application:

```bash
./HMS
```

## Example Workflow

The program first asks how many servers should be evaluated.

For each server, the user provides:

```text
CPU Usage: 0-100%
RAM Usage: 0-100%
```

The application then evaluates each server and displays its health status.

For example:

```text
Server 1
CPU: 30%, RAM: 40%
Status: Server is healthy

Server 2
CPU: 75%, RAM: 65%
Status: Server usage is moderate

Server 3
CPU: 90%, RAM: 85%
Status: Warning: High Server usage

Server 4
CPU: 110%, RAM: 50%
Status: Invalid
```

The program then provides an overall summary:

```text
SUMMARY
Total servers check: 4
Healthy server: 1
Moderate server: 1
High server: 1
Invalid server: 1
```

## Learning Objective

The goal of this project is to build a strong foundation in C++, Linux, and basic system-monitoring concepts before progressing to more advanced cloud-native technologies.

The project will be improved incrementally as I continue learning software testing, automation, containerization, and cloud-native development.

## Future Improvements

Planned improvements include:

- Refactoring the application using object-oriented programming
- Adding automated tests
- Improving error handling and input validation
- Collecting system metrics automatically instead of relying only on manual input
- Containerizing the application with Docker
- Exploring deployment and monitoring concepts using Kubernetes

## Author

**Arham Mazhar**

Master of Computational Science 
Laurentian University, Ontario, Canada
