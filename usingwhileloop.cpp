#include <iostream>
using namespace std;

int main() {
    double sum=0,avg;
    int n,i,num;
    
    cout << "enter no of elements: " ;
    cin >> n;
    cout << n;
    
    i = 1;
    cout << "\nenter the elements " << endl;
    while(i<=n)
        {
        cin >> num;
        cout << num << endl;
        sum += num;
        i += 1;
    }

    avg = sum/n;

    cout << "avg :" << avg << endl;
    
    return 0;
}
