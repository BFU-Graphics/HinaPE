#ifndef HINAPE_FLUID_ENGINE_POINT_H_
#define HINAPE_FLUID_ENGINE_POINT_H_

#include "macros.h"

#include <array>
#include <type_traits>

namespace HinaPE::FluidEngine
{

//!
//! \brief Generic N-D point class.
//!
//! \tparam T - Number type.
//! \tparam N - Dimension.
//!
template<typename T, size_t N>
class Point final
{
public:
    static_assert(N > 0, "Size of static-sized point should be greater than zero.");
    static_assert(std::is_arithmetic<T>::value, "Point only can be instantiated with arithmetic types");

    //! Constructs a point with zeros.
    Point();

    //! Constructs point instance with parameters.
    template<typename... Params>
    explicit Point(Params... params);

    //! Constructs point instance with initiazer list.
    template<typename U>
    explicit Point(const std::initializer_list<U> &lst);

    //! Copy constructor.
    Point(const Point &other);

    //! Set point instance with initializer list.
    template<typename U>
    void set(const std::initializer_list<U> &lst);

    //! Set point instance with other point.
    void set(const Point &other);

    //! Set point instance with initializer list.
    template<typename U>
    Point &operator=(const std::initializer_list<U> &lst);

    //! Set point instance with other point.
    Point &operator=(const Point &other);

    //! Returns the const reference to the \p i -th element.
    const T &operator[](size_t i) const;

    //! Returns the reference to the \p i -th element.
    T &operator[](size_t);

private:
    std::array<T, N> _elements;

    template<typename... Params>
    void setAt(size_t i, T v, Params... params);

    void setAt(size_t i, T v);
};

}  // namespace HinaPE::FluidEngine

#include "point-inl.h"

#endif  // HINAPE_FLUID_ENGINE_POINT_H_

