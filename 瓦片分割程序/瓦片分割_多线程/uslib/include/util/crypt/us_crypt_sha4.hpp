#ifndef __US_CRYPT_SHA4_HPP__
#define __US_CRYPT_SHA4_HPP__

#ifndef __US_STRING_HPP__
#include "common/us_string.hpp"
#endif

#ifndef __US_UTIL_HPP__
#include "../us_util.hpp"
#endif

namespace unispace
{
	class _US_UTIL_DLL us_crypt_sha384 {
	public:
		/**********************************************************************//**
		 * @brief	��ȡsha384ֵ��ʮ�������ַ������.
		 * @author	yimin.liu@unispace-x.com
		 * @date	2016/11/16
		 * @return	�ַ������ַ.
		 *************************************************************************/
		const char* get_hex_digest()const;

		/**********************************************************************//**
		 * @brief	����sha384ֵ.
		 * @author	yimin.liu@unispace-x.com
		 * @date	2016/11/16
		 * @param	input	���ڼ���sha384ֵ������.
		 * @param	len		�����ֽ���.
		 * @return	�ɹ�����true.
		 *************************************************************************/
		bool update(unsigned char* input, size_t len);

		/**********************************************************************//**
		 * @brief	����sha384ֵ.
		 * @author	yimin.liu@unispace-x.com
		 * @date	2016/11/16
		 * @param	filepath	�ļ�·��(���ڼ���sha384ֵ).
		 * @return	�ɹ�����true.
		 *************************************************************************/
		bool update(const us_ustring& filepath);
	private:
		unsigned char m_data[48];
	};

	class _US_UTIL_DLL us_crypt_sha512 {
	public:
		/**********************************************************************//**
		 * @brief	��ȡsha512ֵ��ʮ�������ַ������.
		 * @author	yimin.liu@unispace-x.com
		 * @date	2016/11/16
		 * @return	�ַ������ַ.
		 *************************************************************************/
		const char* get_hex_digest()const;

		/**********************************************************************//**
		 * @brief	����sha512ֵ.
		 * @author	yimin.liu@unispace-x.com
		 * @date	2016/11/16
		 * @param	input	���ڼ���sha512ֵ������.
		 * @param	len		�����ֽ���.
		 * @return	�ɹ�����true.
		 *************************************************************************/
		bool update(unsigned char* input, size_t len);

		/**********************************************************************//**
		 * @brief	����sha512ֵ.
		 * @author	yimin.liu@unispace-x.com
		 * @date	2016/11/16
		 * @param	filepath	�ļ�·��(���ڼ���sha512ֵ).
		 * @return	�ɹ�����true.
		 *************************************************************************/
		bool update(const us_ustring& filepath);
	private:
		unsigned char m_data[64];
	};
}


#endif // !__US_CRYPT_SHA4_HPP__