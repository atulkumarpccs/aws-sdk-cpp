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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/ChallengeNameType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The request to respond to the authentication challenge, as an
   * administrator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminRespondToAuthChallengeRequest">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API AdminRespondToAuthChallengeRequest : public CognitoIdentityProviderRequest
  {
  public:
    AdminRespondToAuthChallengeRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Cognito user pool.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The app client ID.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The app client ID.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The app client ID.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The app client ID.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The app client ID.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The app client ID.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The app client ID.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The challenge name. For more information, see <a
     * href="API_AdminInitiateAuth.html">AdminInitiateAuth</a>.</p>
     */
    inline const ChallengeNameType& GetChallengeName() const{ return m_challengeName; }

    /**
     * <p>The challenge name. For more information, see <a
     * href="API_AdminInitiateAuth.html">AdminInitiateAuth</a>.</p>
     */
    inline void SetChallengeName(const ChallengeNameType& value) { m_challengeNameHasBeenSet = true; m_challengeName = value; }

    /**
     * <p>The challenge name. For more information, see <a
     * href="API_AdminInitiateAuth.html">AdminInitiateAuth</a>.</p>
     */
    inline void SetChallengeName(ChallengeNameType&& value) { m_challengeNameHasBeenSet = true; m_challengeName = std::move(value); }

    /**
     * <p>The challenge name. For more information, see <a
     * href="API_AdminInitiateAuth.html">AdminInitiateAuth</a>.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithChallengeName(const ChallengeNameType& value) { SetChallengeName(value); return *this;}

    /**
     * <p>The challenge name. For more information, see <a
     * href="API_AdminInitiateAuth.html">AdminInitiateAuth</a>.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithChallengeName(ChallengeNameType&& value) { SetChallengeName(std::move(value)); return *this;}


    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>:
     * <code>PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> </ul> <p>The value of the
     * <code>USERNAME</code> attribute must be the user's actual username, not an alias
     * (such as email address or phone number). To make this easier, the
     * <code>AdminInitiateAuth</code> response includes the actual username value in
     * the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute, even if you specified an
     * alias in your call to <code>AdminInitiateAuth</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetChallengeResponses() const{ return m_challengeResponses; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>:
     * <code>PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> </ul> <p>The value of the
     * <code>USERNAME</code> attribute must be the user's actual username, not an alias
     * (such as email address or phone number). To make this easier, the
     * <code>AdminInitiateAuth</code> response includes the actual username value in
     * the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute, even if you specified an
     * alias in your call to <code>AdminInitiateAuth</code>.</p>
     */
    inline void SetChallengeResponses(const Aws::Map<Aws::String, Aws::String>& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses = value; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>:
     * <code>PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> </ul> <p>The value of the
     * <code>USERNAME</code> attribute must be the user's actual username, not an alias
     * (such as email address or phone number). To make this easier, the
     * <code>AdminInitiateAuth</code> response includes the actual username value in
     * the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute, even if you specified an
     * alias in your call to <code>AdminInitiateAuth</code>.</p>
     */
    inline void SetChallengeResponses(Aws::Map<Aws::String, Aws::String>&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses = std::move(value); }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>:
     * <code>PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> </ul> <p>The value of the
     * <code>USERNAME</code> attribute must be the user's actual username, not an alias
     * (such as email address or phone number). To make this easier, the
     * <code>AdminInitiateAuth</code> response includes the actual username value in
     * the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute, even if you specified an
     * alias in your call to <code>AdminInitiateAuth</code>.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithChallengeResponses(const Aws::Map<Aws::String, Aws::String>& value) { SetChallengeResponses(value); return *this;}

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>:
     * <code>PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> </ul> <p>The value of the
     * <code>USERNAME</code> attribute must be the user's actual username, not an alias
     * (such as email address or phone number). To make this easier, the
     * <code>AdminInitiateAuth</code> response includes the actual username value in
     * the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute, even if you specified an
     * alias in your call to <code>AdminInitiateAuth</code>.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithChallengeResponses(Aws::Map<Aws::String, Aws::String>&& value) { SetChallengeResponses(std::move(value)); return *this;}

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>:
     * <code>PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> </ul> <p>The value of the
     * <code>USERNAME</code> attribute must be the user's actual username, not an alias
     * (such as email address or phone number). To make this easier, the
     * <code>AdminInitiateAuth</code> response includes the actual username value in
     * the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute, even if you specified an
     * alias in your call to <code>AdminInitiateAuth</code>.</p>
     */
    inline AdminRespondToAuthChallengeRequest& AddChallengeResponses(const Aws::String& key, const Aws::String& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(key, value); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>:
     * <code>PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> </ul> <p>The value of the
     * <code>USERNAME</code> attribute must be the user's actual username, not an alias
     * (such as email address or phone number). To make this easier, the
     * <code>AdminInitiateAuth</code> response includes the actual username value in
     * the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute, even if you specified an
     * alias in your call to <code>AdminInitiateAuth</code>.</p>
     */
    inline AdminRespondToAuthChallengeRequest& AddChallengeResponses(Aws::String&& key, const Aws::String& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(std::move(key), value); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>:
     * <code>PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> </ul> <p>The value of the
     * <code>USERNAME</code> attribute must be the user's actual username, not an alias
     * (such as email address or phone number). To make this easier, the
     * <code>AdminInitiateAuth</code> response includes the actual username value in
     * the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute, even if you specified an
     * alias in your call to <code>AdminInitiateAuth</code>.</p>
     */
    inline AdminRespondToAuthChallengeRequest& AddChallengeResponses(const Aws::String& key, Aws::String&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>:
     * <code>PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> </ul> <p>The value of the
     * <code>USERNAME</code> attribute must be the user's actual username, not an alias
     * (such as email address or phone number). To make this easier, the
     * <code>AdminInitiateAuth</code> response includes the actual username value in
     * the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute, even if you specified an
     * alias in your call to <code>AdminInitiateAuth</code>.</p>
     */
    inline AdminRespondToAuthChallengeRequest& AddChallengeResponses(Aws::String&& key, Aws::String&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>:
     * <code>PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> </ul> <p>The value of the
     * <code>USERNAME</code> attribute must be the user's actual username, not an alias
     * (such as email address or phone number). To make this easier, the
     * <code>AdminInitiateAuth</code> response includes the actual username value in
     * the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute, even if you specified an
     * alias in your call to <code>AdminInitiateAuth</code>.</p>
     */
    inline AdminRespondToAuthChallengeRequest& AddChallengeResponses(const char* key, Aws::String&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>:
     * <code>PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> </ul> <p>The value of the
     * <code>USERNAME</code> attribute must be the user's actual username, not an alias
     * (such as email address or phone number). To make this easier, the
     * <code>AdminInitiateAuth</code> response includes the actual username value in
     * the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute, even if you specified an
     * alias in your call to <code>AdminInitiateAuth</code>.</p>
     */
    inline AdminRespondToAuthChallengeRequest& AddChallengeResponses(Aws::String&& key, const char* value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(std::move(key), value); return *this; }

    /**
     * <p>The challenge responses. These are inputs corresponding to the value of
     * <code>ChallengeName</code>, for example:</p> <ul> <li> <p> <code>SMS_MFA</code>:
     * <code>SMS_MFA_CODE</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if
     * app client is configured with client secret).</p> </li> <li> <p>
     * <code>PASSWORD_VERIFIER</code>: <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, <code>TIMESTAMP</code>,
     * <code>USERNAME</code>, <code>SECRET_HASH</code> (if app client is configured
     * with client secret).</p> </li> <li> <p> <code>ADMIN_NO_SRP_AUTH</code>:
     * <code>PASSWORD</code>, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: <code>NEW_PASSWORD</code>, any other
     * required attributes, <code>USERNAME</code>, <code>SECRET_HASH</code> (if app
     * client is configured with client secret). </p> </li> </ul> <p>The value of the
     * <code>USERNAME</code> attribute must be the user's actual username, not an alias
     * (such as email address or phone number). To make this easier, the
     * <code>AdminInitiateAuth</code> response includes the actual username value in
     * the <code>USERNAMEUSER_ID_FOR_SRP</code> attribute, even if you specified an
     * alias in your call to <code>AdminInitiateAuth</code>.</p>
     */
    inline AdminRespondToAuthChallengeRequest& AddChallengeResponses(const char* key, const char* value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses.emplace(key, value); return *this; }


    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If <code>InitiateAuth</code> or <code>RespondToAuthChallenge</code>
     * API call determines that the caller needs to go through another challenge, they
     * return a session with other challenge parameters. This session should be passed
     * as it is to the next <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline const Aws::String& GetSession() const{ return m_session; }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If <code>InitiateAuth</code> or <code>RespondToAuthChallenge</code>
     * API call determines that the caller needs to go through another challenge, they
     * return a session with other challenge parameters. This session should be passed
     * as it is to the next <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline void SetSession(const Aws::String& value) { m_sessionHasBeenSet = true; m_session = value; }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If <code>InitiateAuth</code> or <code>RespondToAuthChallenge</code>
     * API call determines that the caller needs to go through another challenge, they
     * return a session with other challenge parameters. This session should be passed
     * as it is to the next <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline void SetSession(Aws::String&& value) { m_sessionHasBeenSet = true; m_session = std::move(value); }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If <code>InitiateAuth</code> or <code>RespondToAuthChallenge</code>
     * API call determines that the caller needs to go through another challenge, they
     * return a session with other challenge parameters. This session should be passed
     * as it is to the next <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline void SetSession(const char* value) { m_sessionHasBeenSet = true; m_session.assign(value); }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If <code>InitiateAuth</code> or <code>RespondToAuthChallenge</code>
     * API call determines that the caller needs to go through another challenge, they
     * return a session with other challenge parameters. This session should be passed
     * as it is to the next <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithSession(const Aws::String& value) { SetSession(value); return *this;}

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If <code>InitiateAuth</code> or <code>RespondToAuthChallenge</code>
     * API call determines that the caller needs to go through another challenge, they
     * return a session with other challenge parameters. This session should be passed
     * as it is to the next <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithSession(Aws::String&& value) { SetSession(std::move(value)); return *this;}

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If <code>InitiateAuth</code> or <code>RespondToAuthChallenge</code>
     * API call determines that the caller needs to go through another challenge, they
     * return a session with other challenge parameters. This session should be passed
     * as it is to the next <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline AdminRespondToAuthChallengeRequest& WithSession(const char* value) { SetSession(value); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;

    ChallengeNameType m_challengeName;
    bool m_challengeNameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_challengeResponses;
    bool m_challengeResponsesHasBeenSet;

    Aws::String m_session;
    bool m_sessionHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
