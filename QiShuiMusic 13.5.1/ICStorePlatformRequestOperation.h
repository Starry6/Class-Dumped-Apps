@interface ICStorePlatformRequestOperation : ICAsyncOperation
@property (nonatomic) ICStorePlatformRequest platformRequest;
@property (nonatomic) @? responseHandler;
- (void)execute;
- (void)_enqueueDataRequest:;
- (void)cancel;
- (id)responseHandler;
- (id)_URLRequestWithBaseURL:;
- (id)_requestContext;
- (void)setResponseHandler:;
- (id)initWithPlatformRequest:;
- (void)_executeUnpersonalized;
- (void)_executePersonalized;
- (void)_finishWithResponse:error:;
- (id)initWithPlatformRequest:usingURLSession:;
- (void).cxx_destruct;
- (void)finishWithError:;
- (id)platformRequest;
@end
