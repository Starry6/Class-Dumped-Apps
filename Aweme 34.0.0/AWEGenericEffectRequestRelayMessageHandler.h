@interface AWEGenericEffectRequestRelayMessageHandler : AWEGenericEffectMessageBaseHandler
- (id)bizIdentifier;
- (BOOL)canHandle:arg3Info:;
- (void)handleMessage:arg3Info:isGlobal:;
- (void)p_handleRequestWithJson:taskId:isGlobal:;
- (BOOL)p_isValidUrl:;
- (void)p_requestWithMethod:urlString:params:completion:;
@end
