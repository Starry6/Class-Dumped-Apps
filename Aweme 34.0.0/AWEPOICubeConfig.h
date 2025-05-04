@interface AWEPOICubeConfig : NSObject
@property (nonatomic) q widthMode;
@property (nonatomic) q heightMode;
@property (nonatomic) BOOL disableBigFontMode;
@property (nonatomic) BOOL enableRadonCompatible;
@property (nonatomic) BOOL enableLynxMultiAsyncThread;
@property (nonatomic) NSNumber enableJSRuntime;
@property (nonatomic) BOOL enableAirStrictMode;
@property (nonatomic) q threadStrategy;
- (void)setWidthMode:;
- (void)setHeightMode:;
- (void)setThreadStrategy:;
- (long long)threadStrategy;
- (BOOL)enableAirStrictMode;
- (void)setEnableAirStrictMode:;
- (long long)widthMode;
- (long long)heightMode;
- (BOOL)enableRadonCompatible;
- (void)setEnableRadonCompatible:;
- (long long)threadStrategyForBDX;
- (BOOL)disableBigFontMode;
- (void)setDisableBigFontMode:;
- (BOOL)enableLynxMultiAsyncThread;
- (void)setEnableLynxMultiAsyncThread:;
- (id)enableJSRuntime;
- (void)setEnableJSRuntime:;
- (id)init;
- (void).cxx_destruct;
@end
