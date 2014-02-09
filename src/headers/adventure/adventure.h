#ifndef _INC_ADVENTURE_H
#define _INC_ADVENTURE_H

namespace adventure {

class Adventure {
  public:
    Adventure();
    virtual ~Adventure();

    virtual void PrintSomething();
};

} // namespace adventure

#endif
