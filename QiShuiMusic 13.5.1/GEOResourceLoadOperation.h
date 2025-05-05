@interface GEOResourceLoadOperation : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL requiresWiFi;
@property (nonatomic) BOOL preferDirectNetworking;
@property (nonatomic) NSProgress progress;
- (void)URLSession:dataTask:didReceiveData:;
- (void)URLSession:task:didReceiveChallenge:completionHandler:;
- (void)cancel;
- (void)dealloc;
- (void)URLSession:task:didCompleteWithError:;
- (void)URLSession:task:didFinishCollectingMetrics:;
- (void)URLSession:downloadTask:didFinishDownloadingToURL:;
- (void)URLSession:dataTask:didReceiveResponse:completionHandler:;
- (void)URLSession:dataTask:didBecomeDownloadTask:;
- (void)setRequiresWiFi:;
- (id)progress;
- (void)setPreferDirectNetworking:;
- (void)startWithCompletionHandler:callbackQueue:;
- (void).cxx_destruct;
- (BOOL)requiresWiFi;
- (BOOL)preferDirectNetworking;
- (id)initWithResource:eTag:auditToken:baseURL:alternateURLs:proxyURL:log:;
@end
