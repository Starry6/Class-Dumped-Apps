@interface AWEVideoDownloadNetworkUtility_URLSession : NSObject
@property (nonatomic) NSURLSession session;
@property (nonatomic) NSURLSessionDataTask runningTask;
@property (nonatomic) AWEVideoCacheRequestTask cacheRequestTask;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cacheRequestTask;
- (void)cancelNetworkRequest;
- (void)destroyNetworkRequest;
- (void)setCacheRequestTask:;
- (BOOL)startTaskWithRequest:range:priority:;
- (void)URLSession:dataTask:didReceiveData:;
- (void)setSession:;
- (void)URLSession:task:didCompleteWithError:;
- (id)sessionQueue;
- (void)URLSession:dataTask:didReceiveResponse:completionHandler:;
- (void)URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:;
- (id)session;
- (void).cxx_destruct;
- (id)runningTask;
- (void)setRunningTask:;
+ (id)instanceWithTask:;
@end
