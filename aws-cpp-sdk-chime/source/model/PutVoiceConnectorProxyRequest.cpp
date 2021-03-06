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

#include <aws/chime/model/PutVoiceConnectorProxyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutVoiceConnectorProxyRequest::PutVoiceConnectorProxyRequest() : 
    m_voiceConnectorIdHasBeenSet(false),
    m_defaultSessionExpiryMinutes(0),
    m_defaultSessionExpiryMinutesHasBeenSet(false),
    m_phoneNumberPoolCountriesHasBeenSet(false),
    m_fallBackPhoneNumberHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false)
{
}

Aws::String PutVoiceConnectorProxyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_defaultSessionExpiryMinutesHasBeenSet)
  {
   payload.WithInteger("DefaultSessionExpiryMinutes", m_defaultSessionExpiryMinutes);

  }

  if(m_phoneNumberPoolCountriesHasBeenSet)
  {
   Array<JsonValue> phoneNumberPoolCountriesJsonList(m_phoneNumberPoolCountries.size());
   for(unsigned phoneNumberPoolCountriesIndex = 0; phoneNumberPoolCountriesIndex < phoneNumberPoolCountriesJsonList.GetLength(); ++phoneNumberPoolCountriesIndex)
   {
     phoneNumberPoolCountriesJsonList[phoneNumberPoolCountriesIndex].AsString(m_phoneNumberPoolCountries[phoneNumberPoolCountriesIndex]);
   }
   payload.WithArray("PhoneNumberPoolCountries", std::move(phoneNumberPoolCountriesJsonList));

  }

  if(m_fallBackPhoneNumberHasBeenSet)
  {
   payload.WithString("FallBackPhoneNumber", m_fallBackPhoneNumber);

  }

  if(m_disabledHasBeenSet)
  {
   payload.WithBool("Disabled", m_disabled);

  }

  return payload.View().WriteReadable();
}




