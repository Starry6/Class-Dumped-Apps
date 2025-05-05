@interface IESLiveMessageInteractionAssetImpl : IESLiveBackendRequestBaseImpl
- (void)backendRequestDidCompleteWithRequest:;
- (void)backendRequestWillRequest;
- (id)bizParams;
- (Class)modelClass;
- (unsigned long long)responseFormat;
+ (BOOL)activeRequestImpl;
+ (void)ieslivekit_register_preloadrequstAction;
+ (id)requstBizPath;
@end
