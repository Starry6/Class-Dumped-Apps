@interface IESIMNetworkURLProtocol : NSURLProtocol
@property (nonatomic) NSURLSessionDataTask task;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)URLSession:dataTask:didReceiveData:;
- (void)stopLoading;
- (void)startLoading;
- (void)URLSession:task:didCompleteWithError:;
- (void)URLSession:dataTask:didReceiveResponse:completionHandler:;
- (id)task;
- (void)URLSession:dataTask:willCacheResponse:completionHandler:;
- (void)setTask:;
- (void).cxx_destruct;
- (id)initWithRequest:cachedResponse:client:;
+ (id)canonicalRequestForRequest:;
+ (void)start;
+ (BOOL)canInitWithRequest:;
+ (void)stop;
@end
