/*
 *  The interface of private non-mutating algorithm.
 *  Copyright (C)  2008 - 2012  Wangbo
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *  Author e-mail: activesys.wb@gmail.com
 *                 activesys@sina.com.cn
 */

#ifndef _CSTL_ALGO_NONMUTATING_PRIVATE_H_
#define _CSTL_ALGO_NONMUTATING_PRIVATE_H_

#ifdef __cplusplus
extern "C" {
#endif

/** include section **/

/** constant declaration and macro section **/

/** data type declaration and struct, union, enum section **/

/** exported global variable declaration section **/

/** exported function prototype section **/
/**
 * Locates the position of the first occurrence of an element in a range that has a specified value.
 * @param it_first      An input iterator addressing the position of the first element in the range to be searched
 *                      for the specified value.
 * @param it_last       An input iterator addressing the position one past the final element in the range to be
 *                      searched for the specified value.
 * @param ...           The value to be searched for.
 * @return An input iterator addressing the first occurrence of the specified value in the range being searched.
 *         Returns it_last if no such iterator exists.
 * @remarks This algorithm use equal operation for type of specificed value.
 */
extern input_iterator_t _algo_find(input_iterator_t it_first, input_iterator_t it_last, ...);
extern input_iterator_t _algo_find_varg(input_iterator_t it_first, input_iterator_t it_last, va_list val_elemlist);

#ifdef __cplusplus
}
#endif

#endif /* _CSTL_ALGO_NONMUTATING_PRIVATE_H_ */
/** eof **/
