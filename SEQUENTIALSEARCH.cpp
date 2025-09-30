// Sequential Search

#include <iostream>
using namespace std;

class SequentialSearch
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

    void SearchSequentially()
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
    SequentialSearch obj;
    obj.InputArray();
    obj.SearchSequentially();

    return 0;
}

/*
OUTPUT

Testcase 1 :
Enter number of elements: 6
Enter elements:
5 12 7 9 20 15
Enter element to search: 9
Element found at index 3

Testcase 2 :
Enter number of elements: 6
Enter elements:
5 12 7 9 20 15
Enter element to search: 8
Element not found
*/