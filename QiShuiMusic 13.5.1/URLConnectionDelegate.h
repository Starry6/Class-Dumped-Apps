@interface URLConnectionDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)connection:didReceiveData:;
- (void).cxx_destruct;
- (void)connection:didReceiveResponse:;
- (void)connection:willSendRequestForAuthenticationChallenge:;
- (void)connection:didSendBodyData:totalBytesWritten:totalBytesExpectedToWrite:;
- (void)connectionDidFinishLoading:;
- (id).cxx_construct;
- (void)connection:didFailWithError:;
- (id)connection:willSendRequest:redirectResponse:;
- (id)initWithCallbackHandler:;
- (id)getHandler;
@end
