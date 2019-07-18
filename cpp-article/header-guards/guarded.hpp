#ifndef __GUARDED_HPP
#define __GUARDED_HPP

class A {
    public:
            A(int m) : m_a(m) {}
            void setA(int m) {m_a = m;}
            int getA() const {return m_a;}
    private:
            int m_a;
};

#endif  //__GUARDED_HPP
