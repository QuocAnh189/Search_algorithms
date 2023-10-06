#include<iostream>
using namespace std;
#include<algorithm>


template<typename _RandomAccessIterator>
inline void
stable_sort(_RandomAccessIterator __first, _RandomAccessIterator __last)
{
    // concept requirements
    __glibcxx_function_requires(_Mutable_RandomAccessIteratorConcept<
        _RandomAccessIterator>)
        __glibcxx_function_requires(_LessThanComparableConcept<
            typename iterator_traits<_RandomAccessIterator>::value_type>)
        __glibcxx_requires_valid_range(__first, __last);
    __glibcxx_requires_irreflexive(__first, __last);

    _GLIBCXX_STD_A::__stable_sort(__first, __last,
        __gnu_cxx::__ops::__iter_less_iter());
}

int main()
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0,3,5 };
    int n = sizeof(arr) / sizeof(arr[0]);

    stable_sort(arr, arr + n,greater<int>());
    // stable_sort(arr[x],arr[y]+1)    Sắp xếp một đoạn tùy ý.

    cout << "Mang sau khi sap xep on dinh: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    return 0;
}