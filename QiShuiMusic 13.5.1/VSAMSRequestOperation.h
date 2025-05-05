@interface VSAMSRequestOperation : VSAsyncOperation
@property (nonatomic) VSOptional result;
@property (nonatomic) NSOperationQueue privateQueue;
@property (nonatomic) VSAMSRequest request;
- (id)privateQueue;
- (void)setPrivateQueue:;
- (id)result;
- (id)initWithRequest:;
- (void)executionDidBegin;
- (id)init;
- (void)cancel;
- (id)request;
- (void).cxx_destruct;
- (void)setRequest:;
- (void)setResult:;
- (void)urlForRequestType:completionHandler:;
@end
