#ifndef __US_CRYPT_BASE64_HPP__
#define __US_CRYPT_BASE64_HPP__

#ifndef __US_UTIL_HPP__
#include "../us_util.hpp"
#endif

namespace unispace
{
	class _US_UTIL_DLL us_crypt_base64
	{
	public:
		/**
		* \brief          ����һ��buffer��base64��ʽ
		*
		* \param dst      Ŀ�� buffer
		* \param dlen     Ŀ��buffer��С
		* \param src      Դ buffer
		* \param slen     Ҫ�����������
		*
		* \return         �ɹ�����0��ʧ�ܷ��ط�0ֵ.
		*
		* \note           ����ʱ����� *dlen = 0 ���ڻ�ȡ�ʵ���*dlen��С.
		*/
		static int encode(unsigned char *dst, int *dlen,
			unsigned char *src, int  slen);

		/**
		* \brief          ����һ��base64��ʽ����
		*
		* \param dst      Ŀ�� buffer
		* \param dlen     Ŀ��buffer��С
		* \param src      Դ buffer
		* \param slen     Ҫ�����������
		*
		* \return         �ɹ�����0��ʧ�ܷ��ط�0ֵ.
		*
		* \note           ����ʱ����� *dlen = 0 ���ڻ�ȡ�ʵ���*dlen��С.
		*/
		static int decode(unsigned char *dst, int *dlen,
			unsigned char *src, int  slen);

	};

}
#endif // !__US_CRYPT_BASE64_HPP__
