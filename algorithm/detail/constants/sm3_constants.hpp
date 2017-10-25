/*
This code is written by kerukuro and released into public domain.
*/

#ifndef DIGESTPP_PROVIDERS_SM3_CONSTANTS_HPP
#define DIGESTPP_PROVIDERS_SM3_CONSTANTS_HPP

namespace digestpp
{

namespace detail
{

template<typename T>
struct sm3_constants
{
	const static uint32_t K[4];
};

template<typename T>
const uint32_t sm3_constants<T>::K[4] = {
		0x5a827999, 0x6ed9eba1, 0x8f1bbcdc, 0xca62c1d6
};

} // namespace detail

} // namespace digestpp

#endif
