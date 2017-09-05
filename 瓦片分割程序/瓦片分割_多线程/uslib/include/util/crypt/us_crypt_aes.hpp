#ifndef __US_CRYPT_AES_HPP__
#define __US_CRYPT_AES_HPP__

#ifndef __US_UTIL_HPP__
#include "../us_util.hpp"
#endif

namespace unispace
{
	class _US_UTIL_DLL us_crypt_aes {
	public:
		/**********************************************************************//**
		 * @brief	���캯��.
		 * @author	yimin.liu@unispace-x.com
		 * @date	2016/11/16
		 * @param	key		�ܳ�.
		 * @param	len		�ܳ��ֽ���,����Ϊ128,192��256.
		 *************************************************************************/
		us_crypt_aes(unsigned char* key, int len);

		/**********************************************************************//**
		 * @brief	��������.
		 * @author	yimin.liu@unispace-x.com
		 * @date	2016/11/16
		 * @param	input	����������.
		 * @param	len		�����������ֽ���.
		 * @param	output	�������.
		 *************************************************************************/
		void encode_cbc(unsigned char* input, size_t len,unsigned char* output);

		/**********************************************************************//**
		 * @brief	��������.
		 * @author	yimin.liu@unispace-x.com
		 * @date	2016/11/16
		 * @param	input	����������.
		 * @param	len		�����������ֽ���.
		 * @param	output	�������.
		 *************************************************************************/
		void decode_cbc(unsigned char* input, size_t len, unsigned char* output);

	private:
		unsigned char m_key[256];
		int			  m_key_size;
	};
}

#endif // !__US_CRYPT_AES_HPP__
