@interface VSWeakForwardingTarget : NSObject
@property (nonatomic) @ object;
- (void)setObject:;
- (BOOL)respondsToSelector:;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (id)object;
- (id)forwardingTargetForSelector:;
@end
