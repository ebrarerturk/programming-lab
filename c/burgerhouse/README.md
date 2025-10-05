# BurgerHouse (C Mini Project)

This is a simple restaurant ordering system written in **C**.

It allows the user to:
- Choose burgers, fries, and drinks from submenus
- Add items to a single cart
- View the cart and checkout with total price calculation

## What I did
- Designed a text-based restaurant menu system  
- Used arrays to store item names and prices  
- Used **BASE index macros** to manage items in a single cart  
- Implemented loops and conditionals for interactive navigation  

## What I learned
- How to map different categories into one unified index system  
- How to manage a cart using array positions  
- Better understanding of `do-while` loops and nested conditionals  

## Files
- `burgerhouse_base.c` → main program  

## How to run
I tested this using GCC:
```bash
gcc burgerhouse_base.c -o burgerhouse
./burgerhouse
