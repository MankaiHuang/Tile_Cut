#ifndef __US_CRYPT_SHA2_HPP__
#define __US_CRYPT_SHA2_HPP__

#ifndef __US_STRING_HPP__
#include "common/us_string.hpp"
#endif

#ifndef __US_UTIL_HPP__
#include "../us_util.hpp"
#endif

namespace unispace
{
	// sha224
	class _US_UTIL_DLL us_crypt_sha224 {
	public:
		/**********************************************************************//**
		 * @brief	��ȡsha224ֵ��ʮ�������ַ������.
		 * @author	yimin.liu@unispace-x.com
		 * @date	2016/11/16
		 * @return	�ַ������ַ.
		 *************************************************************************/
		const char* get_hex_digest()const;

		/**********************************************************************//**
		 * @brief	����sha224ֵ.
		 * @author	yimin.liu@unispace-x.com
		 * @date	2016/11/16
		 * @param	input	���ڼ���sha224ֵ������.
		 * @param	len		�����ֽ���.
		 * @return	�ɹ�����true.
		 *************************************************************************/
		bool update(unsigned char* input, size_t len);

		/**********************************************************************//**
		 * @brief	����sha224ֵ.
		 * @author	yimin.liu@unispace-x.com
		 * @date	2016/11/16
		 * @param	filepath	�ļ�·��(���ڼ���sha224ֵ).
		 * @return	�ɹ�����true.
		 *************************************************************************/
		bool update(const us_ustring& filepath);
	private:
		unsigned char m_data[28];
	};

	// sha256
	class _US_UTIL_DLL us_crypt_sha256 {
	public:
		/**********************************************************************//**
		 * @brief	��ȡsha256ֵ��ʮ�������ַ������.
		 * @author	yimin.liu@unispace-x.com
		 * @date	2016/11/16
		 * @return	�ַ������ַ.
		 *************************************************************************/
		const char* get_hex_digest()const;

		/**********************************************************************//**
		 * @brief	����sha256ֵ.
		 * @author	yimin.liu@unispace-x.com
		 * @date	2016/11/16
		 * @param	input	���ڼ���sha256ֵ������.
		 * @param	len		�����ֽ���.
		 * @return	�ɹ�����true.
		 *************************************************************************/
		bool update(unsigned char* input, size_t len);

		/**********************************************************************//**
		 * @brief	����sha256ֵ.
		 * @author	yimin.liu@unispace-x.com
		 * @date	2016/11/16
		 * @param	filepath	�ļ�·��(���ڼ���sha256ֵ).
		 * @return	�ɹ�����true.
		 *************************************************************************/
		bool update(const us_ustring& filepath);
	private:
		unsigned char m_data[32];
	};
}


#endif // !__US_CRYPT_SHA2_HPP__