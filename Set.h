//
// Created by Swift Sheng on 10/2/20.
//

#ifndef A01_SET_H
#define A01_SET_H
using namespace std;

#include <cstddef>
#include <vector>
#include <ostream>


template<typename  T>
class Set {
private:
    vector <T> *_master_ptr;
    vector<size_t> _elems; //List of indices into this->master
    size_t _sum;
public:
    Set(vector<T> *_mast_ptr) : _master_ptr(_mast_ptr), _sum(0){}
    Set(){
        _master_ptr = nullptr;
        _elems = new vector<T>;
        _sum = 0;
    };

//    const size_t size() const{return _elems.size();}
//    const vector<T> *get_master_ptr() const {return _master_ptr;}
//    const size_t  get_sum() const{return _sum;}
//
//    bool add_elem(size_t n); // n is index in master
//    bool add_all_elements(); // add everthing in the master;
//
//    Set<T> find_biggest_subset_le(size_t target);
//    friend ostream &operator<<(ostream& os, const Set<T> &set){
//      os << "overloaded << " ;
//
//      return os << "!";
//    };



//    friend ostream &operator<<(ostream& os, const Set<T> &set){
//        const vector<T> *mast_ptr = set.get_master_ptr();
//        os << "{\n";
//        for(size_t index: set._elems)
////            os << " " << mast_ptr.at(index) << "\n";
//            os << "index:" << index << "\n";
//
//        return os << "}";
//    }

    friend class Tests;

};


#endif //A01_SET_H
