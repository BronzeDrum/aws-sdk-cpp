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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   */
  class AWS_ROUTE53_API CreateReusableDelegationSetRequest : public Route53Request
  {
  public:
    CreateReusableDelegationSetRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateReusableDelegationSet</code> requests to be retried without the risk
     * of executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a reusable delegation
     * set. <code>CallerReference</code> can be any unique string; you might choose to
     * use a string that identifies your project, such as
     * <code>DNSMigration_01</code>.</p> <p>Valid characters are any Unicode code
     * points that are legal in an XML 1.0 document. The UTF-8 encoding of the value
     * must be less than 128 bytes.</p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateReusableDelegationSet</code> requests to be retried without the risk
     * of executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a reusable delegation
     * set. <code>CallerReference</code> can be any unique string; you might choose to
     * use a string that identifies your project, such as
     * <code>DNSMigration_01</code>.</p> <p>Valid characters are any Unicode code
     * points that are legal in an XML 1.0 document. The UTF-8 encoding of the value
     * must be less than 128 bytes.</p>
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateReusableDelegationSet</code> requests to be retried without the risk
     * of executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a reusable delegation
     * set. <code>CallerReference</code> can be any unique string; you might choose to
     * use a string that identifies your project, such as
     * <code>DNSMigration_01</code>.</p> <p>Valid characters are any Unicode code
     * points that are legal in an XML 1.0 document. The UTF-8 encoding of the value
     * must be less than 128 bytes.</p>
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateReusableDelegationSet</code> requests to be retried without the risk
     * of executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a reusable delegation
     * set. <code>CallerReference</code> can be any unique string; you might choose to
     * use a string that identifies your project, such as
     * <code>DNSMigration_01</code>.</p> <p>Valid characters are any Unicode code
     * points that are legal in an XML 1.0 document. The UTF-8 encoding of the value
     * must be less than 128 bytes.</p>
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateReusableDelegationSet</code> requests to be retried without the risk
     * of executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a reusable delegation
     * set. <code>CallerReference</code> can be any unique string; you might choose to
     * use a string that identifies your project, such as
     * <code>DNSMigration_01</code>.</p> <p>Valid characters are any Unicode code
     * points that are legal in an XML 1.0 document. The UTF-8 encoding of the value
     * must be less than 128 bytes.</p>
     */
    inline CreateReusableDelegationSetRequest& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateReusableDelegationSet</code> requests to be retried without the risk
     * of executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a reusable delegation
     * set. <code>CallerReference</code> can be any unique string; you might choose to
     * use a string that identifies your project, such as
     * <code>DNSMigration_01</code>.</p> <p>Valid characters are any Unicode code
     * points that are legal in an XML 1.0 document. The UTF-8 encoding of the value
     * must be less than 128 bytes.</p>
     */
    inline CreateReusableDelegationSetRequest& WithCallerReference(Aws::String&& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateReusableDelegationSet</code> requests to be retried without the risk
     * of executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a reusable delegation
     * set. <code>CallerReference</code> can be any unique string; you might choose to
     * use a string that identifies your project, such as
     * <code>DNSMigration_01</code>.</p> <p>Valid characters are any Unicode code
     * points that are legal in an XML 1.0 document. The UTF-8 encoding of the value
     * must be less than 128 bytes.</p>
     */
    inline CreateReusableDelegationSetRequest& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}

    /**
     * <p>The ID of the hosted zone whose delegation set you want to mark as reusable.
     * It is an optional parameter.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>The ID of the hosted zone whose delegation set you want to mark as reusable.
     * It is an optional parameter.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The ID of the hosted zone whose delegation set you want to mark as reusable.
     * It is an optional parameter.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The ID of the hosted zone whose delegation set you want to mark as reusable.
     * It is an optional parameter.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>The ID of the hosted zone whose delegation set you want to mark as reusable.
     * It is an optional parameter.</p>
     */
    inline CreateReusableDelegationSetRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the hosted zone whose delegation set you want to mark as reusable.
     * It is an optional parameter.</p>
     */
    inline CreateReusableDelegationSetRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the hosted zone whose delegation set you want to mark as reusable.
     * It is an optional parameter.</p>
     */
    inline CreateReusableDelegationSetRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}

  private:
    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet;
    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
