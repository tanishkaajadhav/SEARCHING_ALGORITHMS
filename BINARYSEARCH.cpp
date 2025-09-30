//

#include <iostream>
using namespace std;

class BinarySearch
{
private:
    int arr[50], n, key;

public:
    void InputArray()
    {
        cout << "Enter number of elements (sorted array): ";
        cin >> n;
        cout << "Enter elements in sorted order:\n";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Enter element to search: ";
        cin >> key;
    }

    void Search()
    {
        int low = 0, high = n - 1, mid;
        bool found = false;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (arr[mid] == key)
            {
                cout << "Element found at index " << mid << "\n";
                found = true;
                break;
            }
            else if (arr[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
        }
        if (!found)
            cout << "Element not found\n";
    }
};

int main()
{
    BinarySearch obj;
    obj.InputArray();
    obj.Search();

    return 0;
}

/*
OUTPUT

Testcase 1 :
Enter number of elements (sorted array): 7
Enter elements in sorted order:
1 4 7 10 15 18 20
Enter element to search: 15
Element found at index 4

Testcase 2 :
Enter number of elements (sorted array): 7
Enter elements in sorted order:
1 4 7 10 15 18 20
Enter element to search: 8
Element not found
*/