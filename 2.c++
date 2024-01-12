#include<iostream>
using namespace std;
//base claas
class Geometry
{
    public:
    double radius,base,hight,length,width,angle1,angle2,angle3;
    void circle(double r)
    {
        radius=r;
    }
    void triangle(double b,double h,double a1,double a2,double a3)
    {
        base=b;
        hight=h;
        angle1=a1;
        angle2=a2;
        angle3=a3;
    }
    void rectangle(double l,double w)
    {
        length=l;
        width=w;
    }
};
//drive class1 of base class
class CircleGeometry:public Geometry
{
    public:
    void getcircle()
    {
        double a;
        cout<<"Enter the Radius of a Circle : "<<endl;
        cin>>a;
        circle(a);
    }
    void ACdisplay()
    {
        cout<<"The area of the Circle is "<<3.14*radius*radius<<endl;
    }
    void PCdisplay()
    {
        cout<<"Perimeter of Circle is "<<2*3.14*radius<<endl;
    }
};
//drive class2 of base class
class RectangleGeometry:public Geometry
{
    public:
    void getrectangle()
    {
        double b,c;
        cout<<"Enter the Length and Width of a Rectangle : "<<endl;
        cin>>b>>c;
        rectangle(b,c);
    }
    void ARdisplay()
    {
        cout<<"The Area of the Rectangle is "<<length*width<<endl;
    }
    void PRdisplay()
    {
        cout<<"Primeter of Rectangle is "<<2*(length+width)<<endl;
    }
};
//drive class3 of base class
class TriangleGeometry:public Geometry
{
    public:
    void areaoftriangle()
    {
        cout<<"Enter the Base and Height of a Triangle : "<<endl;
        cin>>base>>hight;
    }
    void ATdisplay()
    {
        cout<<"The Area of the Triangle is "<<0.5*base*hight<<endl;
    }
    void perimeteroftriangle()
    {
        cout<<"Enter the Angle size of a Triangle : "<<endl;
        cout<<"Angle 1:-";
        cin>>angle1;
        cout<<"Angle 2:-";
        cin>>angle2;
        cout<<"Angle 3:-";
        cin>>angle3;
    }
    void PTdisplay()
    {
        cout<<"Perimeter of Triangle is "<<angle1+angle2+angle3<<endl;
    }
};
int main()
{
    int g;
    first:
    cout<<"\nWhat do you want to find AREA or PERIMETER\n";
    cout<<"1.AREA\n";
    cout<<"2.PERIMETER\n";
    cin>>g;
    switch(g)
    {
        case 1:
        int choice;
        start:
        cout<<"\n1.Circle";
        cout<<"\n2.Rectangle";
        cout<<"\n3.Triangle"<<endl;
        cin>>choice;
        if(choice==1)
        {
            CircleGeometry cg;
            cg.getcircle();
            cg.ACdisplay();  
        }
        else if(choice==2)
        {
            RectangleGeometry rg;
            rg.getrectangle();
            rg.ARdisplay();
        }
        else if(choice==3)
        {    
            TriangleGeometry tg;
            tg.areaoftriangle();
            tg.ATdisplay();
        }
        else if(choice>3)
        {
            cout<<"Invalid input \nRepet again \n";
            goto start;
        }
        break;

        case 2:
        int cho;
        repet:
        cout<<"\n1.Circle";
        cout<<"\n2.Rectangle";
        cout<<"\n3.Triangle"<<endl;
        cin>>cho;
        if(cho==1)
        {
            CircleGeometry ce;
            ce.getcircle();
            ce.PCdisplay();  
        }
        else if(cho==2)
        {
            RectangleGeometry re;
            re.getrectangle();
            re.PRdisplay();
        }
        else if(cho==3)
        {    
            TriangleGeometry te;
            te.perimeteroftriangle();
            te.PTdisplay();
        }
        else if(cho>3)
        {
            cout<<"Invalid input \nRepet again \n";
            goto repet;
        }
        break;
        default:cout<<"Invalid input \nRepet again\n";
        goto first;
    }
}