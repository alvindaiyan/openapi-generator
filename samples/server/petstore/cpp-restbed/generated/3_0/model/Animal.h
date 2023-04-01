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
 * Animal.h
 *
 * 
 */

#ifndef Animal_H_
#define Animal_H_



#include <string>
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
class  Animal 
{
public:
    Animal() = default;
    explicit Animal(boost::property_tree::ptree const& pt);
    virtual ~Animal() = default;

    Animal(const Animal& other) = default; // copy constructor
    Animal(Animal&& other) noexcept = default; // move constructor

    Animal& operator=(const Animal& other) = default; // copy assignment
    Animal& operator=(Animal&& other) noexcept = default; // move assignment

    std::string toJsonString(bool prettyJson = false) const;
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree() const;
    void fromPropertyTree(boost::property_tree::ptree const& pt);


    /////////////////////////////////////////////
    /// Animal members

    /// <summary>
    /// 
    /// </summary>
    std::string getClassName() const;
    void setClassName(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::string getColor() const;
    void setColor(std::string value);

protected:
    std::string m_ClassName = "";
    std::string m_Color = "red";
};

std::vector<Animal> createAnimalVectorFromJsonString(const std::string& json);

template<>
inline boost::property_tree::ptree toPt<Animal>(const Animal& val) {
    return val.toPropertyTree();
}

template<>
inline Animal fromPt<Animal>(const boost::property_tree::ptree& pt) {
    Animal ret;
    ret.fromPropertyTree(pt);
    return ret;
}

}
}
}
}

#endif /* Animal_H_ */
