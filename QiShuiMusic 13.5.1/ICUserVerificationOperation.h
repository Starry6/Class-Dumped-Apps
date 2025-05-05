@interface ICUserVerificationOperation : ICAsyncOperation
@property (nonatomic) ICUserVerificationRequest verificationRequest;
@property (nonatomic) @? responseHandler;
- (void)execute;
- (id)responseHandler;
- (void)setResponseHandler:;
- (void).cxx_destruct;
- (id)verificationRequest;
+ (id)operationWithVerificationRequest:;
@end
