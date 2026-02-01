#include <iostream>
#include <cmath>

using namespace std;

int main(){
   float areaCircle,r,l,b,areaRectangle,s,areaSquare;
   


   // area of circle
   cout<< "AREA OF CIRCLE  "<<endl <<"Enter the radius here:-"<<endl;
   cout<< "Radius:"; cin>>r; cout<<endl;
   areaCircle = 3.14*r*r;

   cout<<"The area of the circle is:"<<areaCircle<<endl;

   // area of rectangle
   cout<<"AREA OF A RECTANGLE  "<<"Enter the length and breadth of a rectangle:-"<<endl;
   cout<<"l:"; cin>>l; cout<<"b:"; cin>>b;cout<<endl;
   areaRectangle= l*b;
   cout<<areaRectangle<<endl;

  //area of square
   cout<< "AREA OF SQUARE"<<endl<<"Enter the side here:-"<<endl;
   cout<<"s:"; cin>>s; cout<<endl;
    areaSquare= s*s;
   cout<<areaSquare<<endl;

   //area of equilateral triangle
   double side;

    cout << "Enter side length of the equilateral triangle: ";
    cin >> side;

    double area = (sqrt(3) / 4) * pow(side, 2);

    cout << "Area of Equilateral Triangle = " << area << endl;

   



   double sideCube, radius, height;

    // Cube
    cout << "Enter side length of cube: ";
    cin >> sideCube;
    double cubeVolume = pow(sideCube, 3);
    cout << "Volume of Cube = " << cubeVolume << endl;

    // Cylinder
    cout << "\nEnter radius of cylinder: ";
    cin >> radius;
    cout << "Enter height of cylinder: ";
    cin >> height;
    double cylinderVolume = M_PI * pow(radius, 2) * height;
    cout << "Volume of Cylinder = " << cylinderVolume << endl;

    return 0;




}





