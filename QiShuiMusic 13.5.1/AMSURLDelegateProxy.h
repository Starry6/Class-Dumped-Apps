@interface AMSURLDelegateProxy : NSObject
@property (nonatomic) AMSURLSession session;
@property (nonatomic) @ delegate;
- (BOOL)respondsToSelector:;
- (void)setDelegate:;
- (id)methodSignatureForSelector:;
- (id)initWithSession:delegate:;
- (id)delegate;
- (id)session;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
- (void)invalidate;
@end
