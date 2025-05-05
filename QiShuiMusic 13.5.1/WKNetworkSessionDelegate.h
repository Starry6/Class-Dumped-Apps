@interface WKNetworkSessionDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)URLSession:dataTask:didReceiveData:;
- (void)URLSession:task:didReceiveChallenge:completionHandler:;
- (void)URLSession:task:needNewBodyStream:;
- (void)URLSession:task:didCompleteWithError:;
- (void)URLSession:task:didFinishCollectingMetrics:;
- (void)URLSession:didBecomeInvalidWithError:;
- (void)URLSession:downloadTask:didFinishDownloadingToURL:;
- (void)URLSession:dataTask:didReceiveResponse:completionHandler:;
- (id)existingTask:;
- (void)URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:;
- (id)initWithNetworkSession:wrapper:withCredentials:;
- (void)URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:;
- (void)URLSession:dataTask:didBecomeDownloadTask:;
- (void)URLSession:webSocketTask:didOpenWithProtocol:;
- (id)existingWebSocketTask:;
- (void)URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:;
- (void).cxx_destruct;
- (id)sessionFromTask:;
- (void)sessionInvalidated;
- (id).cxx_construct;
- (void)URLSession:webSocketTask:didCloseWithCode:reason:;
- (void)URLSession:task:_schemeUpgraded:completionHandler:;
@end
