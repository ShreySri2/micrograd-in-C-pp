class Tensor
{
private:
    int *size;
    double *data;
    int numDimensions;
public:
    // constructor
    Tensor(int* dimensions, int numDims){
        numDimensions = numDims;
        size = new int[numDimensions];
        
        for(int i = 0; i < numDimensions; i++){
            size[i] = dimensions[i];
        }

        int totalSize = 1;
        for (int i = 0; i < numDimensions; ++i) {
            totalSize *= size[i];
        }
        
        
    }
    //destructor
    ~Tensor(){
        delete[] data;
        delete[] size;
    }
};   