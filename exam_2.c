#include <stdio.h>
#include <stdlib.h>

#define SAMPLE_RATE  (44100)
#define FRAMES_PER_BUFFER (512)
#define NUM_CHANNELS    (1)
#define NUM_SECONDS     (5)
#define OUTPUT_FILE     "recorded_audio.wav"

// Define paData struct and recordCallback function as before...

int main(void)
{

    if (err != paNoError) {
        printf("Error: failed to initialize PortAudio: %s\n", Pa_GetErrorText(err));
        return 1;
    }

    data.file = fopen(OUTPUT_FILE, "wb");
    if (!data.file) {
        printf("Error: could not open output file %s\n", OUTPUT_FILE);
        return 1;
    }

    // Rest of the code remains the same...
