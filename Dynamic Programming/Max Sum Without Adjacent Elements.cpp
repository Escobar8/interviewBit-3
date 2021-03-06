Given a 2 * N Grid of numbers, choose numbers such that the sum of the numbers
is maximum and no two chosen numbers are adjacent horizontally, vertically or diagonally, and return it.

Example:

Grid:
	1 2 3 4
	2 3 4 5
so we will choose
3 and 5 so sum will be 3 + 5 = 8


Note that you can choose more than 2 numbers

***********************************************************************************************************

int Solution::adjacent(vector<vector<int> > &A) {
   
   int inc = max(A[0][0],A[1][0]);
   if(A[0].size() == 1)return inc;
   int exc = 0;
   for(int i=1 ; i<A[0].size() ;i++){
       int temp = inc;
       inc = max(inc , exc+max(A[0][i],A[1][i]));
       exc = temp;
   }
   return inc;
}
