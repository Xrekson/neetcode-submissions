class DynamicArray {
public:
    int capa = 2;
    int len = 0;
    int *mr = nullptr;

    DynamicArray(int capacity) {
        delete[] mr;
        mr = new int[capacity];
        capa = capacity;
    };

    int get(int i) {
            return mr[i];
    };

    void set(int i, int n) {
        mr[i] = n;
    };

    void pushback(int n) {
        if(capa == len) resize();
            mr[len++] = n;
    };

    int popback() {

        int out = mr[len-1];
        len--;
        return out;
    };

    void resize() {
        if(capa == len){
            capa *=2;
            int *nmr = new int[capa];
            for(int i=0;i<len;i++){
                nmr[i] = mr[i];
            };
            delete[] mr;
            mr = nmr;
        }
    }

    int getSize() {
        return  len;
    }

    int getCapacity() {
        return  capa;
    }
};
