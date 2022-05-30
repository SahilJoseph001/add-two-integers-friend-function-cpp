// *** Coded By SahilJoseph *** //
# include <iostream>

class Y;

class X {
    private:
        int data;
    public:
        void setValue(int value) {
            data = value;
        }
    friend void add(X, Y);
};

class Y {
    private:
        int data;
    public:
        void setValue(int value) {
            data = value;
        }
    friend void add(X, Y);
};

void add(X o1, Y o2) {
    std::cout<<"Sum of X data and Y data is : "<<(o1.data + o2.data)<<std::endl;
}

int main(int argc, char const *argv[]) {

    while (true) {

        X a;
        Y b; 
        int v;
        int c;
        std::cout<<"Enter the first integer : ";
        std::cin>>v;
        std::cout<<"Enter the second integer : ";
        std::cin>>c;
        a.setValue(v);
        b.setValue(c);
        add(a,b);

    }
    
    return 0;
}
