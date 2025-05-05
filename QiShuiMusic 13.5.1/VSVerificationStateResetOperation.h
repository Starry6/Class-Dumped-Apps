@interface VSVerificationStateResetOperation : VSAsyncOperation
@property (nonatomic) NSURLSessionTask resetStateTask;
@property (nonatomic) NSOperationQueue privateQueue;
@property (nonatomic) VSOptional result;
@property (nonatomic) VSAuditToken auditToken;
- (id)privateQueue;
- (void)setPrivateQueue:;
- (id)result;
- (void)executionDidBegin;
- (id)init;
- (void)setAuditToken:;
- (void)cancel;
- (id)auditToken;
- (void).cxx_destruct;
- (void)setResult:;
- (void)_resetVerificationStateWithURL:;
- (id)resetStateTask;
- (void)setResetStateTask:;
@end
