@interface IESECStrongProxy : BTDWeakProxy
@property (nonatomic) @ strongTarget;
@property (nonatomic) NSString targetClassName;
@property (nonatomic) Protocol pt;
- (id)targetClassName;
- (void)handleNilTarget:;
- (void)handleNoSelector:;
- (BOOL)selectorIsRequiredIn:selector:;
- (void)setPt:;
- (void)setTargetClassName:;
- (BOOL)respondsToSelector:;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
- (id)pt;
- (id)strongTarget;
- (void)setStrongTarget:;
+ (id)strongProxyWithTarget:protocol:;
@end
