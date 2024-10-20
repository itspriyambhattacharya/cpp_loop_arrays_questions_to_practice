#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main(void)
{
    system("cls");
    // Q1. Write a 'while' to calculate the sum of 1 to 5

    int i1 = 1;
    int sum1 = 0;
    while (i1 <= 5)
    {
        sum1 += i1;
        i1++;
    }
    cout << "Sum is " << sum1 << endl;

    // Q2. Write a 'while' loop to count down from 5 to 1 and store in a vector named 'counter

    int i2 = 5;
    vector<int> counter;
    while (i2 >= 1)
    {
        counter.push_back(i2);
        i2--;
    }

    for (int i = 0; i < counter.size(); i++)
    {
        cout << counter[i] << "\t";
    }

    // Q3. Write a 'do-while' loop to accept a number from user  until user says "n" keep accepting and store them in a vector "numbersInput"

    int num;
    char ch;
    vector<int> numbersList;
    do
    {
        cout << "\nEnter number:\t";
        cin >> num;
        numbersList.push_back(num);
        cout << "\nWant to insert more? (y/n):\t";
        cin >> ch;
    } while (ch == 'y');

    for (int i = 0; i < numbersList.size(); i++)
    {
        cout << numbersList[i] << "\t";
    }
    cout << endl;

    // Q4. Write a 'do-while' loop that adds numbers from 1 to 4 and stores the answer in a vsriable named 'totalSum'

    int n4 = 1;
    int s4 = 0;
    do
    {
        s4 += n4;
        n4++;
    } while (n4 <= 4);
    cout << "\nThe Sum is " << s4 << endl;

    // Q5. Write a 'for' loop that multiplies each element of the array [2, 5, 8, 9] by 2 and stores the result in a new array named multipliedArray

    vector<int> a5 = {2, 5, 8, 9};
    vector<int> multipliedArray;
    for (int i = 0; i < a5.size(); i++)
    {
        multipliedArray.push_back(a5[i] * 2);
    }
    for (int i = 0; i < a5.size(); i++)
    {
        cout << multipliedArray[i] << "\t";
    }

    // Q6. Write a 'for' loop that iterators of the following list [2,5,6,1,4,7] and stores each item into another list named 'newList'
    cout << "\n";
    vector<int> copy = {2, 5, 6, 1, 4, 7};
    vector<int> newList;
    for (int i = 0; i < copy.size(); i++)
    {
        newList.push_back(copy[i]);
    }
    for (int i = 0; i < newList.size(); i++)
    {
        cout << copy[i] << "\t";
    }

    // Q7. Write a 'for' loop that iterates over a vector [1,2,3,4,5,6,7,8,9] and stops the loop when 7 is found.

    cout << "\n";
    vector<int> br = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < br.size(); i++)
    {
        if (br[i] == 7)
        {
            break;
        }
        cout << br[i] << "\t";
    }

    // Q8. Write a 'for' loop that iterates over a vector [1,2,3,4,5,6,7,8,9,10,11] and skips the loop when 3 is found and store the numbers in another vector cpCont

    cout << "\n";
    vector<int> cont = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    vector<int> cpCont;
    for (int i = 0; i < cont.size(); i++)
    {
        if (cont[i] == 3)
        {
            continue;
        }
        cpCont.push_back(cont[i]);
    }

    for (int i = 0; i < cpCont.size(); i++)
    {
        cout << cpCont[i] << "\t";
    }

    // Q9. Write a 'for' loop that iterates over an array[2,5,6,7,8], skips 6 and multiplies rest by 2 and store in a new array named "doubleVale"
    cout << endl;
    vector<int> a9 = {2, 5, 6, 7, 8};
    vector<int> doubleValue;
    for (int i = 0; i < a9.size(); i++)
    {
        if (a9[i] == 6)
        {
            continue;
        }

        doubleValue.push_back(a9[i] * 2);
    }
    for (int i = 0; i < doubleValue.size(); i++)
    {
        cout << doubleValue[i] << "\t";
    }

    // Q10. Write a condition to check if an array is empty or not.

    cout << endl;
    vector<int> checkVect = {5};
    if (checkVect.size() == 0)
    {
        cout << "Empty\n";
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    // Q11. Write a 'for' loop to add 125 and the end of the array [1,4,6]

    // Q12. Write a 'for' loop to remove the last element from the array [6,8,2,1]

    return 0;
}