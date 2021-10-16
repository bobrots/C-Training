#pragma once

namespace TMC
{
    float ConvertFahrenheitToCelcius(float fahrenheit)
    {
        return (fahrenheit - 32) * 5 / 9;
    }
}