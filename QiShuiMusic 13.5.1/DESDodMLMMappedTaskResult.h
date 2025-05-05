@interface DESDodMLMMappedTaskResult : DESInternalDodMLTaskResult
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)initWithJSONResult:binaryResult:deferred:deferralURL:duration:;
- (id)initWithJSONResult:sandboxManager:mmappedFile:duration:;
@end
