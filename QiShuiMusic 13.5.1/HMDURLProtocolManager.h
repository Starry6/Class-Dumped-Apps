@interface HMDURLProtocolManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> session_queue;
@property (nonatomic) HMDThreadSafeDictionary taskDict;
@property (nonatomic) NSURLSession session;
@property (nonatomic) NSOperationQueue delegateQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)generateDataTaskWithURLRequest:underlyingDelegate:;
- (id)session_queue;
- (void)setSession_queue:;
- (void)setTaskDict:;
- (id)underlyingDelgateForTaskIdentifier:;
- (void)URLSession:dataTask:didReceiveData:;
- (void)setSession:;
- (id)init;
- (void)URLSession:task:didCompleteWithError:;
- (void)URLSession:task:didFinishCollectingMetrics:;
- (void)URLSession:dataTask:didReceiveResponse:completionHandler:;
- (void)URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:;
- (id)delegateQueue;
- (id)session;
- (void).cxx_destruct;
- (void)setDelegateQueue:;
- (id)taskDict;
+ (id)shared;
@end
