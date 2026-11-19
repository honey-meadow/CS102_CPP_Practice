# Smart Parking & Fuel Discount Calculator

## Problem Statement
Calculate parking fees based on hours parked and vehicle type:
- Invalid hours (`<= 0`) -> exit with error.
- Base rate: `$3/hr` (`<= 5` hours) or `$2/hr` (`> 5` hours).
- Eco-Discounts: Electric (`E/e`) = 50% off, Hybrid (`H/h`) = 20% off, Gasoline (`G/g`) = full price.

## Mistakes Fixed
- Used `char` instead of `int` for single-letter vehicle input.
- 20% discount means multiplying by `0.8` (paying 80%), not `0.2`.