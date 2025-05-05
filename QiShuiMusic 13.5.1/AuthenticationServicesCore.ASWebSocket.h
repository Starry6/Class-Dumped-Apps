@interface AuthenticationServicesCore.ASWebSocket : NSObject
- (void)URLSession:task:didReceiveChallenge:completionHandler:;
- (id)init;
- (void)URLSession:task:didCompleteWithError:;
- (void)URLSession:webSocketTask:didOpenWithProtocol:;
- (void).cxx_destruct;
@end
