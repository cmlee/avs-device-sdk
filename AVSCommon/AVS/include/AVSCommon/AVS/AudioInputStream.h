/*
 * AudioInputStream.h
 *
 * Copyright 2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */
#ifndef ALEXA_CLIENT_SDK_AVS_COMMON_AVS_INCLUDE_AVS_COMMON_AVS_AUDIO_INPUT_STREAM_H_
#define ALEXA_CLIENT_SDK_AVS_COMMON_AVS_INCLUDE_AVS_COMMON_AVS_AUDIO_INPUT_STREAM_H_

#include "AVSCommon/Utils/SDS/InProcessSDS.h"

namespace alexaClientSDK {
namespace avsCommon {
namespace avs {

/// The type used store and stream binary data.
using AudioInputStream = utils::sds::InProcessSDS;

} // namespace avs
} // namespace avsCommon
} // namespace alexaClientSDK

#endif //ALEXA_CLIENT_SDK_AVS_COMMON_AVS_INCLUDE_AVS_COMMON_AVS_AUDIO_INPUT_STREAM_H_
