@interface EMRemoteContentURLSession : NSObject
@property (nonatomic) NSString sourceBundleIdentifier;
@property (nonatomic) EMRemoteContentURLCache cache;
@property (nonatomic) NSOperationQueue delegateQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sourceBundleIdentifier;
- (void)URLSession:dataTask:didReceiveData:;
- (void)URLSession:task:didCompleteWithError:;
- (void)URLSession:task:didFinishCollectingMetrics:;
- (void)URLSession:didBecomeInvalidWithError:;
- (id)delegateQueue;
- (id)initWithCache:;
- (void).cxx_destruct;
- (id)cache;
- (void)unregisterObserver:;
- (void)registerObserver:;
- (id)initWithCache:sourceBundleIdentifier:;
- (id)dataTaskWithRequest:isSynthetic:completionHandler:;
- (id)dataTaskWithRequest:isSynthetic:allowProxying:failOpen:completionHandler:;
- (void)abortTask:;
- (void)_createURLSession;
- (void)invalidateAndCancel:;
+ (id)genericHTTPHeaderFields;
@end
