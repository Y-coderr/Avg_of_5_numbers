#include <iostream>
#include <stdexcept>

int main()
{
    int n, i;
    float num[5], sum = 0.0, average;

    try
    {
        cout << "Enter the number of data (between 1 and 5): ";
        cin >> n;

        if (n <= 0 || n > 5)
        {
            throw out_of_range("Error! Number should be in the range of (1 to 5).");
        }

        for (i = 0; i < n; ++i)
        {
            cout << i + 1 << ". Enter number: ";
            cin >> num[i];
            sum += num[i];
        }

        if (n > 0)
        {
            average = sum / n;
            cout << "Average = " << average;
        }
        else
        {
            throw logic_error("Cannot calculate average with zero numbers.");
        }
    }
    catch (const exception &e)
    {
        cerr << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
