# Volume-Calculator

An improved version of the Volume Calculator program in C that computes the volume of a Cube, Cylinder, or Sphere. This version uses a variable for π (pi = 3.1416) to improve clarity and flexibility. It demonstrates conditional branching, arithmetic operations, and variable reuse.

# Author & Tech Info

➣ Author: Aasher  
➣ Language Used: C  
➣ Platform/Compiler: Programiz Online Compiler / GCC / Code::Blocks / Turbo C  
➣ Date Created: [31/10/2025]  
  
## Purpose

To calculate the volume of different 3D shapes while practicing the use of variables, conditional statements, and floating-point arithmetic.

## Logic  

• Define a variable pi = 3.1416.  
• Ask the user to select a shape:  

1 for Cube  

2 for Cylinder  

3 for Sphere  

• Based on the selection:  
  
Cube: Volume = length³  
  
Cylinder: Volume = π × radius² × height  

Sphere: Volume = (4/3) × π × radius³  
  
• If an invalid choice is entered, display an error message.  

## Example Input/Output  
Enter the shape of which you want to find the volume   
1.Cube   
2.Cylinder   
3.Sphere  
1  
Enter length: 5  
The volume of cube is 125.00  
  
Enter the shape of which you want to find the volume   
1.Cube   
2.Cylinder   
3.Sphere  
2  
Enter the length: 10  
Enter the radius: 3  
The volume of cylinder is 282.74  

Enter the shape of which you want to find the volume   
1.Cube   
2.Cylinder   
3.Sphere  
3  
Enter the radius: 4  
The volume of sphere is 268.08  
  
Enter the shape of which you want to find the volume    
1.Cube   
2.Cylinder   
3.Sphere  
5  
INVALID CHOICE  

## Key Concepts Practiced

➤ Use of variables for constants (π)  
➤ Conditional branching (if–else if–else)  
➤ Floating-point arithmetic and precision  
➤ Logical structure and formatted output  
➤ Real-world conditional programming  
