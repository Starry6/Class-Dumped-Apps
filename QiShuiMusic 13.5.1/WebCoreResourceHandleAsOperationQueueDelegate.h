@interface WebCoreResourceHandleAsOperationQueueDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void).cxx_destruct;
- (void)connection:didReceiveResponse:;
- (void)connection:didSendBodyData:totalBytesWritten:totalBytesExpectedToWrite:;
- (void)connectionDidFinishLoading:;
- (id).cxx_construct;
- (void)connection:didFailWithError:;
- (void)connection:didReceiveAuthenticationChallenge:;
- (BOOL)connection:canAuthenticateAgainstProtectionSpace:;
- (id)connection:willSendRequest:redirectResponse:;
- (void)connection:didReceiveData:lengthReceived:;
- (id)connection:willCacheResponse:;
- (void)callFunctionOnMainThread:;
- (id)initWithHandle:messageQueue:;
- (void)detachHandle;
@end
