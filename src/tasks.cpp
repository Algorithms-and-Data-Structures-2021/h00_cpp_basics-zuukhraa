#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    if (lhs && rhs) {
        int tmp = *lhs;
        *lhs = *rhs;
        *rhs = tmp;
    }
}


// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    if (num_cols > 0 && num_rows > 0) {
        int **m;
        m = new int *[num_rows];
        for (int i = 0; i < num_rows; i++) {
            m[i] = new int[num_cols];
        }
        for (int i = 0; i < num_rows; i++) {
            for (int j = 0; j < num_cols; j++) {
                m[i][j] = init_value;
            }
        }
        return m;
    }
    return nullptr;
}


// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    if (arr_2d_source != nullptr && arr_2d_target != nullptr && num_rows > 0 && num_cols > 0) {
    for (int i = 0; i< num_rows; i++){
        for (int j=0; j< num_cols; j++){
            arr_2d_source[i][j] = arr_2d_target[i][j];
        }
    }
            return arr_2d_source;

    }
    return false;

}


// Задание 4
void reverse_1d_array(vector<int> &arr) {
    for (int i = 0; i < arr.size() / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[arr.size() - i - 1];
        arr[arr.size() - i - 1] = temp;
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    if (arr_begin != nullptr && arr_end != nullptr)
    {
        int arrSize = arr_end - arr_begin + 1;
        for (int i = 0; i < arrSize / 2; i++) {
            int temp = arr_begin[i];
            arr_begin[i] = arr_begin[arrSize - 1 - i];
            arr_begin[arrSize - 1 - i] = temp;
        }
    }
}

// Задание 6
int *find_max_element(int *arr, int size) {
    if (arr != nullptr && size > 0) {
        int *max = &arr[0];
        for (int i = 1; i<size; i++) {
            if (arr[i] > *max) {
                max = &arr[i];
            }
        }
        return max;
    }
    return nullptr;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    vector<int> odd_numbers;
    for (int element : arr) {
        if (abs(element) % 2 == 1) {
            odd_numbers.push_back(element);
        }
    }
    if (odd_numbers.size() > 0) {
        return odd_numbers;
    }
    return {};
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    vector<int> common_elements;
    for (int element1 : arr_a) {
        for (int element2 : arr_b) {
            if (element1 == element2) {
                common_elements.push_back(element1);
            }
        }
    }
    if (common_elements.size() > 0) {
            return common_elements;
        }

    return {};
}
