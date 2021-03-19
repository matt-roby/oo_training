#ifndef __NOTIFIER_H__
#define __NOTIFIER_H__

class Notifier
{
    public:
        Notifier();
        void wait();
        void notify();
};

#endif // __NOTIFIER_H__