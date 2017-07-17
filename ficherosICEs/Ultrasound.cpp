// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `Ultrasound.ice'

#include <Ultrasound.h>
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

static const ::std::string __RoboCompUltrasound__Ultrasound__getBusParams_name = "getBusParams";

static const ::std::string __RoboCompUltrasound__Ultrasound__getSensorParams_name = "getSensorParams";

static const ::std::string __RoboCompUltrasound__Ultrasound__getAllSensorParams_name = "getAllSensorParams";

static const ::std::string __RoboCompUltrasound__Ultrasound__getSensorDistance_name = "getSensorDistance";

static const ::std::string __RoboCompUltrasound__Ultrasound__getAllSensorDistances_name = "getAllSensorDistances";

::Ice::Object* IceInternal::upCast(::RoboCompUltrasound::Ultrasound* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::RoboCompUltrasound::Ultrasound* p) { return p; }

void
RoboCompUltrasound::__read(::IceInternal::BasicStream* __is, ::RoboCompUltrasound::UltrasoundPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::RoboCompUltrasound::Ultrasound;
        v->__copyFrom(proxy);
    }
}

RoboCompUltrasound::HardwareFailedException::HardwareFailedException(const ::std::string& __ice_what) :
    ::Ice::UserException(),
    what(__ice_what)
{
}

RoboCompUltrasound::HardwareFailedException::~HardwareFailedException() throw()
{
}

static const char* __RoboCompUltrasound__HardwareFailedException_name = "RoboCompUltrasound::HardwareFailedException";

::std::string
RoboCompUltrasound::HardwareFailedException::ice_name() const
{
    return __RoboCompUltrasound__HardwareFailedException_name;
}

::Ice::Exception*
RoboCompUltrasound::HardwareFailedException::ice_clone() const
{
    return new HardwareFailedException(*this);
}

void
RoboCompUltrasound::HardwareFailedException::ice_throw() const
{
    throw *this;
}

void
RoboCompUltrasound::HardwareFailedException::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::RoboCompUltrasound::HardwareFailedException"), false);
    __os->startWriteSlice();
    __os->write(what);
    __os->endWriteSlice();
}

void
RoboCompUltrasound::HardwareFailedException::__read(::IceInternal::BasicStream* __is, bool __rid)
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

struct __F__RoboCompUltrasound__HardwareFailedException : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::RoboCompUltrasound::HardwareFailedException();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__RoboCompUltrasound__HardwareFailedException__Ptr = new __F__RoboCompUltrasound__HardwareFailedException;

const ::IceInternal::UserExceptionFactoryPtr&
RoboCompUltrasound::HardwareFailedException::ice_factory()
{
    return __F__RoboCompUltrasound__HardwareFailedException__Ptr;
}

class __F__RoboCompUltrasound__HardwareFailedException__Init
{
public:

    __F__RoboCompUltrasound__HardwareFailedException__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::RoboCompUltrasound::HardwareFailedException", ::RoboCompUltrasound::HardwareFailedException::ice_factory());
    }

    ~__F__RoboCompUltrasound__HardwareFailedException__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::RoboCompUltrasound::HardwareFailedException");
    }
};

static __F__RoboCompUltrasound__HardwareFailedException__Init __F__RoboCompUltrasound__HardwareFailedException__i;

#ifdef __APPLE__
extern "C" { void __F__RoboCompUltrasound__HardwareFailedException__initializer() {} }
#endif

RoboCompUltrasound::UnknownSensorException::UnknownSensorException(const ::std::string& __ice_what) :
    ::Ice::UserException(),
    what(__ice_what)
{
}

RoboCompUltrasound::UnknownSensorException::~UnknownSensorException() throw()
{
}

static const char* __RoboCompUltrasound__UnknownSensorException_name = "RoboCompUltrasound::UnknownSensorException";

::std::string
RoboCompUltrasound::UnknownSensorException::ice_name() const
{
    return __RoboCompUltrasound__UnknownSensorException_name;
}

::Ice::Exception*
RoboCompUltrasound::UnknownSensorException::ice_clone() const
{
    return new UnknownSensorException(*this);
}

void
RoboCompUltrasound::UnknownSensorException::ice_throw() const
{
    throw *this;
}

void
RoboCompUltrasound::UnknownSensorException::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::RoboCompUltrasound::UnknownSensorException"), false);
    __os->startWriteSlice();
    __os->write(what);
    __os->endWriteSlice();
}

void
RoboCompUltrasound::UnknownSensorException::__read(::IceInternal::BasicStream* __is, bool __rid)
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

struct __F__RoboCompUltrasound__UnknownSensorException : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::RoboCompUltrasound::UnknownSensorException();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__RoboCompUltrasound__UnknownSensorException__Ptr = new __F__RoboCompUltrasound__UnknownSensorException;

const ::IceInternal::UserExceptionFactoryPtr&
RoboCompUltrasound::UnknownSensorException::ice_factory()
{
    return __F__RoboCompUltrasound__UnknownSensorException__Ptr;
}

