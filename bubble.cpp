    #include<iostream>
    using namespace std;
    template <class t>
    class sort{
        private:
        t a[10];
        t element;
        public:
        void readarray(t );
        void bubblesort(t);
        void display(t);
     };
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
    void sort<t>::bubblesort(t n){
                int i,j;
        t tem;
        for(i=0;i<n;i++){
                for(j=0;j<(n-i-1);j++)
            {    if(a[j]>a[j+1]){
                       tem=a[j];
                        a[j]=a[j+1];
                        a[j+1]=tem;
                       }
                       }
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
        i.bubblesort(n);
        i.display(n);
                cout<<"enter the characters element\n";
        c.readarray(n);
        c.bubblesort(n);
        c.display(n);
        cout<<"enter the floating element\n";
        f.readarray(n);
        f.bubblesort(n);
        f.display(n);
    return 0;
    }