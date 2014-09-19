package com.wordnik.swagger.codegen;

public class CodegenParameter {
  public Boolean hasMore = null, isContainer = null, secondaryParam = null;
  public String baseName, paramName, dataType, collectionFormat, description;
  public Boolean isQueryParam, isPathParam, isHeaderParam, isCookieParam, isBodyParam;
}