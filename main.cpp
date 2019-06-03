///*********************************************************************
///File name PaintRoom
///

///Description: This program is given the length and width of a region to
///be painted, and the price of a gallon of paint as input. The square
///footage of the region is calculated, and the number of gallons of paint
///needed to cover the region, and the cost is determined. One gallon of
///paint will cover 200 square feet of the region.
///*********************************************************************

#include <iostream>
#include <iomanip>
using namespace std ;


/// function prototypes
int GetLength();
int GetWidth();
double GetGallonCost();
int ComputeArea( int, int );
int FindGallons( int );
double ComputeCost( double, int );
void PrintResults( int, int, double );
void programmer_info();


/// global constants
const int COVERAGE = 200;       /// 1 gallon of paint will cover 200 sq. ft.


int main()
  {
    /// local variable declarations for main
    int   length;      /// length of the region to be covered
    int   width;       /// width of the region to be covered
    int   area;        /// area of the region to be covered; long int
                       /// would be required to store large areas
    int   gallons;     /// number of gallons needed to cover the region
    double gallon_cost; /// price of a gallon of paint
    double paint_cost;  /// the cost of the paint needed
    string programmer;

    ///Programmer Info

    //programmer = programmer_info();

    /// input data
    length      = GetLength();

    width       = GetWidth();

    gallon_cost = GetGallonCost();


    /// process data
    area       = ComputeArea( length, width );

    gallons    = FindGallons( area );                /// find number of gallons to
                                                    /// cover area



    paint_cost = ComputeCost( gallon_cost, gallons );  /// compute cost of paint


    /// print results
    PrintResults( gallons, area, paint_cost );


    return(0);
  }

void programmer_info(string programmer)
{
programmer= "Jasmine Wyatt";

cout << programmer;
}

///**********************************************************************
///Function Name: GetLength
/// Prompts the user to input the length of a rectangular room
/// Returns the int value input by the user
///**********************************************************************
int GetLength()
  {

    int thelength;
    cout<< "Input length of room: \n";
    cin >> thelength;
   cout << "Your inputed length is:" << thelength;

    return thelength;
  }


///*********************************************************************
///Function Name: GetWidth
/// Prompts the user to input the width of a rectangular room
/// Returns the int value input by the user
///**********************************************************************
int GetWidth()
  {
    int thewidth;

    cout<< "\nInput width of room:";
    cin >> thewidth;
    cout << "\nYour inputed width is:" << thewidth;


    return thewidth;

  }
///This program is given the length and width of a region to be painted


///**********************************************************************
///Function Name: GetGallonCost
///Prompts the user to input the cost of a gallon of paint
///Returns the value input by the user

///**********************************************************************
double GetGallonCost()
  {

       int gallonCost;

    cout<< "\nWhat is the cost of paint per gallon? \n";
    cin >>gallonCost;
    cout << "\nYour inputed cost per gallon of paint is:" << gallonCost;


   return gallonCost;
  }


///**********************************************************************
///Function Name: ComputeArea
/// Formal parameters are the length and width of a rectangle
/// Calculates and returns the rectangle area

///**********************************************************************
int ComputeArea( int length, int width )
{
    int area;

    area=length*width;

    cout << "\n The total area of the room is:" <<area;

    return area;
}


///**********************************************************************
///Function Name: FindGallons

///Calculates and returns he number of gallons of paint needed
/// Formal parameter is the area to be painted
/// Global constant COVERAGE tells the number of square feet
/// covered by one gallon
/// Calculates and returns the number of gallons
/// Paint must be purchased by the gallon so if (Area / COVERAGE)
/// yields a remainder, round up to the highest integer

///**********************************************************************
int FindGallons( int area )
{
   int num_gallons;

   num_gallons= area / COVERAGE;

    cout <<"\nThe total gallons of paint you need is:" << num_gallons<<endl;


 return num_gallons;
}


///**********************************************************************
///Function Name: ComputeCost
///Computes how much it would cost to buy all the paint necessary
///to cover the region.
/// Formal parameters are the cost per gallon and the number of gallons
/// of paint needed


///**********************************************************************
double ComputeCost( double gallon_price, int num_gallons )
{

    double costPaint;
    costPaint= gallon_price* num_gallons;
    cout << "The total price of the paint is:"<< costPaint<<endl;

 return costPaint;
}


///**********************************************************************
///Function Name: PrintResults
/// A void function
/// Formal parameters are the number of gallons, the area to be painted,
/// and the total cost of the paint required.
/// Prints a message to the screen stating the number of gallons,
/// the area, and the post of the paint.

///**********************************************************************
void PrintResults( int gallons, int area, double paint_cost )
  {

  }


/// end of function declarations
