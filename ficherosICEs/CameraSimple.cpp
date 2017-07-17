// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `CameraSimple.ice'

#include <CameraSimple.h>
#include <IceE/LocalException.h>
#include <IceE/ObjectFactory.h>
#include <IceE/BasicStream.h>
#include <IceE/LocalException.h>
#include <IceE/Iterator.h>

#ifndef ICEE_IGNORE_VERSION
#   if ICEE_INT_VERSION / 100 != 103
#       error IceE version mismatch!
#   endif
#   if ICEE_INT_VERSION % 100 < 0
#       error IceE patch level mismatch!
#   endif
#endif

static const ::std::string __RoboCompCameraSimple__CameraSimple__getYUVImage_name = "getYUVImage";

::Ice::Object* IceInternal::upCast(::RoboCompCameraSimple::CameraSimple* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::RoboCompCameraSimple::CameraSimple* p) { return p; }

void
RoboCompCameraSimple::__read(::IceInternal::BasicStream* __is, ::RoboCompCameraSimple::CameraSimplePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::RoboCompCameraSimple::CameraSimple;
        v->__copyFrom(proxy);
    }
}

RoboCompCameraSimple::HardwareFailedException::HardwareFailedException(const ::std::string& __ice_what) :
    ::Ice::UserException(),
    what(__ice_what)
{
}

RoboCompCameraSimple::HardwareFailedException::~HardwareFailedException() throw()
{
}

static const char* __RoboCompCameraSimple__HardwareFailedException_name = "RoboCompCameraSimple::HardwareFailedException";

::std::string
RoboCompCameraSimple::HardwareFailedException::ice_name() const
{
    return __RoboCompCameraSimple__HardwareFailedException_name;
}

::Ice::Exception*
RoboCompCameraSimple::HardwareFailedException::ice_clone() const
{
    return new HardwareFailedException(*this);
}

void
RoboCompCameraSimple::HardwareFailedException::ice_throw() const
{
    throw *this;
}

void
RoboCompCameraSimple::HardwareFailedException::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::RoboCompCameraSimple::HardwareFailedException"), false);
    __os->startWriteSlice();
    __os->write(what);
    __os->endWriteSlice();
}

void
RoboCompCameraSimple::HardwareFailedException::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(what);
    __is->endReadSlice();
}

struct __F__RoboCompCameraSimple__HardwareFailedException : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::RoboCompCameraSimple::HardwareFailedException();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__RoboCompCameraSimple__HardwareFailedException__Ptr = new __F__RoboCompCameraSimple__HardwareFailedException;

const ::IceInternal::UserExceptionFactoryPtr&
RoboCompCameraSimple::HardwareFailedException::ice_factory()
{
    return __F__RoboCompCameraSimple__HardwareFailedException__Ptr;
}

class __F__RoboCompCameraSimple__HardwareFailedException__Init
{
public:

    __F__RoboCompCameraSimple__HardwareFailedException__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::RoboCompCameraSimple::HardwareFailedException", ::RoboCompCameraSimple::HardwareFailedException::ice_factory());
    }

    ~__F__RoboCompCameraSimple__HardwareFailedException__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::RoboCompCameraSimple::HardwareFailedException");
    }
};

static __F__RoboCompCameraSimple__HardwareFailedException__Init __F__RoboCompCameraSimple__HardwareFailedException__i;

#ifdef __APPLE__
extern "C" { void __F__RoboCompCameraSimple__HardwareFailedException__initializer() {} }
#endif

bool
RoboCompCameraSimple::TCamParams::operator==(const TCamParams& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(focal != __rhs.focal)
    {
        return false;
    }
    if(width != __rhs.width)
    {
        return false;
    }
    if(height != __rhs.height)
    {
        return false;
    }
    if(size != __rhs.size)
    {
        return false;
    }
    if(FPS != __rhs.FPS)
    {
        return false;
    }
    if(timerPeriod != __rhs.timerPeriod)
    {
        return false;
    }
    if(inverted != __rhs.inverted)
    {
        return false;
    }
    if(rotated != __rhs.rotated)
    {
        return false;
    }
    if(saturation != __rhs.saturation)
    {
        return false;
    }
    if(lineFreq != __rhs.lineFreq)
    {
        return false;
    }
    if(name != __rhs.name)
    {
        return false;
    }
    if(driver != __rhs.driver)
    {
        return false;
    }
    if(device != __rhs.device)
    {
        return false;
    }
    if(mode != __rhs.mode)
    {
        return false;
    }
    return true;
}

bool
RoboCompCameraSimple::TCamParams::operator<(const TCamParams& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(focal < __rhs.focal)
    {
        return true;
    }
    else if(__rhs.focal < focal)
    {
        return false;
    }
    if(width < __rhs.width)
    {
        return true;
    }
    else if(__rhs.width < width)
    {
        return false;
    }
    if(height < __rhs.height)
    {
        return true;
    }
    else if(__rhs.height < height)
    {
        return false;
    }
    if(size < __rhs.size)
    {
        return true;
    }
    else if(__rhs.size < size)
    {
        return false;
    }
    if(FPS < __rhs.FPS)
    {
        return true;
    }
    else if(__rhs.FPS < FPS)
    {
        return false;
    }
    if(timerPeriod < __rhs.timerPeriod)
    {
        return true;
    }
    else if(__rhs.timerPeriod < timerPeriod)
    {
        return false;
    }
    if(inverted < __rhs.inverted)
    {
        return true;
    }
    else if(__rhs.inverted < inverted)
    {
        return false;
    }
    if(rotated < __rhs.rotated)
    {
        return true;
    }
    else if(__rhs.rotated < rotated)
    {
        return false;
    }
    if(saturation < __rhs.saturation)
    {
        return true;
    }
    else if(__rhs.saturation < saturation)
    {
        return false;
    }
    if(lineFreq < __rhs.lineFreq)
    {
        return true;
    }
    else if(__rhs.lineFreq < lineFreq)
    {
        return false;
    }
    if(name < __rhs.name)
    {
        return true;
    }
    else if(__rhs.name < name)
    {
        return false;
    }
    if(driver < __rhs.driver)
    {
        return true;
    }
    else if(__rhs.driver < driver)
    {
        return false;
    }
    if(device < __rhs.device)
    {
        return true;
    }
    else if(__rhs.device < device)
    {
        return false;
    }
    if(mode < __rhs.mode)
    {
        return true;
    }
    else if(__rhs.mode < mode)
    {
        return false;
    }
    return false;
}

