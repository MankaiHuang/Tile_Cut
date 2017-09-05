#ifndef __US_PATH_HPP__
#define __US_PATH_HPP__

#include <list>
#include <ostream>
#include <iostream>
#include <string>
#include <bitset>

#ifndef __US_DATA_STORAGE_HPP__
#include "us_data_storage.hpp"
#endif


#define MAXDEPTH    256

namespace unispace
{

	class _US_DATA_STORAGE_DLL us_path {
	public:
		us_path(const std::string& s) :segmt(), flags() {
			assign(s);
		}
		us_path() :segmt(), flags() {
		}
		// �ϲ�
		void merge(const us_path& p);
		std::string get() const;
		void assign(const std::string& s);

		us_path& operator=(const std::string& s) {
			assign(s);
			return *this;
		}

		us_path& operator+=(const us_path& p) {
			this->merge(p);
			return *this;
		}

		/**
		 * ���� /../ /./ ����
		 */
		void normalize();
		size_t size() const;

		/**
		 * ����·������Ϊ����·��
		 */
		void absolute(bool a) {
			flags[SLASH_BEGIN] = a;
		}

		void set_dir() {
			flags[SLASH_END] = true;
		}

		/**
		 * ���·���Ǿ���·�����򷵻�true�����򷵻�false
		 */
		bool absolute() const {
			return flags.test(SLASH_BEGIN);
		}

		/**
		 * ������ԣ�������һ��Ŀ¼�����򲻲���
		 */
		bool updir();

		size_t depth() {
			return segmt.size();
		}

		/**
		 * ����·����Ϊ��
		 */
		void clear() {
			segmt.clear();
			flags.reset(SLASH_END);
			flags.reset(SLASH_BEGIN);
		}

		bool empty() const {
			if (!flags.test(SLASH_END) && segmt.empty() && !flags.test(SLASH_BEGIN))
				return true;
			else
				return false;
		}
		// ���
		friend std::ostream& operator<<(std::ostream& os, const us_path& p) {
			if (!p.empty()) {
				os << p.get();
			}
			return os;
		}

		friend class Url_lexer;
		friend class us_url;

	protected:
		std::list<std::string> segmt;
		static size_t const FLAGSSIZE = 2;
		enum flags {
			SLASH_END,
			SLASH_BEGIN
		};
		std::bitset<FLAGSSIZE> flags;

	private:
	};

}
#endif // !__US_PATH_HPP__
