#include <iostream>
#include <cmath>
using namespace std;

int calculateCarpetSize(float lenght, float width)
{
    int area;
    area = round(lenght) * round(width);
    return area;
}

float calculateCarpetCost(int size, float selling_cost)
{
    float price;
    price = size * selling_cost;
    return price;
}

int calculateLabourCost(int size)
{
    return size * 24;
}

bool qualifyForDiscount(string customer_number)
{
   return (customer_number.substr(0,1) == "0" ? true : false);
}

float computeDiscount(float price)
{
    int discount_percent;
    float discount_value;
    cout << "Please provide the percent of a discount for this customer: " << endl;
    cin >> discount_percent ;
    discount_value = price * discount_percent * 0.01 ;

    //cout << "price was: " << price << ", discount_percent was: " << discount_percent << ", discount value was: " << discount_value << endl;
    return discount_value;
}
void printCustomerStatement(string customer_name, string customer_number, float carpet_cost, float labour_cost, float discount)
{
    cout << "CROSWELL CARPET STORE" << endl << "\tSTATEMENT" << endl;
    cout << "Customer name : " << customer_name << endl;
    cout << "Customer number : " << customer_number << endl;
    cout << "Carpet price : R " << carpet_cost << endl;
    cout << "Labour : R " << labour_cost << endl;
    cout << "Subtotal : R " << carpet_cost + labour_cost << endl;
    cout << "Less discount : R " << discount << endl;
    float subtot = carpet_cost + labour_cost - discount;
    cout << "Subtotal : R " << subtot << endl;
    float tax = carpet_cost * 0.14;
    cout << "Plus tax : R " << tax << endl;
    float total = tax + carpet_cost + labour_cost - discount;
    cout << "Total : R " << total << endl;
}
int main(){
    string customer_name;
    string customer_number;
    float lenght;
    float width;
    float price;

    cout << "Provide customer name: " << endl;
    cin >> customer_name;
    cout << "Provide customer number: " << endl;
    cin >> customer_number;
    cout << "Provide lenght: " << endl;
    cin >> lenght;
    cout << "Provide width: " << endl;
    cin >> width;
    cout << "Provide price per meter: " << endl;
    cin >> price;

    int area = calculateCarpetSize(lenght, width);
    float carpet_cost = calculateCarpetCost(area, price);
    float labour_cost = calculateLabourCost(area);

    float discount = (qualifyForDiscount(customer_number) ? computeDiscount(carpet_cost + labour_cost) : 0);
    printCustomerStatement(customer_name, customer_number, carpet_cost, labour_cost, discount);

return 0;
}
