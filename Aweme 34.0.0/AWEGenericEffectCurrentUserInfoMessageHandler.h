@interface AWEGenericEffectCurrentUserInfoMessageHandler : AWEGenericEffectMessageBaseHandler
- (id)bizIdentifier;
- (BOOL)canHandle:arg3Info:;
- (void)handleMessage:arg3Info:isGlobal:;
- (void)p_handleUserProfileWithTaskId:isGlobal:;
- (void)p_imageCachePathWithUrl:completion:;
@end
