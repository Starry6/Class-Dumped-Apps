@interface HTSWeakProxy : NSProxy
@property (nonatomic) @ target;
@property (nonatomic) NSString targetClassName;
- (id)targetClassName;
- (void)handleNilTarget:;
- (void)handleNoSelector:;
- (void)setTargetClassName:;
- (BOOL)respondsToSelector:;
- (id)methodSignatureForSelector:;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
- (void)forwardInvocation:;
+ (id)initWithTarget:;
@end
