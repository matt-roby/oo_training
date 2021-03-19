#ifndef __IOUTPUTTYPE_H__
#define __IOUTPUTTYPE_H__

using namespace std;

class IOutputType
{
    public:
        ~IOutputType() = default;
        virtual void startOutput() = 0;
};

#endif // __IOUTPUTTYPE_H__