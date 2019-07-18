//unguarded.hpp
class A {
    public:
        A(int a) : m_a(a) {}
        void setA(int a){m_a = a;}
        int getA() const {return m_a;} //This is a read-only method and cannot modify the object's data member
    private:
        int m_a;
};
