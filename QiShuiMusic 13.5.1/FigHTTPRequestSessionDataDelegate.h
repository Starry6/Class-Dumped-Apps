@interface FigHTTPRequestSessionDataDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)URLSession:dataTask:didReceiveData:;
- (void)URLSession:task:didReceiveChallenge:completionHandler:;
- (id)init;
- (id)adoptVoucherFromRetainProxy:;
- (void)URLSession:didReceiveChallenge:completionHandler:;
- (void)dealloc;
- (void)URLSession:task:didCompleteWithError:;
- (void)URLSession:task:didFinishCollectingMetrics:;
- (void)URLSession:dataTask:didReceiveResponse:completionHandler:;
- (id)_copyAndLockRequestForTask:;
- (void)URLSession:dataTask:willCacheResponse:completionHandler:;
- (id)initWithResponseDispositionOption:;
- (void)_registerFigHTTPRequest:forDataTask:;
- (void)_deregisterFigHTTPRequestForDataTask:;
- (void)restoreVoucher:;
@end
