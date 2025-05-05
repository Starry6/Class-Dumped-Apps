@interface IDSXPCConnectionTimeoutProxy : NSObject
@property (nonatomic) @ target;
@property (nonatomic) IDSXPCConnection connection;
@property (nonatomic) double timeout;
@property (nonatomic) @? errorHandler;
- (BOOL)respondsToSelector:;
- (void)dealloc;
- (id)errorHandler;
- (void)setTimeout:;
- (id)methodSignatureForSelector:;
- (BOOL)_invocationHasBlock:;
- (void)setErrorHandler:;
- (void)setTarget:;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)target;
- (double)timeout;
- (id)initWithTarget:connection:timeoutInSeconds:errorHandler:;
- (void)forwardInvocation:;
@end
