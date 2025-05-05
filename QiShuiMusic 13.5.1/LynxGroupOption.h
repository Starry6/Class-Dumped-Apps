@interface LynxGroupOption : NSObject
@property (nonatomic) NSArray preloadJSPaths;
@property (nonatomic) BOOL useProviderJsEnv;
@property (nonatomic) BOOL enableCanvas;
@property (nonatomic) BOOL enableJSGroupThread;
- (BOOL)enableCanvas;
- (BOOL)enableJSGroupThread;
- (id)preloadJSPaths;
- (void)setEnableCanvas:;
- (void)setEnableJSGroupThread:;
- (void)setPreloadJSPaths:;
- (void)setUseProviderJsEnv:;
- (BOOL)useProviderJsEnv;
- (void).cxx_destruct;
@end
