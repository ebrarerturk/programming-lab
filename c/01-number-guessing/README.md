# Number Guessing Game
This is my first C mini project.  
The program generates a random number between 1 and 100, and the user tries to guess it.

## What I did
- Wrote a simple guessing game in C.
- Used `rand()` and `srand(time(NULL))` for random number generation.
- Compared the user input with the computer's number.

## What I learned
- How to use standard libraries (`stdlib.h`, `time.h`).
- How to generate random numbers in C.
- Basic `if/else` control flow.

## Files
- `number_guessing.c` → main program

## How to compile and run
On Linux / macOS:
```bash
gcc number_guessing.c -o guessing_game
./guessing_game
On Windows (MinGW):
gcc number_guessing.c -o guessing_game.exe
guessing_game.exe

