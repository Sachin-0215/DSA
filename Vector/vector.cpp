#include <iostream>
using namespace std;

template <typename T>
class vector
{
public:
    T *begin;
    T *end;
    int size;
    int capacity;
    vector()
    {
        begin = new T[1];
        size = 1;
        capacity = 1;
        end = begin;
    }
    void push_back(T element)
    {
        T *temp = new T[size + 1]; //allocate  new memory
        for (int i = 0; i < size; ++i)
        {
            *(temp + i) = *(begin + i); //copy all the element of previous array to new array
        }
        *(temp + size) = element; // add new element at last
        delete[] begin;           //delete previous array
        begin = temp;
        end = begin + size;
        size = size + 1;
        capacity = capacity + 1;
    }
    T operator[](int index)
    {
        if (index < size)
        {
            return *(begin + index);
        }
        else
        {
            return -1;
        }
    }
};

int main()
{
    vector<int> vec;
    *(vec.begin) = 1;
    vec.push_back(3);
    //vec.push_back(4);
    //vec.push_back(5);

    for (int i = 0; i < vec.size; i++)
    {
        cout << vec[i] << endl;
    }

    cout << "End : " << *(vec.end) << endl;
    cout << "Size: " << (vec.size) << endl;
    cout << "Capacity : " << vec.capacity << endl;

    return 0;
}
