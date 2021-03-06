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

#include <aws/macie2/model/GetFindingStatisticsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetFindingStatisticsRequest::GetFindingStatisticsRequest() : 
    m_findingCriteriaHasBeenSet(false),
    m_groupBy(GroupBy::NOT_SET),
    m_groupByHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_sortCriteriaHasBeenSet(false)
{
}

Aws::String GetFindingStatisticsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_findingCriteriaHasBeenSet)
  {
   payload.WithObject("findingCriteria", m_findingCriteria.Jsonize());

  }

  if(m_groupByHasBeenSet)
  {
   payload.WithString("groupBy", GroupByMapper::GetNameForGroupBy(m_groupBy));
  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInteger("size", m_size);

  }

  if(m_sortCriteriaHasBeenSet)
  {
   payload.WithObject("sortCriteria", m_sortCriteria.Jsonize());

  }

  return payload.View().WriteReadable();
}




