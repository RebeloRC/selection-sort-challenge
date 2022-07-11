#include <iostream>
using namespace std;

void swapping(int &a, int &b)
{
  int aux;
  aux = a;
  a = b;
  b = aux;
}

void display(int *array, int size)
{
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

void selectionSort(int *array, int size)
{
  int i, j, imin;
  for (i = 0; i < size - 1; i++)
  {
    imin = i;
    for (j = i + 1; j < size; j++)
      if (array[j] < array[imin])
        imin = j;
    swap(array[i], array[imin]);
  }
}

int main(int argc, char **argv)
{
  int array[10] = {3, 0, 1, 8, 7, 2, 5, 4, 9, 6};

  cout << "Array digitado: ";
  display(array, 10);
  selectionSort(array, 10);
  cout << "Array organizado: ";
  display(array, 10);
}