/**
 * OpenAPI Petstore
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.5.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * FakeClassnameTags123Api.h
 *
 * 
 */

#ifndef FakeClassnameTags123Api_H_
#define FakeClassnameTags123Api_H_


#include <memory>
#include <utility>
#include <exception>
#include <functional>

#include <corvusoft/restbed/session.hpp>
#include <corvusoft/restbed/resource.hpp>
#include <corvusoft/restbed/request.hpp>
#include <corvusoft/restbed/service.hpp>
#include <corvusoft/restbed/settings.hpp>

#include "Client.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

///
/// Exception to flag problems in the handlers
///
class  FakeClassnameTags123ApiException: public std::exception
{
public:
    FakeClassnameTags123ApiException(int status_code, std::string what);

    int getStatus() const;
    const char* what() const noexcept override;

private:
    int m_status;
    std::string m_what;
};

namespace FakeClassnameTags123ApiResources {
/// <summary>
/// To test class name in snake case
/// </summary>
/// <remarks>
/// To test class name in snake case
/// </remarks>
class  Fake_classname_testResource: public restbed::Resource
{
public:
    Fake_classname_testResource(const std::string& context = "/v2");
    virtual ~Fake_classname_testResource() = default;

    Fake_classname_testResource(
        const Fake_classname_testResource& other) = default; // copy constructor
    Fake_classname_testResource(Fake_classname_testResource&& other) noexcept = default; // move constructor

    Fake_classname_testResource& operator=(const Fake_classname_testResource& other) = default; // copy assignment
    Fake_classname_testResource& operator=(Fake_classname_testResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, Client>(
        Client & client)> handler_PATCH_func =
            [](Client &) -> std::pair<int, Client>
                { throw FakeClassnameTags123ApiException(501, "Not implemented"); };


protected:
    //////////////////////////////////////////////////////////
    // As an alternative to setting the `std::function`s    //
    // override these to implement the server functionality //
    //////////////////////////////////////////////////////////

    virtual std::pair<int, Client> handler_PATCH(
        Client & client);


protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string extractBodyContent(const std::shared_ptr<restbed::Session>& session);
    virtual std::string extractFormParamsFromBody(const std::string& paramName, const std::string& body);

    virtual std::pair<int, std::string> handleFakeClassnameTags123ApiException(const FakeClassnameTags123ApiException& e);
    virtual std::pair<int, std::string> handleStdException(const std::exception& e);
    virtual std::pair<int, std::string> handleUnspecifiedException();

    virtual void setResponseHeader(const std::shared_ptr<restbed::Session>& session,
        const std::string& header);

    virtual void returnResponse(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result, std::multimap<std::string, std::string>& contentType);
    virtual void defaultSessionClose(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result);

private:
    void handler_PATCH_internal(const std::shared_ptr<restbed::Session> session);
};

} /* namespace FakeClassnameTags123ApiResources */

using FakeClassnameTags123ApiFake_classname_testResource [[deprecated]] = FakeClassnameTags123ApiResources::Fake_classname_testResource;

//
// The restbed service to actually implement the REST server
//
class  FakeClassnameTags123Api
{
public:
    explicit FakeClassnameTags123Api(std::shared_ptr<restbed::Service> const& restbedService);
	virtual ~FakeClassnameTags123Api();

    std::shared_ptr<FakeClassnameTags123ApiResources::Fake_classname_testResource> getFake_classname_testResource();

    void setResource(std::shared_ptr<FakeClassnameTags123ApiResources::Fake_classname_testResource> resource);
    [[deprecated("use setResource()")]]
    virtual void setFakeClassnameTags123ApiFake_classname_testResource(std::shared_ptr<FakeClassnameTags123ApiResources::Fake_classname_testResource> spFakeClassnameTags123ApiFake_classname_testResource);

    virtual void publishDefaultResources();

    virtual std::shared_ptr<restbed::Service> service();

protected:
	std::shared_ptr<FakeClassnameTags123ApiResources::Fake_classname_testResource> m_spFake_classname_testResource;

private:
    std::shared_ptr<restbed::Service> m_service;
};


}
}
}
}

#endif /* FakeClassnameTags123Api_H_ */