class __F__RoboCompUltrasound__UnknownSensorException__Init
{
public:

    __F__RoboCompUltrasound__UnknownSensorException__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::RoboCompUltrasound::UnknownSensorException", ::RoboCompUltrasound::UnknownSensorException::ice_factory());
    }

    ~__F__RoboCompUltrasound__UnknownSensorException__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::RoboCompUltrasound::UnknownSensorException");
    }
};

static __F__RoboCompUltrasound__UnknownSensorException__Init __F__RoboCompUltrasound__UnknownSensorException__i;

#ifdef __APPLE__
extern "C" { void __F__RoboCompUltrasound__UnknownSensorException__initializer() {} }
#endif

bool
RoboCompUltrasound::BusParams::operator==(const BusParams& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(numSensors != __rhs.numSensors)
    {
        return false;
    }
    if(baudRate != __rhs.baudRate)
    {
        return false;
    }
    if(basicPeriod != __rhs.basicPeriod)
    {
        return false;
    }
    return true;
}

bool
RoboCompUltrasound::BusParams::operator<(const BusParams& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(numSensors < __rhs.numSensors)
    {
        return true;
    }
    else if(__rhs.numSensors < numSensors)
    {
        return false;
    }
    if(baudRate < __rhs.baudRate)
    {
        return true;
    }
    else if(__rhs.baudRate < baudRate)
    {
        return false;
    }
    if(basicPeriod < __rhs.basicPeriod)
    {
        return true;
    }
    else if(__rhs.basicPeriod < basicPeriod)
    {
        return false;
    }
    return false;
}

void
RoboCompUltrasound::BusParams::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(numSensors);
    __os->write(baudRate);
    __os->write(basicPeriod);
}

void
RoboCompUltrasound::BusParams::__read(::IceInternal::BasicStream* __is)
{
    __is->read(numSensors);
    __is->read(baudRate);
    __is->read(basicPeriod);
}

bool
RoboCompUltrasound::SensorParams::operator==(const SensorParams& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(device != __rhs.device)
    {
        return false;
    }
    if(busId != __rhs.busId)
    {
        return false;
    }
    if(name != __rhs.name)
    {
        return false;
    }
    return true;
}

bool
RoboCompUltrasound::SensorParams::operator<(const SensorParams& __rhs) const
{
    if(this == &__rhs)
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
    if(busId < __rhs.busId)
    {
        return true;
    }
    else if(__rhs.busId < busId)
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
    return false;
}

void
RoboCompUltrasound::SensorParams::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(device);
    __os->write(busId);
    __os->write(name);
}

void
RoboCompUltrasound::SensorParams::__read(::IceInternal::BasicStream* __is)
{
    __is->read(device);
    __is->read(busId);
    __is->read(name);
}

void
RoboCompUltrasound::__writeSensorParamsList(::IceInternal::BasicStream* __os, const ::RoboCompUltrasound::SensorParams* begin, const ::RoboCompUltrasound::SensorParams* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
RoboCompUltrasound::__readSensorParamsList(::IceInternal::BasicStream* __is, ::RoboCompUltrasound::SensorParamsList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 6);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

static const ::std::string __RoboCompUltrasound__Ultrasound_ids[2] =
{
    "::Ice::Object",
    "::RoboCompUltrasound::Ultrasound"
};

bool
RoboCompUltrasound::Ultrasound::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__RoboCompUltrasound__Ultrasound_ids, __RoboCompUltrasound__Ultrasound_ids + 2, _s);
}

::std::vector< ::std::string>
RoboCompUltrasound::Ultrasound::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__RoboCompUltrasound__Ultrasound_ids[0], &__RoboCompUltrasound__Ultrasound_ids[2]);
}

const ::std::string&
RoboCompUltrasound::Ultrasound::ice_id(const ::Ice::Current&) const
{
    return __RoboCompUltrasound__Ultrasound_ids[1];
}

