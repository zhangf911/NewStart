#ifndef NEWSTART_LIBRARY_LOG_H
#define NEWSTART_LIBRARY_LOG_H

#include "Base.h"

namespace Sky
{
	enum LogType
	{
		/// 调试
		ELogType_ConsoleDebug,
		/// 提示
		ELogType_ConsoleNote,
		/// 错误
		ELogType_ConsoleError,
		/// 异常
		ELogType_ConsoleException,
	}

	class Log
	{
		public:
			Log();

			~Log();

		private:
			ofstream m_logfile;
	}
}



#endif
