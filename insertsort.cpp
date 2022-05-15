    #include<iostream>
    using namespace std;
    template <class t>
    class sort{
        private:
        t a[10];
        t element;
        public:
        void readarray(t );
        void insertsort(t);
        void display(t);};
    template <class t>
    void sort<t>::readarray(t n){
    int i ;
for(i=0;i<n;i++)
    cin>>a[i];
    }
    template <class t>
    void sort<t>::display(t n){
    int i=0;
    for(i=0;i<n;i++){
        cout<<"\t"<<a[i];
    }
    cout<<endl;
    }
    template <class t>
    void sort<t>::insertsort(t n){
        int i,j;
        t key;
        for(i=1;i<n;i++){
            key=a[i];
            j=i-1;
            while(j>=0&& key<=a[j])
            {a[j+1]=a[j];
            j--;
    }
            a[j+1]=key;
        }
    }
int main(){
        sort <int> i;
        sort <double> f;
        sort <char> c;
        int n;
        cout<<"enter the size of array\n";
        cin>>n;
        cout<<"enter the integer element\n";
        i.readarray(n);
        i.insertsort(n);
        i.display(n); 
        cout<<"enter the characters element\n";
        c.readarray(n);
        c.insertsort(n);
        c.display(n);
        cout<<"enter the floating element\n";
        f.readarray(n);
        f.insertsort(n);
        f.display(n);
        return 0;
  }