@interface MSVWeakProxy : NSProxy
@property (nonatomic) @ object;
@property (nonatomic) Protocol protocol;
- (id)protocol;
- (id)methodSignatureForSelector:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)object;
- (void)forwardInvocation:;
- (BOOL)isEqual:;
+ (id)proxyWithObject:protocol:;
@end
