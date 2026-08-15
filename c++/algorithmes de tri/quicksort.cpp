#include <iostream>
using namespace std;

void quicksort (int* inpt, int i = 0, int j = 0)
{
    if (j - i <= 1)
        return;

    int pivot = inpt[j - 1];
    int start = i;

    for (int s = start; s < j; s++)
    {
      if (pivot >= inpt[s])
      {
        if(s != i)
          swap(inpt[s], inpt[i]);

        i++;
      }
    }

    if (i > 0)
      quicksort(inpt, start, i-1);

    if (i < j && j > 1)
      quicksort(inpt, i, j);
}

int main()
{
    int suite[12] = {26, 20, 12, 5, 46, 27, 10, 30, 17, 32, 22, 13};

    int size = (sizeof(suite) / sizeof(suite[0])); // aquisition de la taille de l'array pour obtenir l'index du dernier element

    quicksort(&suite[0], 0, size); // attention: quicksort modifie l'array suite. Pour l'eviter, il faut creer une copie de suite dans quicksort

  return 0;
}