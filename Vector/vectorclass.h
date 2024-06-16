template<typename T>

class Vector
{
    // Data Members
    T *arr;
    int cs; // current size
    int ms; // maximum size

    // Constructor, Destructor, Methods
public:
    Vector()
    { // Constructor
        cs = 0;
        ms = 1;
        arr = new T[ms];
    }
    void push_back(T x)
    {
        if (cs == ms)
        {
            // create a temporary array and store the old array in it, make a new array twice the size and then copy the elements.. then delete the temp array.
            T *oldArr = arr;
            arr = new T[ms * 2];
            for (int i = 0; i < cs; i++)
            {
                arr[i] = oldArr[i];
            }
            // delete the array
            delete[] oldArr;
            ms = ms * 2;
        }
        arr[cs] = x;
        cs++;
    }

    void pop_back()
    {
        if (cs >= 0)
            cs--;
    }
    bool isEmpty()
    {
        return cs == 0;
    }

    // Front(), Back(), At(i), size(), capacity() [] - Operator overloading
    T first()
    {
        return arr[0];
    }
    T last()
    {
        return arr[cs - 1];
    }
    T At(int x)
    {
        return arr[x];
    }
    int size()
    {
        return cs;
    }
    int capacity()
    {
        return ms;
    }
    T operator[](int i)
    {
        return arr[i];
    }
};