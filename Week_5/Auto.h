#ifndef AUTO_H
#define AUTO_H


template<typename T, typename U>
auto add(T t, U u) -> decltype(t + u) {
    return t + u;
}

#endif