@interface CUReachabilityMonitor : NSObject
@property (nonatomic) @? completionHandler;
@property (nonatomic) NSURL destinationURL;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) double timeout;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)URLSession:task:didCompleteWithError:;
- (id)dispatchQueue;
- (void)URLSession:downloadTask:didFinishDownloadingToURL:;
- (void)setTimeout:;
- (void)setCompletionHandler:;
- (void)setDispatchQueue:;
- (void)setDestinationURL:;
- (id)destinationURL;
- (void)_complete:;
- (void)_activate;
- (void).cxx_destruct;
- (double)timeout;
- (void)_startDownload;
- (void)invalidate;
- (void)activate;
- (id)completionHandler;
@end
