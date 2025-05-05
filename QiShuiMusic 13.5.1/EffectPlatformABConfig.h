@interface EffectPlatformABConfig : NSObject
@property (nonatomic) BOOL enableV4FetchEffectCallbackOptimize;
@property (nonatomic) BOOL enableCheckUpdateGetVersionOptimize;
@property (nonatomic) BOOL enableUseNormalPreLoadResource;
@property (nonatomic) BOOL enableDownloadUseNonGlobalMainQueue;
- (BOOL)enableCheckUpdateGetVersionOptimize;
- (BOOL)enableDownloadUseNonGlobalMainQueue;
- (BOOL)enableUseNormalPreLoadResource;
- (BOOL)enableV4FetchEffectCallbackOptimize;
- (void)setEnableCheckUpdateGetVersionOptimize:;
- (void)setEnableDownloadUseNonGlobalMainQueue:;
- (void)setEnableUseNormalPreLoadResource:;
- (void)setEnableV4FetchEffectCallbackOptimize:;
+ (id)defaultConfig;
@end
