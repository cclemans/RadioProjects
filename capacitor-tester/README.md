This capacitor tester uses arduino ide on an esp32 to charge a capacitor to ~63% of the known voltage, then displays the time required.
Using the known value of a precision test resistor C can be calculated from C = R*TC

I initially wanted to measure to .01pF but the clock of the esp32 would not allow this without a resistor above 100MegOhms which I cannot currently measure.
