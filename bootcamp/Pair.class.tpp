#include <iostream>
#include <iomanip>

template<typename T, typename U>
class Pair {

    public:
        Pair< T, U>( T const & lhs, U const & rhs) : _lhs(lhs), _rhs(rhs){
            std::cout << "Genric template" << std::endl;
            return;
        }
        ~Pair<T, U>(void){}

        T const &   fst( void) const {return this->_lhs; }
        U const &   snd(void) const  {return this->_rhs; }

    private:

        T const & _lsh;
        U const & _rhs;

        Pair< T, U>(void);
};

/**********/

template<typename U>
class Pair<int, U>{
    public: 
        Pair<int, U>(int lhs, U const & rhs) : _lhs(lhs), _rhs(rhs){
            std::cout << "Int partial specialization" << std::endl;
            return;
        }
        ~Pair<int, U>(void) {}

        int     fst(void) const {return this->_lsh; }
        U const & snd(void) coonst {return this->_rhs; }

    private:
        int _lsh;
        U const & _rhs;

        Pair<int, U>(void);
}


