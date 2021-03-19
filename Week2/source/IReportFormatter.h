#ifndef __REPORTFORMATTER_H__
#define __REPORTFORMATTER_H__

#include <string>

using namespace std;

enum class FormatType
{
    XML,
    CSV
};

class IReportFormatter
{
    public:
        ~IReportFormatter() = default;        
        virtual string getFormattedValue() = 0;
};

#endif // __REPORTFORMATTER_H__