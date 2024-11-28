#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course_4_Solution_48
// Monthly Loan Installment.



#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course_4_Solution_47
// Loan Installment Months.


float ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

float MonthlyInstallment(float LoanAmount, float HowManyMonths)
{
    return (float)LoanAmount / HowManyMonths;
}



int main()
{
    float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount?");
    float HowManyMonths = ReadPositiveNumber("How Many Months?");

    cout << "\n Monthly Installment = " << MonthlyInstallment(LoanAmount, HowManyMonths);
    cout << endl;

    return 0;
}




