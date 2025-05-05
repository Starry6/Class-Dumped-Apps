@interface RACDelegateProxy : NSObject
@property (nonatomic) @ rac_proxiedDelegate;
- (id)rac_proxiedDelegate;
- (void)setRac_proxiedDelegate:;
- (id)signalForSelector:;
- (id)initWithProtocol:;
- (BOOL)respondsToSelector:;
- (id)methodSignatureForSelector:;
- (BOOL)isProxy;
- (void).cxx_destruct;
- (void)forwardInvocation:;
@end
