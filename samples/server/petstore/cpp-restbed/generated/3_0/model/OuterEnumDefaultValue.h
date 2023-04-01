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
 * OuterEnumDefaultValue.h
 *
 * 
 */

#ifndef OuterEnumDefaultValue_H_
#define OuterEnumDefaultValue_H_



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
class  OuterEnumDefaultValue 
{
public:
    OuterEnumDefaultValue() = default;
    explicit OuterEnumDefaultValue(boost::property_tree::ptree const& pt);
    virtual ~OuterEnumDefaultValue() = default;

    OuterEnumDefaultValue(const OuterEnumDefaultValue& other) = default; // copy constructor
    OuterEnumDefaultValue(OuterEnumDefaultValue&& other) noexcept = default; // move constructor

    OuterEnumDefaultValue& operator=(const OuterEnumDefaultValue& other) = default; // copy assignment
    OuterEnumDefaultValue& operator=(OuterEnumDefaultValue&& other) noexcept = default; // move assignment

    std::string toJsonString(bool prettyJson = false) const;
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree() const;
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    std::string toString() const;
    void fromString(const std::string& str);

    /////////////////////////////////////////////
    /// OuterEnumDefaultValue members
    std::string getEnumValue() const;
    void setEnumValue(const std::string& val);

protected:
    std::string m_OuterEnumDefaultValueEnumValue;
};

std::vector<OuterEnumDefaultValue> createOuterEnumDefaultValueVectorFromJsonString(const std::string& json);

template<>
inline boost::property_tree::ptree toPt<OuterEnumDefaultValue>(const OuterEnumDefaultValue& val) {
    return val.toPropertyTree();
}

template<>
inline OuterEnumDefaultValue fromPt<OuterEnumDefaultValue>(const boost::property_tree::ptree& pt) {
    OuterEnumDefaultValue ret;
    ret.fromPropertyTree(pt);
    return ret;
}

}
}
}
}

#endif /* OuterEnumDefaultValue_H_ */
