@interface LPURLFetcher : LPFetcher
@property (nonatomic) NSURL URL;
@property (nonatomic) # responseClass;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (Class)responseClass;
- (void).cxx_destruct;
- (void)setURL:;
- (id)URL;
- (void)setResponseClass:;
- (void)dataTask:didReceiveResponse:decisionHandler:;
- (void)dataTask:didReceiveData:;
- (void)dataTask:didCompleteWithError:;
- (void)fetchWithConfiguration:completionHandler:;
- (void)_failedWithErrorCode:underlyingError:;
- (void)_completedWithData:MIMEType:error:;
@end
