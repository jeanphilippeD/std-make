//////////////////////////////////////////////////////////////////////////////
//
// (C) Copyright Vicente J. Botet Escriba 2014-2015.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file // LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
//////////////////////////////////////////////////////////////////////////////

#ifndef JASEL_META_V1_EVAL_HPP
#define JASEL_META_V1_EVAL_HPP

namespace std
{
namespace experimental
{
namespace meta
{
inline namespace v1
{
  /// evaluates a meta-expression \p T by returning the nested \c T::type
  template <class T>
  using eval = typename T::type;

}
}
}
}

#endif // header
