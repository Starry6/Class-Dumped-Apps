@interface AWEGenericEffectCookieMessageHandler : AWEGenericEffectMessageBaseHandler
- (id)bizIdentifier;
- (void)p_handleCookieWithEffectBody:taskId:isGlobal:;
- (BOOL)canHandle:arg3Info:;
- (void)handleMessage:arg3Info:isGlobal:;
@end
