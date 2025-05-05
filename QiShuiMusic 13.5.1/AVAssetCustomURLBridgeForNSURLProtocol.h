@interface AVAssetCustomURLBridgeForNSURLProtocol : NSObject
- (void)_cancelRequestID:;
- (id)initWithFigAsset:;
- (void)dealloc;
- (void)_cancelAndFinishRequest:error:;
- (void)_didFinish:error:;
- (BOOL)_willSendRequest:request:redirectionResponse:;
- (int)_handleRequest:requestID:;
- (void)_didReceiveResponse:response:;
- (void)_didReceiveData:data:;
- (void)_cancelPendingRequests;
@end
