
Electric Bill Calculator

This code is write to calculate what will be the amount for a month with units consumed.



## Authors

- [Nishown](https://github.com/Nishown2000/C_Program/tree/main/Electric_Bill_Calculator)


## Run Locally

Clone the project

```bash
  git clone https://github.com/Nishown2000/C_Program.git
```

Go to the project directory

```bash
  cd Electric_Bill_Calculator
```

Install dependencies

```bash
  GCC Compiler
    For Linux(Ubuntu)
       sudo apt update
       sudo apt install build-essential
       sudo apt-get install manpages-dev
    For Linux(Fedora)
       sudo dnf install gcc   
  CMakelist
    For Linux(Ubuntu)
       sudo snap install cmake --classic
    For Linux(Fedora)
       sudo dnf install cmake
``` 

Run the code

```bash
   Method 1 to run code(Manually):
      cmake -S . -B build/
      make -C build/
      ./build/Main/main
   Method 2 to run code(Script):
      ./electric_bill_calculator.py
```