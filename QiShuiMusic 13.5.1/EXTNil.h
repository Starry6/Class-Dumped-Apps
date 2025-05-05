@interface EXTNil : NSProxy
- (BOOL)respondsToSelector:;
- (id)init;
- (BOOL)isMemberOfClass:;
- (id)methodSignatureForSelector:;
- (unsigned long long)hash;
- (BOOL)conformsToProtocol:;
- (BOOL)isProxy;
- (BOOL)isKindOfClass:;
- (void)forwardInvocation:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)self;
+ (id)null;
@end
