#include <iostream>
#include <stdexcept>
using namespace std;
class DataProcessor {
public:
    DataProcessor() {}

    void getValidInput(int& n) {
        while (n > 5 || n <= 0) {
            cout << "Error! Number should be in the range of (1 to 5)." << endl;
            cout << "Enter the number again: ";
            cin >> n;
        }
    }

    virtual void processData(float* num, int n) = 0;  // Pure virtual function
};

class AverageCalculator : public DataProcessor {
public:
    AverageCalculator() {}

    void processData(float* num, int n) override {
        float sum = 0.0;
        for (int i = 0; i < n; ++i) {
            cout << i + 1 << ". Enter number: ";
            cin >> num[i];
            sum += num[i];
        }

        float average = sum / n;
        cout << "Average = " << average << endl;
    }
};

int main() {
    int n;

   cout << "Enter the number of data: ";
   cin >> n;

    
    AverageCalculator avgCalculator;

   
    avgCalculator.getValidInput(n);

   
    float num[5];
    avgCalculator.processData(num, n);

    return 0;
}