const ::std::string&
RoboCompUltrasound::Ultrasound::ice_staticId()
{
    return __RoboCompUltrasound__Ultrasound_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
RoboCompUltrasound::Ultrasound::___getBusParams(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::RoboCompUltrasound::BusParams __ret = getBusParams(__current);
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
RoboCompUltrasound::Ultrasound::___getSensorParams(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string sensor;
    __is->read(sensor);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::RoboCompUltrasound::SensorParams __ret = getSensorParams(sensor, __current);
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
RoboCompUltrasound::Ultrasound::___getAllSensorParams(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::RoboCompUltrasound::SensorParamsList __ret = getAllSensorParams(__current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::RoboCompUltrasound::__writeSensorParamsList(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
RoboCompUltrasound::Ultrasound::___getSensorDistance(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::std::string sensor;
    __is->read(sensor);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        ::std::string __ret = getSensorDistance(sensor, __current);
        __os->write(__ret);
    }
    catch(const ::RoboCompUltrasound::HardwareFailedException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    catch(const ::RoboCompUltrasound::UnknownSensorException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
RoboCompUltrasound::Ultrasound::___getAllSensorDistances(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        ::RoboCompUltrasound::SensorsState __ret = getAllSensorDistances(__current);
        if(__ret.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&__ret[0], &__ret[0] + __ret.size());
        }
    }
    catch(const ::RoboCompUltrasound::HardwareFailedException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    catch(const ::RoboCompUltrasound::UnknownSensorException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __RoboCompUltrasound__Ultrasound_all[] =
{
    "getAllSensorDistances",
    "getAllSensorParams",
    "getBusParams",
    "getSensorDistance",
    "getSensorParams",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
RoboCompUltrasound::Ultrasound::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__RoboCompUltrasound__Ultrasound_all, __RoboCompUltrasound__Ultrasound_all + 9, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __RoboCompUltrasound__Ultrasound_all)
    {
        case 0:
        {
            return ___getAllSensorDistances(in, current);
        }
        case 1:
        {
            return ___getAllSensorParams(in, current);
        }
        case 2:
        {
            return ___getBusParams(in, current);
        }
        case 3:
        {
            return ___getSensorDistance(in, current);
        }
        case 4:
        {
            return ___getSensorParams(in, current);
        }
        case 5:
        {
            return ___ice_id(in, current);
        }
        case 6:
        {
            return ___ice_ids(in, current);
        }
        case 7:
        {
            return ___ice_isA(in, current);
        }
        case 8:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
RoboCompUltrasound::Ultrasound::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
RoboCompUltrasound::Ultrasound::__read(::IceInternal::BasicStream* __is, bool __rid)
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
RoboCompUltrasound::operator==(const ::RoboCompUltrasound::Ultrasound& l, const ::RoboCompUltrasound::Ultrasound& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
RoboCompUltrasound::operator<(const ::RoboCompUltrasound::Ultrasound& l, const ::RoboCompUltrasound::Ultrasound& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
RoboCompUltrasound::__patch__UltrasoundPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::RoboCompUltrasound::UltrasoundPtr* p = static_cast< ::RoboCompUltrasound::UltrasoundPtr*>(__addr);
    assert(p);
    *p = ::RoboCompUltrasound::UltrasoundPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::RoboCompUltrasound::Ultrasound::ice_staticId(), v->ice_id());
    }
}

::RoboCompUltrasound::BusParams
IceProxy::RoboCompUltrasound::Ultrasound::getBusParams(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__RoboCompUltrasound__Ultrasound__getBusParams_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __RoboCompUltrasound__Ultrasound__getBusParams_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::RoboCompUltrasound::BusParams __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __ret.__read(__is);
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

::RoboCompUltrasound::SensorParams
IceProxy::RoboCompUltrasound::Ultrasound::getSensorParams(const ::std::string& sensor, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__RoboCompUltrasound__Ultrasound__getSensorParams_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __RoboCompUltrasound__Ultrasound__getSensorParams_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(sensor);
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
                ::RoboCompUltrasound::SensorParams __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __ret.__read(__is);
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

::RoboCompUltrasound::SensorParamsList
IceProxy::RoboCompUltrasound::Ultrasound::getAllSensorParams(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__RoboCompUltrasound__Ultrasound__getAllSensorParams_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __RoboCompUltrasound__Ultrasound__getAllSensorParams_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    __outS.is()->throwUnknownUserException();
                }
                ::RoboCompUltrasound::SensorParamsList __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                ::RoboCompUltrasound::__readSensorParamsList(__is, __ret);
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

::std::string
IceProxy::RoboCompUltrasound::Ultrasound::getSensorDistance(const ::std::string& sensor, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__RoboCompUltrasound__Ultrasound__getSensorDistance_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __RoboCompUltrasound__Ultrasound__getSensorDistance_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(sensor);
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
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::RoboCompUltrasound::HardwareFailedException&)
                    {
                        throw;
                    }
                    catch(const ::RoboCompUltrasound::UnknownSensorException&)
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
                ::std::string __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(__ret);
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

::RoboCompUltrasound::SensorsState
IceProxy::RoboCompUltrasound::Ultrasound::getAllSensorDistances(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__RoboCompUltrasound__Ultrasound__getAllSensorDistances_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __RoboCompUltrasound__Ultrasound__getAllSensorDistances_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::RoboCompUltrasound::HardwareFailedException&)
                    {
                        throw;
                    }
                    catch(const ::RoboCompUltrasound::UnknownSensorException&)
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
                ::RoboCompUltrasound::SensorsState __ret;
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(__ret);
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
IceProxy::RoboCompUltrasound::Ultrasound::ice_staticId()
{
    return __RoboCompUltrasound__Ultrasound_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::RoboCompUltrasound::Ultrasound::__newInstance() const
{
    return new Ultrasound;
}
