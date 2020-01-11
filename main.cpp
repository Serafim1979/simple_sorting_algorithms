#include<iostream>
#include<ctime>

using std::cout;
using std::cin;
using std::endl;
/////////////////////////////////////////////////////
void print_array(int arr[], int size_arr)
{
    for(int i = 0; i < size_arr; i++)
    {
        cout << arr[i] << ' ';
    }

}
/////////////////////////////////////////////////////
int line_search(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
/////////////////////////////////////////////////////
void bubble_sort(int arr[], int size_arr)
{
    for(int i = 0; i < size_arr; i++)
    {
        for(int j = size_arr - 1; j > i; j--)
        {
            if(arr[j] < arr[j - 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
            }
        }
    }
}
/////////////////////////////////////////////////////
void select_sort(int arr[], int size_arr)
{
    for(int i = 0; i < size_arr - 1; i++)
    {
        int min_index = i;
        for(int j = i + 1; j < size_arr; j++)
        {
            if(arr[j] < arr[min_index])
                min_index = j;
        }
        int tmp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = tmp;
    }
}
/////////////////////////////////////////////////////
void insert_sort(int arr[], int size_arr)
{
    for(int i = 1; i < size_arr; i++)
    {
        int j = i - 1;
        int tmp = arr[i];
        while(j >= 0 && arr[j] > tmp)
        {
            arr[j + 1] = arr[j];
            arr[j] = tmp;
            j--;
        }
    }
}
/////////////////////////////////////////////////////
int main()
{
    const int SIZE = 5;
    int a[SIZE] = {3, 5, 1, 4, 2};


    print_array(a, SIZE);
    cout << endl;
    int k = line_search(a, SIZE, 5);

    if(k != -1)
    {
        cout << "The item is found: " << k << endl;
    }
    else
        cout << "Not found" << endl;

    cout << endl << endl;

    cout << "before sorting: " ;
    print_array(a, SIZE);
    bubble_sort(a, SIZE);
    cout << endl;
    cout << " after sorting: " ;
    print_array(a, SIZE);

    cout << endl<<endl;
    cout << "before select sorting: " ;
    int b[SIZE] = {12, 9, 7, 14, 33};
    print_array(b, SIZE);
    cout << endl;
    select_sort(b, SIZE);
    cout << "        after sorting: " ;
    print_array(b, SIZE);

    cout << endl<<endl;
    cout << "before select sorting: " ;
    int c[SIZE] = {12, 9, 7, 14, 33};
    print_array(c, SIZE);
    cout << endl;
    insert_sort(c, SIZE);
    cout << "        after sorting: " ;
    print_array(c, SIZE);

    return 0;
}
