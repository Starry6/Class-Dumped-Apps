@interface BDWebURLSessionDemux : NSObject
@property (nonatomic) NSMutableDictionary taskInfoByTaskID;
@property (nonatomic) NSOperationQueue sessionDelegateQueue;
@property (nonatomic) NSURLSessionConfiguration configuration;
@property (nonatomic) NSURLSession session;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sessionDelegateQueue;
- (id)taskInfoByTaskID;
- (void)URLSession:dataTask:didReceiveData:;
- (void)URLSession:task:didReceiveChallenge:completionHandler:;
- (id)init;
- (void)URLSession:task:needNewBodyStream:;
- (void)URLSession:task:didCompleteWithError:;
- (id)taskInfoForTask:;
- (void)URLSession:dataTask:didReceiveResponse:completionHandler:;
- (void)URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:;
- (void)URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:;
- (void)URLSession:dataTask:didBecomeDownloadTask:;
- (void)URLSession:dataTask:willCacheResponse:completionHandler:;
- (id)configuration;
- (id)session;
- (void).cxx_destruct;
- (id)initWithConfiguration:;
- (id)dataTaskWithRequest:delegate:modes:;
@end
