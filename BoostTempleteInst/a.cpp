#include "a.h"
#include <boost/assign/list_of.hpp>

template <Standard MyStandard>
void A<MyStandard>::print()
{
    std::cout << "In Class A" << std::endl;
}

#define Std(x) static_cast<Standard>(x)
#define LIMITS (STANDARD_ENUM_START_INDEX, STANDARD_ENUM_END_INDEX)

#define SAMPLE(I) \
    template void A<Std(I)>::print();

#define BOOST_PP_LOCAL_LIMITS LIMITS
#define BOOST_PP_LOCAL_MACRO(I) SAMPLE(I)

#include BOOST_PP_LOCAL_ITERATE()