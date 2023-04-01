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
 * _special_model_name_.h
 *
 * 
 */

#ifndef _special_model_name__H_
#define _special_model_name__H_



#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>
#include "helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  _special_model_name_ 
{
public:
    _special_model_name_() = default;
    explicit _special_model_name_(boost::property_tree::ptree const& pt);
    virtual ~_special_model_name_() = default;

    _special_model_name_(const _special_model_name_& other) = default; // copy constructor
    _special_model_name_(_special_model_name_&& other) noexcept = default; // move constructor

    _special_model_name_& operator=(const _special_model_name_& other) = default; // copy assignment
    _special_model_name_& operator=(_special_model_name_&& other) noexcept = default; // move assignment

    std::string toJsonString(bool prettyJson = false) const;
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree() const;
    void fromPropertyTree(boost::property_tree::ptree const& pt);


    /////////////////////////////////////////////
    /// _special_model_name_ members

    /// <summary>
    /// 
    /// </summary>
    int64_t getSpecialPropertyName() const;
    void setSpecialPropertyName(int64_t value);

protected:
    int64_t m_special_property_name = 0L;
};

std::vector<_special_model_name_> create_special_model_name_VectorFromJsonString(const std::string& json);

template<>
inline boost::property_tree::ptree toPt<_special_model_name_>(const _special_model_name_& val) {
    return val.toPropertyTree();
}

template<>
inline _special_model_name_ fromPt<_special_model_name_>(const boost::property_tree::ptree& pt) {
    _special_model_name_ ret;
    ret.fromPropertyTree(pt);
    return ret;
}

}
}
}
}

#endif /* _special_model_name__H_ */
