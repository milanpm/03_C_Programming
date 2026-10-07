# Day 18 — Debugging Basics: printf and GDB

- Date: 2026-10-07
- Status: Completed

## 1. Day 17 Review

- Compile: convert .c source files into .o object files.
- Link: combine object files into an executable.
- Headers provide shared declarations.
- A header change requires rebuilding the object files that depend on it.
- Make checks declared dependencies and file timestamps.

## 2. Logical Error

- total = scores[i]; overwrites the previous value.
- For scores {80, 90, 100}, assignment produces a final value of 100.
- total += scores[i]; accumulates the values.
- The corrected final total is 270.

## 3. printf Debugging

| i | scores[i] | Total before | Total after |
|---|---|---|---|
| 0 | 80 | 0 | 80 |
| 1 | 90 | 80 | 170 |
| 2 | 100 | 170 | 270 |

A print before an operation shows the old value.
A print after an operation shows the updated value.

## 4. Build and Run

Run from /d/GitHub/03_C_Programming:

    gcc -Wall -Wextra -g examples/18_Debugging/debug_sum.c -o examples/18_Debugging/debug_sum.exe
    ./examples/18_Debugging/debug_sum.exe

- -Wall and -Wextra enable compiler warnings.
- -g includes debugging information.

## 5. GDB Practice

Start GDB from the repository root:

    gdb ./examples/18_Debugging/debug_sum.exe

Enter these commands inside GDB:

    break main
    run
    next
    next
    print scores
    print total
    next
    print i
    next
    print total
    next
    print total
    continue
    quit

| Command | Purpose |
|---|---|
| break main | Set a breakpoint at main |
| run | Start the program |
| next | Execute a source line, stepping over function calls |
| print total | Inspect the current value of total |
| continue | Resume execution |
| quit | Exit GDB |

## 6. Verified Results

- scores = {80, 90, 100}
- total after initialization = 0
- First iteration: i = 0
- Before the first addition: total = 0
- After the first addition: total = 80
- Final output: Total: 270
- GDB reported normal termination.

The command "print score" failed because the variable is named "scores".

## 7. Key Takeaways

- Successful compilation does not guarantee correct results.
- Check variable values at the correct point in execution.
- In this exercise, GDB displayed the source line before executing it.
- Use next to execute the line, then print to inspect the result.

## 8. Next Step

Day 19: use assert to check expected conditions during development.
