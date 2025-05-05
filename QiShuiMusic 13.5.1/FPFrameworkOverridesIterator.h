@interface FPFrameworkOverridesIterator : NSProxy
- (void)finish;
- (id)methodSignatureForSelector:;
- (id)initWithOverrides:noSuitableModuleFoundHandler:;
- (void)callNextOverrides;
- (void).cxx_destruct;
- (void)forwardInvocation:;
+ (void)addOverride:;
+ (void)removeOverride:;
+ (id)allOverrides;
+ (id)overrideDirectoryURL;
+ (id)newIteratorWithNotFoundHandler:;
@end
