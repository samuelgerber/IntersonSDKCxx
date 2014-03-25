#pragma unmanaged
#include "IntersonCxxControlsHWControls.h"

#pragma managed

#include <vcclr.h>
#include <msclr/marshal_cppstd.h>

#using "Interson.dll"

namespace IntersonCxx
{

namespace Controls
{

class HWControlsImpl
{
public:
  HWControlsImpl()
    {
    Wrapped = gcnew Interson::Controls::HWControls();
    }

private:
  gcroot< Interson::Controls::HWControls ^ > Wrapped;
};


#pragma unmanaged

HWControls
::HWControls():
  Impl( new HWControlsImpl() )
{
}

HWControls
::~HWControls()
{
  delete Impl;
}

} // end namespace Controls

} // end namespace IntersonCxx