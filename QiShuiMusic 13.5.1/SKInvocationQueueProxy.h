@interface SKInvocationQueueProxy : NSObject
@property (nonatomic) @ invocationTarget;
- (id)initWithProtocol:;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)invocationTarget;
- (void)setInvocationTarget:;
@end
