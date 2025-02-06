#ifndef AUTO_H
#define AUTO_H

/*
* Playing around with the Auto! You don't need to us auto
* in templates (though this really makes it as generic as
* it can get). Auto just detects types for you!
*/

template<typename T, typename U>
auto add(T t, U u) -> decltype(t + u) {
    return t + u;
}

#endif