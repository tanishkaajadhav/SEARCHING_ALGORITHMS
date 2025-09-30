// Linear Search

#include <iostream>
using namespace std;

class LinearSearch
{
private:
    int arr[50], n, key;

public:
    void InputArray()
    {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter elements:\n";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Enter element to search: ";
        cin >> key;
    }

    void Search()
    {
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == key)
            {
                cout << "Element found at index " << i << "\n";
                found = true;
                break;
            }
        }
        if (!found)
            cout << "Element not found\n";
    }
};

int main()
{
    LinearSearch obj;
    obj.InputArray();
    obj.Search();

    return 0;
}

/*
OUTPUT

Testcase 1 :
Enter number of elements: 5
Enter elements:
10 20 30 40 50
Enter element to search: 30
Element found at index 2

Testcase 2 :
Enter number of elements: 5
Enter elements:
10 20 30 40 50
Enter element to search: 60
Element not found
*/