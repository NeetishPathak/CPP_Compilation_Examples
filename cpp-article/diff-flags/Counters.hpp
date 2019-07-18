class Counters {
    public:
        Counters() : 
        #ifndef NDEBUG
            all_Counters(0),
        #endif
            counter1(0),
            counter2(0) {
            }

            void inc1(){
            #ifndef NDEBUG 
                ++all_Counters;
            #endif
                ++counter1;}
            void inc2(){
            #ifndef NDEBUG
                ++all_Counters;
            #endif
                ++counter2;}

        #ifndef NDEBUG
            int getAllCounters(){return all_Counters;}
        #endif
            int get1(){return counter1;}
            int get2(){return counter2;}

    private:
        #ifndef NDEBUG
            int all_Counters;
        #endif
            int counter1;
            int counter2;
};
