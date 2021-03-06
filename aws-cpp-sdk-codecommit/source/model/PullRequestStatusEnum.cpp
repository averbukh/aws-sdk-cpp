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

#include <aws/codecommit/model/PullRequestStatusEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCommit
  {
    namespace Model
    {
      namespace PullRequestStatusEnumMapper
      {

        static const int OPEN_HASH = HashingUtils::HashString("OPEN");
        static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");


        PullRequestStatusEnum GetPullRequestStatusEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPEN_HASH)
          {
            return PullRequestStatusEnum::OPEN;
          }
          else if (hashCode == CLOSED_HASH)
          {
            return PullRequestStatusEnum::CLOSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PullRequestStatusEnum>(hashCode);
          }

          return PullRequestStatusEnum::NOT_SET;
        }

        Aws::String GetNameForPullRequestStatusEnum(PullRequestStatusEnum enumValue)
        {
          switch(enumValue)
          {
          case PullRequestStatusEnum::OPEN:
            return "OPEN";
          case PullRequestStatusEnum::CLOSED:
            return "CLOSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PullRequestStatusEnumMapper
    } // namespace Model
  } // namespace CodeCommit
} // namespace Aws
