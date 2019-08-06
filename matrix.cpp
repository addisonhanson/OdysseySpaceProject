using namespace std;

class Matrix {

    public:
      //Getter and Setter
      int getValue(int n, int m);
      int setValue(int n, int m, int newValue);

      //Constructor
      Matrix(int n, int m);

    private:
      int *values;
      int width, height;

    Matrix::Matrix(int n, int m){
        int grid[n][m]; //initialize a new array to represent the new Matrix

        //nested for loop to initialize matrix values to 0
        for (int i = 0; i < n; i++) {
          for (int j = 0; j < m; j++) {
            grid[i][j] = 0;
          }
        }


        values = &grid; //set values pointer to point to the new array
        width = n;
        height = m;
    }

    int getValue(int n, int m){

      if ((n-1 < 0) || (m-1 < 0)) {
        cout << "Get is out of bounds of the given matrix"
      }
      //unit based indexing means that [1][1] for the customer is [0][0] in memory so we need to subtract 1
      return values[n-1][m-1];

    }


}
