@interface ICDelegationProviderServiceProtocolHandler : NSObject
- (void).cxx_destruct;
- (id)initWithUserIdentityStore:requestContext:;
- (void)getFinishDelegationRequestsWithStartDelegationResponse:streamContexts:replyHandler:;
- (void)getStartDelegationRequestForAccountIDs:withCompletionHandler:;
- (void)_getPlayInfoRequestWithStartDelegationResponse:streamContexts:completionHandler:;
- (unsigned long long)_nextSessionUniqueID;
@end
