#include "resistor_color.h"
#include <stdio.h>
#include <stdlib.h>

int color_code(resistor_band_t band) {
    return band;
}

resistor_band_t* colors() {
    resistor_band_t *allColors = malloc(sizeof (resistor_band_t) * 10);
    for(int i=0; i < WHITE+1; i++){
        allColors[i] = i;
    }
    return allColors;
}
