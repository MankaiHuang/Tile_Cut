#ifndef __US_CRYPT_MD5_HPP__
#define __US_CRYPT_MD5_HPP__

#ifndef __US_STRING_HPP__
#include "common/us_string.hpp"
#endif

#ifndef __US_UTIL_HPP__
#include "../us_util.hpp"
#endif

namespace unispace
{
	class _US_UTIL_DLL us_crypt_md5 {
	public:
		/**********************************************************************//**
		 * @brief	��ȡmd5ֵ��ʮ�������ַ������.
		 * @author	yimin.liu@unispace-x.com
		 * @date	2016/11/16
		 * @return	�ַ������ַ.
		 *************************************************************************/
		const char* get_hex_digest()const;

		/**********************************************************************//**
		 * @brief	����md5ֵ.
		 * @author	yimin.liu@unispace-x.com
		 * @date	2016/11/16
		 * @param	input	���ڼ���md5ֵ������.
		 * @param	len		�����ֽ���.
		 * @return	�ɹ�����true.
		 *************************************************************************/
		bool update(unsigned char* input, size_t len);

		/**********************************************************************//**
		 * @brief	����md5ֵ.
		 * @author	yimin.liu@unispace-x.com
		 * @date	2016/11/16
		 * @param	filepath	�ļ�·��(���ڼ���md5ֵ).
		 * @return	�ɹ�����true.
		 *************************************************************************/
		bool update(const us_ustring& filepath);
	private:
		unsigned char m_data[16];
	};
}

#endif // !__US_CRYPT_MD5_HPP__