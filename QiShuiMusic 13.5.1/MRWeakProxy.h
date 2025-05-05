@interface MRWeakProxy : NSObject
@property (nonatomic) @ object;
@property (nonatomic) Protocol protocol;
- (id)protocol;
- (void)setProtocol:;
- (void)setObject:;
- (id)methodSignatureForSelector:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)object;
- (void)forwardInvocation:;
- (BOOL)isEqual:;
+ (id)weakProxyWithObject:protocol:;
@end
