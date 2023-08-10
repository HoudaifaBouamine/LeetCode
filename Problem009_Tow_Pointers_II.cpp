template <typename t>
class MyArray {

public:

    MyArray()
    {

    }

    MyArray(int starting_index, int ending_index, int value = 0)
    {
        this->starting_index = starting_index;
        size = ending_index - starting_index + 1;
        arr = (t*)malloc(sizeof(t) * size);

        if (value == 0 || sizeof(t) == 1)
        {
            memset(arr,value,size * sizeof(t));
        }
        else
        {
            for (int i = 0; i < size; i++)
            {
                arr[i] = value;
            }
        }

    }

    t& operator[](int index)
    {
        index -= starting_index;

        if (index < 0 || index >= size) {
            t* a = new t;
            *a = 0;
            return *a;
        }

        return arr[index];
    }

private:

    int size;
    t* arr;
    int starting_index;

};

class Solution {
public:

    int Binary_search(vector<int> &x, int size, int target) {

        int maximum = size - 1;
        int minimum = 0;
        int mean;
        while (maximum >= minimum) {
            mean = (maximum + minimum) / 2;
            if (x[mean] == target) {

                return mean;
            }
            else if (x[mean] > target) {
                maximum = (mean - 1);
            }
            else {
                minimum = (mean + 1);
            }
        }
        return -1;
    }

    vector<int> twoSum(vector<int> numbers, int target) {


        MyArray <bool> v(numbers.front(),numbers.back());

        for (int i = 0; i < numbers.size(); i++)
        {
            v[numbers[i]] = true;
        }

        for (int i = 0; i < numbers.size(); i++)
        {
            if (v[target - numbers[i]])
            {
                if (target - numbers[i] == numbers[i])
                {
                    if (i + 1 < numbers.size())
                    {
                        if (numbers[i + 1] == numbers[i]) 
                        {
                            return { i + 1,i + 1 + 1 };
                        }
                    }

                    continue;
                }

                return { 1 + i, 1 + Binary_search(numbers,numbers.size(),target - numbers[i])};
            }
        }

        return {};
    }
};