void
RoboCompCameraSimple::TCamParams::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(focal);
    __os->write(width);
    __os->write(height);
    __os->write(size);
    __os->write(FPS);
    __os->write(timerPeriod);
    __os->write(inverted);
    __os->write(rotated);
    __os->write(saturation);
    __os->write(lineFreq);
    __os->write(name);
    __os->write(driver);
    __os->write(device);
    __os->write(mode);
}

void
RoboCompCameraSimple::TCamParams::__read(::IceInternal::BasicStream* __is)
{
    __is->read(focal);
    __is->read(width);
    __is->read(height);
    __is->read(size);
    __is->read(FPS);
    __is->read(timerPeriod);
    __is->read(inverted);
    __is->read(rotated);
    __is->read(saturation);
    __is->read(lineFreq);
    __is->read(name);
    __is->read(driver);
    __is->read(device);
    __is->read(mode);
}

static const ::std::string __RoboCompCameraSimple__CameraSimple_ids[2] =
{
    "::Ice::Object",
    "::RoboCompCameraSimple::CameraSimple"
};

bool
RoboCompCameraSimple::CameraSimple::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__RoboCompCameraSimple__CameraSimple_ids, __RoboCompCameraSimple__CameraSimple_ids + 2, _s);
}

::std::vector< ::std::string>
RoboCompCameraSimple::CameraSimple::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__RoboCompCameraSimple__CameraSimple_ids[0], &__RoboCompCameraSimple__CameraSimple_ids[2]);
}

const ::std::string&
RoboCompCameraSimple::CameraSimple::ice_id(const ::Ice::Current&) const
{
    return __RoboCompCameraSimple__CameraSimple_ids[1];
}

const ::std::string&
RoboCompCameraSimple::CameraSimple::ice_staticId()
{
    return __RoboCompCameraSimple__CameraSimple_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
RoboCompCameraSimple::CameraSimple::___getYUVImage(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        ::RoboCompCameraSimple::TImg __ret = getYUVImage(__current);
        if(__ret.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&__ret[0], &__ret[0] + __ret.size());
        }
    }
    catch(const ::RoboCompCameraSimple::HardwareFailedException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __RoboCompCameraSimple__CameraSimple_all[] =
{
    "getYUVImage",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
RoboCompCameraSimple::CameraSimple::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__RoboCompCameraSimple__CameraSimple_all, __RoboCompCameraSimple__CameraSimple_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __RoboCompCameraSimple__CameraSimple_all)
    {
        case 0:
        {
            return ___getYUVImage(in, current);
        }
        case 1:
        {
            return ___ice_id(in, current);
        }
        case 2:
        {
            return ___ice_ids(in, current);
        }
        case 3:
        {
            return ___ice_isA(in, current);
        }
        case 4:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
RoboCompCameraSimple::CameraSimple::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
RoboCompCameraSimple::CameraSimple::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}


bool
RoboCompCameraSimple::operator==(const ::RoboCompCameraSimple::CameraSimple& l, const ::RoboCompCameraSimple::CameraSimple& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
RoboCompCameraSimple::operator<(const ::RoboCompCameraSimple::CameraSimple& l, const ::RoboCompCameraSimple::CameraSimple& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
RoboCompCameraSimple::__patch__CameraSimplePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::RoboCompCameraSimple::CameraSimplePtr* p = static_cast< ::RoboCompCameraSimple::CameraSimplePtr*>(__addr);
    assert(p);
    *p = ::RoboCompCameraSimple::CameraSimplePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::RoboCompCameraSimple::CameraSimple::ice_staticId(), v->ice_id());
    }
}

::RoboCompCameraSimple::TImg
IceProxy::RoboCompCameraSimple::CameraSimple::getYUVImage(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__RoboCompCameraSimple__CameraSimple__getYUVImage_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __RoboCompCameraSimple__CameraSimple__getYUVImage_name, ::Ice::Idempotent, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::RoboCompCameraSimple::HardwareFailedException&)
                    {
                        throw;
                    }
                    catch(const ::Ice::UserException& __ex)
                    {
                        ::Ice::UnknownUserException __uex(__FILE__, __LINE__);
                        __uex.unknown = __ex.ice_name();
                        throw __uex;
                    }
                }
                ::RoboCompCameraSimple::TImg __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*> _____ret;
                __is->read(_____ret);
                ::std::vector< ::Ice::Byte>(_____ret.first, _____ret.second).swap(__ret);
                return __ret;
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapperRelaxed(__handler, __ex, __cnt);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}

const ::std::string&
IceProxy::RoboCompCameraSimple::CameraSimple::ice_staticId()
{
    return __RoboCompCameraSimple__CameraSimple_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::RoboCompCameraSimple::CameraSimple::__newInstance() const
{
    return new CameraSimple;
}
