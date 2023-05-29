#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846 // PI
#define SAMPLE_RATE 44100   // Sampling rate
#define DFT_SIZE 128    // DFT size

void calculateDFT(float frequency) {
    int i, j;
    float sinusWave[DFT_SIZE];
    float real[DFT_SIZE];
    float imag[DFT_SIZE];
    float magnitude[DFT_SIZE];

    // Generating a sinusoidal wave sample
    for (i = 0; i < DFT_SIZE; i++) {
        sinusWave[i] = sin(2 * PI * frequency * i / SAMPLE_RATE);
    }

    // Printing the sinusoidal wave
    printf("Sinusoidal wave sample:\n");
    for (i = 0; i < DFT_SIZE; i++) {
        printf("%f\n", sinusWave[i]);
    }

    // Calculating the DFT
    for (i = 0; i < DFT_SIZE; i++) {
        real[i] = 0.0;
        imag[i] = 0.0;

        for (j = 0; j < DFT_SIZE; j++) {
            real[i] += sinusWave[j] * cos(2 * PI * i * j / DFT_SIZE);
            imag[i] -= sinusWave[j] * sin(2 * PI * i * j / DFT_SIZE);
        }
        magnitude[i] = sqrt(real[i] * real[i] + imag[i] * imag[i]);

        // Printing the DFT output with a positive value at the corresponding frequency and 0 at other positions
        if (i == (int)(frequency * DFT_SIZE / SAMPLE_RATE)) {
            printf("DFT output:\n");
            printf("%f\n", magnitude[i]);
        }
        else {
            printf("0.000000\n");
        }
    }
}

int main() {
    float frequency;

    printf("Enter the frequency: ");
    if (scanf("%f", &frequency) != 1) 
    {
        printf("Invalid input\n");
        return 1;
    }

    calculateDFT(frequency);

    return 0;
}
