class DynamicArray {
    private:
    int capa;
    int len;
    int *mr;

public:

    DynamicArray(int capacity) {
        mr = new int[capacity];
        capa = capacity;
        len = 0;
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
            int *temp = mr;
            capa *=2;
            mr = new int[capa];
            for(int i=0;i<len;i++){
                mr[i] = temp[i];
            };
            delete[] temp;
        }
    }

    int getSize() {
        return  len;
    }

    int getCapacity() {
        return  capa;
    }
};
