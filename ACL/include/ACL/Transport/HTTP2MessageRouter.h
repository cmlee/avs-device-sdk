/*
 * HTTP2MessageRouter.h
 *
 * Copyright 2016-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#ifndef ALEXACLIENTSDK_ACL_INCLUDE_ACL_TRANSPORT_HTTP2_MESSAGE_ROUTER_H_
#define ALEXACLIENTSDK_ACL_INCLUDE_ACL_TRANSPORT_HTTP2_MESSAGE_ROUTER_H_

#include <memory>
#include <string>

#include <AVSCommon/AVS/Attachment/AttachmentManager.h>

#include "ACL/Transport/MessageRouter.h"
#include "ACL/Transport/MessageConsumerInterface.h"


namespace alexaClientSDK {
namespace acl {

/**
 * An HTTP2MessageRouter routes request messages to the Alexa Voice Service, and response messages to the client. It
 * uses an HTTP2 connection with AVS.
 */
class HTTP2MessageRouter: public MessageRouter {
public:
    /**
     * Constructor.
     *
     * @param authDelegate The AuthDelegate implementation.
     * @param avsEndpoint The URL for the AVS endpoint of this object.
     */
    HTTP2MessageRouter(
            std::shared_ptr<avsCommon::sdkInterfaces::AuthDelegateInterface> authDelegate,
            std::shared_ptr<avsCommon::avs::attachment::AttachmentManager> attachmentManager,
            const std::string& avsEndpoint = "https://avs-alexa-na.amazon.com");

    /**
     * Destructor.
     */
    ~HTTP2MessageRouter();

private:
    std::shared_ptr<TransportInterface> createTransport(
            std::shared_ptr<avsCommon::sdkInterfaces::AuthDelegateInterface> authDelegate,
            std::shared_ptr<avsCommon::avs::attachment::AttachmentManager> attachmentManager,
            const std::string& avsEndpoint,
            MessageConsumerInterface* messageConsumerInterface,
            TransportObserverInterface* transportObserverInterface) override;
};

} // acl
} // alexaClientSDK

#endif // ALEXACLIENTSDK_ACL_INCLUDE_ACL_TRANSPORT_HTTP2_MESSAGE_ROUTER_H_
