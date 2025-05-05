@interface BDDownloadURLSessionManager : BDDownloadManager
@property (nonatomic) NSOperationQueue delegateQueue;
@property (nonatomic) NSURLSession session;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_creatTaskWithURL:identifier:timeout:;
- (void)downloadTask:didReceiveData:finished:;
- (Class)downloadTaskClass;
- (id)taskWithTaskIdentifier:;
- (void)URLSession:dataTask:didReceiveData:;
- (void)setSession:;
- (id)init;
- (void)URLSession:task:didCompleteWithError:;
- (void)URLSession:task:didFinishCollectingMetrics:;
- (void)URLSession:downloadTask:didFinishDownloadingToURL:;
- (void)URLSession:dataTask:didReceiveResponse:completionHandler:;
- (id)delegateQueue;
- (void)URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:;
- (id)session;
- (void).cxx_destruct;
- (void)URLSession:downloadTask:didResumeAtOffset:expectedTotalBytes:;
- (void)setDelegateQueue:;
@end
