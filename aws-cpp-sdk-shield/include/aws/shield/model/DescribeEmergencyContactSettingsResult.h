﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/shield/model/EmergencyContact.h>
#include <utility>

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
namespace Shield
{
namespace Model
{
  class AWS_SHIELD_API DescribeEmergencyContactSettingsResult
  {
  public:
    DescribeEmergencyContactSettingsResult();
    DescribeEmergencyContactSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEmergencyContactSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of email addresses and phone numbers that the DDoS Response Team (DRT)
     * can use to contact you if you have proactive engagement enabled, for escalations
     * to the DRT and to initiate proactive customer support.</p>
     */
    inline const Aws::Vector<EmergencyContact>& GetEmergencyContactList() const{ return m_emergencyContactList; }

    /**
     * <p>A list of email addresses and phone numbers that the DDoS Response Team (DRT)
     * can use to contact you if you have proactive engagement enabled, for escalations
     * to the DRT and to initiate proactive customer support.</p>
     */
    inline void SetEmergencyContactList(const Aws::Vector<EmergencyContact>& value) { m_emergencyContactList = value; }

    /**
     * <p>A list of email addresses and phone numbers that the DDoS Response Team (DRT)
     * can use to contact you if you have proactive engagement enabled, for escalations
     * to the DRT and to initiate proactive customer support.</p>
     */
    inline void SetEmergencyContactList(Aws::Vector<EmergencyContact>&& value) { m_emergencyContactList = std::move(value); }

    /**
     * <p>A list of email addresses and phone numbers that the DDoS Response Team (DRT)
     * can use to contact you if you have proactive engagement enabled, for escalations
     * to the DRT and to initiate proactive customer support.</p>
     */
    inline DescribeEmergencyContactSettingsResult& WithEmergencyContactList(const Aws::Vector<EmergencyContact>& value) { SetEmergencyContactList(value); return *this;}

    /**
     * <p>A list of email addresses and phone numbers that the DDoS Response Team (DRT)
     * can use to contact you if you have proactive engagement enabled, for escalations
     * to the DRT and to initiate proactive customer support.</p>
     */
    inline DescribeEmergencyContactSettingsResult& WithEmergencyContactList(Aws::Vector<EmergencyContact>&& value) { SetEmergencyContactList(std::move(value)); return *this;}

    /**
     * <p>A list of email addresses and phone numbers that the DDoS Response Team (DRT)
     * can use to contact you if you have proactive engagement enabled, for escalations
     * to the DRT and to initiate proactive customer support.</p>
     */
    inline DescribeEmergencyContactSettingsResult& AddEmergencyContactList(const EmergencyContact& value) { m_emergencyContactList.push_back(value); return *this; }

    /**
     * <p>A list of email addresses and phone numbers that the DDoS Response Team (DRT)
     * can use to contact you if you have proactive engagement enabled, for escalations
     * to the DRT and to initiate proactive customer support.</p>
     */
    inline DescribeEmergencyContactSettingsResult& AddEmergencyContactList(EmergencyContact&& value) { m_emergencyContactList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EmergencyContact> m_emergencyContactList;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
