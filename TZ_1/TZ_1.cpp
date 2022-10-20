#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> solution(vector <int> vec) {
    try
    {
        sort(vec.begin(), vec.end());
        for (auto i = 0; i < vec.size(); i++)
        {
            if (vec.at(i) == vec.at(i + 1))
            {
                vec.erase(vec.begin() + i);
                vec.erase(vec.begin() + i);
                i--;
            }

        }
    }
    catch (const std::exception&)
    {
        return vec;
    }

    return vec;
}

int main()
{
    vector <int> vec{2,4,6,2,5,4,1,9,8,8,1};

    vector <int> vec_sol = solution(vec);

    for (size_t i = 0; i < vec_sol.size(); i++)
    {
        cout << vec_sol[i] << " ";
    }

}
