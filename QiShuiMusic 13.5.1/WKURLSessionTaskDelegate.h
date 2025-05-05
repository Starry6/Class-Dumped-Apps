@interface WKURLSessionTaskDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)URLSession:dataTask:didReceiveData:;
- (void)URLSession:task:didReceiveChallenge:completionHandler:;
- (void)URLSession:task:didCompleteWithError:;
- (void)URLSession:dataTask:didReceiveResponse:completionHandler:;
- (void)URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:;
- (id)connection;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithIdentifier:session:;
@end
