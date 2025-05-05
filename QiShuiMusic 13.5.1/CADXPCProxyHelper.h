@interface CADXPCProxyHelper : NSObject
@property (nonatomic) CADDatabaseInitializationOptions initializationOptions;
@property (nonatomic) <CADXPCProxyHelperDelegate> delegate;
- (void)setDelegate:;
- (id)methodSignatureForSelector:;
- (long long)replyBlockArgumentIndex:;
- (id)_replaceReplyBlockInInvocation:retryingAfterInitializationWithContextHolder:;
- (void)setInitializationOptions:;
- (void)_callReplyHandler:ofInvocation:withErrorCode:;
- (BOOL)_shouldResendInitializationOptionsForInvocation:;
- (id)delegate;
- (id)initializationOptions;
- (void).cxx_destruct;
- (void)_tryInvokeWithGenerationValidation:target:replyBlock:contextHolder:;
- (BOOL)_validateCADObjectIDsInInvocationArguments:;
- (void)forwardInvocation:;
- (id)initWithXPCConnection:protocol:synchronous:;
- (id)_getReplyBlockFromInvocation:;
@end
