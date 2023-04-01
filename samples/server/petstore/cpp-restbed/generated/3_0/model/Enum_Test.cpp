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



#include "Enum_Test.h"

#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <stdexcept>
#include <regex>
#include <algorithm>
#include <boost/lexical_cast.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include "helpers.h"

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

Enum_Test::Enum_Test(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}


std::string Enum_Test::toJsonString(bool prettyJson /* = false */) const
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
    // workaround inspired by: https://stackoverflow.com/a/56395440
    std::regex reg("\\\"([0-9]+\\.{0,1}[0-9]*)\\\"");
    std::string result = std::regex_replace(ss.str(), reg, "$1");
    return result;
}

void Enum_Test::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree Enum_Test::toPropertyTree() const
{
	ptree pt;
	ptree tmp_node;
	pt.put("enum_string", m_Enum_string);
	pt.put("enum_string_required", m_Enum_string_required);
	pt.put("enum_integer", m_Enum_integer);
	pt.put("enum_number", m_Enum_number);
	return pt;
}

void Enum_Test::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	setEnumString(pt.get("enum_string", ""));
	setEnumStringRequired(pt.get("enum_string_required", ""));
	setEnumInteger(pt.get("enum_integer", 0));
	setEnumNumber(pt.get("enum_number", 0.0));
}

std::string Enum_Test::getEnumString() const
{
    return m_Enum_string;
}

void Enum_Test::setEnumString(std::string value)
{
    static const std::array<std::string, 3> allowedValues = {
        "UPPER", "lower", ""
    };

    if (std::find(allowedValues.begin(), allowedValues.end(), value) != allowedValues.end()) {
		m_Enum_string = value;
	} else {
		throw std::runtime_error("Value " + boost::lexical_cast<std::string>(value) + " not allowed");
	}
}


std::string Enum_Test::getEnumStringRequired() const
{
    return m_Enum_string_required;
}

void Enum_Test::setEnumStringRequired(std::string value)
{
    static const std::array<std::string, 3> allowedValues = {
        "UPPER", "lower", ""
    };

    if (std::find(allowedValues.begin(), allowedValues.end(), value) != allowedValues.end()) {
		m_Enum_string_required = value;
	} else {
		throw std::runtime_error("Value " + boost::lexical_cast<std::string>(value) + " not allowed");
	}
}


int32_t Enum_Test::getEnumInteger() const
{
    return m_Enum_integer;
}

void Enum_Test::setEnumInteger(int32_t value)
{
    static const std::array<int32_t, 2> allowedValues = {
        1, -1
    };

    if (std::find(allowedValues.begin(), allowedValues.end(), value) != allowedValues.end()) {
		m_Enum_integer = value;
	} else {
		throw std::runtime_error("Value " + boost::lexical_cast<std::string>(value) + " not allowed");
	}
}


double Enum_Test::getEnumNumber() const
{
    return m_Enum_number;
}

void Enum_Test::setEnumNumber(double value)
{
    static const std::array<double, 2> allowedValues = {
        1.1, -1.2
    };

    if (std::find(allowedValues.begin(), allowedValues.end(), value) != allowedValues.end()) {
		m_Enum_number = value;
	} else {
		throw std::runtime_error("Value " + boost::lexical_cast<std::string>(value) + " not allowed");
	}
}


OuterEnum Enum_Test::getOuterEnum() const
{
    return m_OuterEnum;
}

void Enum_Test::setOuterEnum(OuterEnum value)
{
    m_OuterEnum = value;
}


OuterEnumInteger Enum_Test::getOuterEnumInteger() const
{
    return m_OuterEnumInteger;
}

void Enum_Test::setOuterEnumInteger(OuterEnumInteger value)
{
    m_OuterEnumInteger = value;
}


OuterEnumDefaultValue Enum_Test::getOuterEnumDefaultValue() const
{
    return m_OuterEnumDefaultValue;
}

void Enum_Test::setOuterEnumDefaultValue(OuterEnumDefaultValue value)
{
    m_OuterEnumDefaultValue = value;
}


OuterEnumIntegerDefaultValue Enum_Test::getOuterEnumIntegerDefaultValue() const
{
    return m_OuterEnumIntegerDefaultValue;
}

void Enum_Test::setOuterEnumIntegerDefaultValue(OuterEnumIntegerDefaultValue value)
{
    m_OuterEnumIntegerDefaultValue = value;
}



std::vector<Enum_Test> createEnum_TestVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<Enum_Test>();
    for (const auto& child: pt) {
        vec.emplace_back(Enum_Test(child.second));
    }

    return vec;
}

}
}
}
}

