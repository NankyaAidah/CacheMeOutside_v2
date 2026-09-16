#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class Vector
{
private:
    vector<double> values;

public:
    Vector(vector<double> values) : values(values) {}

    int size() const
    {
        return values.size();
    }

    double getValue(int index) const
    {
        return values[index];
    }

    void print() const
    {
        cout << "[ ";
        for (double v : values)
        {
            cout << v << " ";
        }
        cout << "]" << endl;
    }

    double dot_product(const Vector &other) const
    {
        if (size() != other.size())
        {
            throw invalid_argument("Vectors must be the same length for a dot product");
        }

        double sum = 0.0;
        for (int i = 0; i < size(); i++)
        {
            sum += values[i] * other.getValue(i);
        }
        return sum;
    }
};

int main()
{
    Vector v1({1, 2, 3});
    Vector v2({4, 5, 6});

    cout << "Vector 1: ";
    v1.print();
    cout << "Vector 2: ";
    v2.print();

    try
    {
        double result = v1.dot_product(v2);
        cout << "Dot product = " << result << endl;
    }
    catch (const invalid_argument &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
