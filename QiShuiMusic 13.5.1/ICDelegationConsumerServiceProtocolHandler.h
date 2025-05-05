@interface ICDelegationConsumerServiceProtocolHandler : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)getResponseForFinishDelegationRequest:withSessionIDToRequestInfoMap:completionHandler:;
- (void)getResponseForStartDelegationRequest:requestContext:withCompletionHandler:;
@end
