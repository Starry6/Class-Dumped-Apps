@interface AVAssetCustomURLBridgeForNSURLSession : NSObject
@property (nonatomic) NSURLSession session;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)URLSession:dataTask:didReceiveData:;
- (void)setSession:;
- (id)init;
- (int)_cancelRequestID:;
- (id)initWithFigAsset:;
- (void)dealloc;
- (void)URLSession:task:didCompleteWithError:;
- (int)_handleRequest:requestID:canHandleRequestOut:;
- (void)URLSession:task:didFinishCollectingMetrics:;
- (id)_lookupRequestForDataTask:;
- (void)URLSession:dataTask:didReceiveResponse:completionHandler:;
- (void)URLSession:dataTask:willCacheResponse:completionHandler:;
- (id)session;
- (void)_unregisterRequestForDataTask:;
- (void)_registerRequest:id:forDataTask:;
@end
