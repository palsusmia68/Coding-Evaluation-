/* Given 2 sorted arrays A and B with n and m elements respectively. A has enough space
at the end of the array to fit in all elements of B. Write an algorithm to merge the
elements of A and B ensuring the resultant A is sorted as well. The code cannot use an
extra array.
Input: A = 1 3 5 6 8 - - -
 B = 0 2 10
Output: A = 0 1 2 3 5 6 8 10 */

#include <iostream>
using namespace std;
void merge(int ar1[], int ar2[], int m, int n) {
        int i=m-1,j=n-1;
        int k=m+n-1; // calculate the index of the last element of the merged array
        while(i>=0&&j>=0) // from the back by ar1 and ar2 and compare and put to the ar1 element which is larger
        {
            if(ar1[i]>ar2[j])
            {
                ar1[k]=ar1[i];
                i--;
                k--;
            }
            else
            {
                ar1[k]=ar2[j];
                j--;
                k--;
            }
        }
        while(i>=0) 
            ar1[k--]=ar1[i--];
        while(j>=0)
            ar1[k--]=ar2[j--];
    }
    
int main() 
{ 
    int ar1[] = {1, 3, 5, 6, 8}; 
    int ar2[] = {0, 2, 10}; 
    int m = sizeof(ar1)/sizeof(ar1[0]); 
    int n = sizeof(ar2)/sizeof(ar2[0]); 
    merge(ar1, ar2, m, n); 
    cout << "After Merging nFirst Array: "; 
    for (int i=0; i<(n+m); i++) 
        cout << ar1[i] << " ";
   return 0;
}

/*Time Complexity: O(m+n) */
/*space Complexity: O(1) */
