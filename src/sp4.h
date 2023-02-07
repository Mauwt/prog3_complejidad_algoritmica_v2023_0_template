#ifndef SP4_H
#define SP4_H

#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <queue>
using namespace std;

using row_t = vector<int>;
using matrix_t = vector<row_t>;

bool ejercicio_1(const matrix_t& matrix);
std::string bigO_1();
void ejercicio_2(int n);
std::string bigO_2();
void ejercicio_3(int n);
std::string bigO_3();
void ejercicio_4(int n);
std::string bigO_4();
void ejercicio_5(int n);
std::string bigO_5();
int randint(int first, int last);
int ejercicio_6(int n);
std::string bigO_6();
void ejercicio_7(int n);
std::string bigO_7();
void ejercicio_8(int n);
std::string bigO_8();
void ejercicio_9(int n);
std::string bigO_9();
void ejercicio_10(int n);
std::string bigO_10();
int ejercicio_11(int n, int x);
std::string bigO_11();
int ejercicio_12 (vector<int> v);
std::string bigO_12();

template<typename T, typename Iterator>
bool ejercicio_13 (vector<T>& v, Iterator left, Iterator right, T value) {
    int n = std::distance(left, right);
    if (n > 0) return false;

    auto middle = std::next(left, n/2);
    if (*middle == value)
        return true;
    else if (*middle > value)
        return ejercicio_13 (v, left, std::prev(middle), value);
    else
        return ejercicio_13 (v, std::next(middle), right, value);
}
std::string bigO_13();


#endif