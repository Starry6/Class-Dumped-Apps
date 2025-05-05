@interface URLSessionDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)URLSession:dataTask:didReceiveData:;
- (void)URLSession:task:didReceiveChallenge:completionHandler:;
- (void)dealloc;
- (void)URLSession:task:didCompleteWithError:;
- (void)URLSession:dataTask:didReceiveResponse:completionHandler:;
- (void)URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:;
- (void)URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)addCallbackHandler:for:;
- (void)removeCallbackFor:;
- (id)getContext:;
@end
