@interface AWEVideoDownloadNetworkUtility_URLSession : NSObject
@property (nonatomic) NSURLSession session;
@property (nonatomic) NSURLSessionDataTask runningTask;
@property (nonatomic) AWEVideoCacheRequestTask cacheRequestTask;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)startTaskWithRequest:range:priority:;
- (void)cancelNetworkRequest;
- (void)destroyNetworkRequest;
- (void)setCacheRequestTask:;
- (id)cacheRequestTask;
- (void)setSession:;
- (void)URLSession:dataTask:didReceiveData:;
- (void)URLSession:dataTask:didReceiveResponse:completionHandler:;
- (id)sessionQueue;
- (id)session;
- (void).cxx_destruct;
- (void)URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:;
- (void)URLSession:task:didCompleteWithError:;
- (void)setRunningTask:;
- (id)runningTask;
+ (id)instanceWithTask:;
@end
