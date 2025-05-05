@interface NSFilePresenterManagedProxy : NSObject
@property (nonatomic) Q filePresenterResponses;
@property (nonatomic) NSFileAccessProcessManager processManager;
@property (nonatomic) @? errorHandler;
- (void)dealloc;
- (void)setFilePresenterResponses:;
- (void)setProcessManager:;
- (id)errorHandler;
- (void)collectDebuggingInformationWithCompletionHandler:;
- (id)methodSignatureForSelector:;
- (id)remoteObjectProxy;
- (void)_safelySendMessageWithSelector:withErrorCompletionHandler:sender:;
- (id)initWithXPCProxy:;
- (id)remoteObjectProxyWithErrorHandler:;
- (void)setErrorHandler:;
- (unsigned long long)filePresenterResponses;
- (void)relinquishToWritingClaimWithID:options:purposeID:subitemURL:completionHandler:;
- (void)accommodateDeletionOfSubitemAtURL:completionHandler:;
- (void)saveChangesWithCompletionHandler:;
- (BOOL)_presenterRespondsToSelector:;
- (void)relinquishToReadingClaimWithID:options:purposeID:completionHandler:;
- (void)reacquireFromWritingClaimForID:completionHandler:;
- (void)forwardInvocation:;
- (id)processManager;
@end
