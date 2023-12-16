# Discrete Fourier Transform (DFT) Calculator

This simple C program calculates the Discrete Fourier Transform (DFT) of a sinusoidal wave sample given a specified frequency. The DFT is a mathematical technique used in signal processing to analyze the frequency content of a discrete signal.

## Features

- Generates a sinusoidal wave sample based on user-input frequency.
- Prints the generated sinusoidal wave sample.
- Calculates and prints the DFT output, with a positive value at the specified frequency and 0 at other positions.

## Code Overview

- `calculateDFT(float frequency)`: Function to calculate and print the DFT of a sinusoidal wave with the given frequency.
- `main()`: The main function that takes user input for frequency and calls `calculateDFT()`.

## Usage

1. Compile the program.
2. Run.
3. Enter the desired frequency when prompted.

## Example and Output

### Example

  ```bash
  Enter the frequency: 440.0
  ```

### Output

  ```bash
  Sinusoidal wave sample:
  0.000000
  0.063466
  ```
  ```bash
  DFT output:
  64.000000
  0.000000
  ```

- In this example, the program prompts the user to enter a frequency (e.g., 440.0 Hz). The generated sinusoidal wave sample and the corresponding DFT output are then displayed. Adjust the DFT_SIZE and SAMPLE_RATE constants for different analysis requirements.
