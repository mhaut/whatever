// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `CameraSimplePub.ice'

#include <CameraSimplePub.h>
#include <IceE/LocalException.h>
#include <IceE/ObjectFactory.h>
#include <IceE/BasicStream.h>
#include <IceE/Iterator.h>

#ifndef ICEE_IGNORE_VERSION
#   if ICEE_INT_VERSION / 100 != 103
#       error IceE version mismatch!
#   endif
#   if ICEE_INT_VERSION % 100 < 0
#       error IceE patch level mismatch!
#   endif
#endif

static const ::std::string __RoboCompCameraSimplePub__CameraSimplePub__putYUVImage_name = "putYUVImage";

::Ice::Object* IceInternal::upCast(::RoboCompCameraSimplePub::CameraSimplePub* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::RoboCompCameraSimplePub::CameraSimplePub* p) { return p; }

void
RoboCompCameraSimplePub::__read(::IceInternal::BasicStream* __is, ::RoboCompCameraSimplePub::CameraSimplePubPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::RoboCompCameraSimplePub::CameraSimplePub;
        v->__copyFrom(proxy);
    }
}

bool
RoboCompCameraSimplePub::TCamParams::operator==(const TCamParams& __rhs) const
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
RoboCompCameraSimplePub::TCamParams::operator<(const TCamParams& __rhs) const
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
RoboCompCameraSimplePub::TCamParams::__write(::IceInternal::BasicStream* __os) const
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
RoboCompCameraSimplePub::TCamParams::__read(::IceInternal::BasicStream* __is)
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

static const ::std::string __RoboCompCameraSimplePub__CameraSimplePub_ids[2] =
{
    "::Ice::Object",
    "::RoboCompCameraSimplePub::CameraSimplePub"
};

bool
RoboCompCameraSimplePub::CameraSimplePub::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__RoboCompCameraSimplePub__CameraSimplePub_ids, __RoboCompCameraSimplePub__CameraSimplePub_ids + 2, _s);
}

::std::vector< ::std::string>
RoboCompCameraSimplePub::CameraSimplePub::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__RoboCompCameraSimplePub__CameraSimplePub_ids[0], &__RoboCompCameraSimplePub__CameraSimplePub_ids[2]);
}

const ::std::string&
RoboCompCameraSimplePub::CameraSimplePub::ice_id(const ::Ice::Current&) const
{
    return __RoboCompCameraSimplePub__CameraSimplePub_ids[1];
}

const ::std::string&
RoboCompCameraSimplePub::CameraSimplePub::ice_staticId()
{
    return __RoboCompCameraSimplePub__CameraSimplePub_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
RoboCompCameraSimplePub::CameraSimplePub::___putYUVImage(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::RoboCompCameraSimplePub::TImg img;
    ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*> ___img;
    __is->read(___img);
    ::std::vector< ::Ice::Byte>(___img.first, ___img.second).swap(img);
    putYUVImage(img, __current);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __RoboCompCameraSimplePub__CameraSimplePub_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "putYUVImage"
};

::Ice::DispatchStatus
RoboCompCameraSimplePub::CameraSimplePub::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__RoboCompCameraSimplePub__CameraSimplePub_all, __RoboCompCameraSimplePub__CameraSimplePub_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __RoboCompCameraSimplePub__CameraSimplePub_all)
    {
        case 0:
        {
            return ___ice_id(in, current);
        }
        case 1:
        {
            return ___ice_ids(in, current);
        }
        case 2:
        {
            return ___ice_isA(in, current);
        }
        case 3:
        {
            return ___ice_ping(in, current);
        }
        case 4:
        {
            return ___putYUVImage(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
RoboCompCameraSimplePub::CameraSimplePub::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
RoboCompCameraSimplePub::CameraSimplePub::__read(::IceInternal::BasicStream* __is, bool __rid)
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
RoboCompCameraSimplePub::operator==(const ::RoboCompCameraSimplePub::CameraSimplePub& l, const ::RoboCompCameraSimplePub::CameraSimplePub& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
RoboCompCameraSimplePub::operator<(const ::RoboCompCameraSimplePub::CameraSimplePub& l, const ::RoboCompCameraSimplePub::CameraSimplePub& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
RoboCompCameraSimplePub::__patch__CameraSimplePubPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::RoboCompCameraSimplePub::CameraSimplePubPtr* p = static_cast< ::RoboCompCameraSimplePub::CameraSimplePubPtr*>(__addr);
    assert(p);
    *p = ::RoboCompCameraSimplePub::CameraSimplePubPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::RoboCompCameraSimplePub::CameraSimplePub::ice_staticId(), v->ice_id());
    }
}

void
IceProxy::RoboCompCameraSimplePub::CameraSimplePub::putYUVImage(const ::RoboCompCameraSimplePub::TImg& img, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __RoboCompCameraSimplePub__CameraSimplePub__putYUVImage_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                if(img.size() == 0)
                {
                    __os->writeSize(0);
                }
                else
                {
                    __os->write(&img[0], &img[0] + img.size());
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                __outS.abort(__ex);
            }
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
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
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
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
IceProxy::RoboCompCameraSimplePub::CameraSimplePub::ice_staticId()
{
    return __RoboCompCameraSimplePub__CameraSimplePub_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::RoboCompCameraSimplePub::CameraSimplePub::__newInstance() const
{
    return new CameraSimplePub;
}
