﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/machinelearning/model/TaggableResourceType.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MachineLearning
{
namespace Model
{
  /**
   * <p>Amazon ML returns the following elements. </p>
   */
  class AWS_MACHINELEARNING_API AddTagsResult
  {
  public:
    AddTagsResult();
    AddTagsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AddTagsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The ID of the ML object that was tagged.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the ML object that was tagged.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceId = value; }

    /**
     * <p>The ID of the ML object that was tagged.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceId = value; }

    /**
     * <p>The ID of the ML object that was tagged.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceId.assign(value); }

    /**
     * <p>The ID of the ML object that was tagged.</p>
     */
    inline AddTagsResult& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the ML object that was tagged.</p>
     */
    inline AddTagsResult& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the ML object that was tagged.</p>
     */
    inline AddTagsResult& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>The type of the ML object that was tagged.</p>
     */
    inline const TaggableResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the ML object that was tagged.</p>
     */
    inline void SetResourceType(const TaggableResourceType& value) { m_resourceType = value; }

    /**
     * <p>The type of the ML object that was tagged.</p>
     */
    inline void SetResourceType(TaggableResourceType&& value) { m_resourceType = value; }

    /**
     * <p>The type of the ML object that was tagged.</p>
     */
    inline AddTagsResult& WithResourceType(const TaggableResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the ML object that was tagged.</p>
     */
    inline AddTagsResult& WithResourceType(TaggableResourceType&& value) { SetResourceType(value); return *this;}

  private:
    Aws::String m_resourceId;
    TaggableResourceType m_resourceType;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
