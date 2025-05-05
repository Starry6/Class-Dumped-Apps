@interface AnnieExtensionBasedOnBDXProxy : NSProxy
@property (nonatomic) NSObject bdxBase;
@property (nonatomic) NSObject annieExtension;
@property (nonatomic) AnnieExtensionBasedOnBDXProxyFallback fallback;
- (id)bdxBase;
- (id)initWithBDXBase:annieExtension:;
- (id)annieExtension;
- (void)redirectToFallback:;
- (void)setAnnieExtension:;
- (void)setBdxBase:;
- (BOOL)respondsToSelector:;
- (id)fallback;
- (id)methodSignatureForSelector:;
- (void)setFallback:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
@end
