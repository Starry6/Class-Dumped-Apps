@interface AMSConnectionDelegateProxy : NSObject
@property (nonatomic) @ delegate;
- (void)setDelegate:;
- (id)methodSignatureForSelector:;
- (id)delegate;
- (void).cxx_destruct;
- (void)forwardInvocation:;
+ (id)proxyWithDelegate:;
@end
