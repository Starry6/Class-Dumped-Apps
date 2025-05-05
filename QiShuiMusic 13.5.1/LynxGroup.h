@interface LynxGroup : NSObject
@property (nonatomic) {shared_ptr<lynx::tasm::WhiteBoard>=^{WhiteBoard}^{__shared_weak_count}} whiteBoard;
@property (nonatomic) NSString groupName;
@property (nonatomic) NSString identification;
@property (nonatomic) NSArray preloadJSPaths;
@property (nonatomic) BOOL useProviderJsEnv;
@property (nonatomic) BOOL enableCanvas;
- (id)initWithName:withPreloadScript:;
- (void)addLynxView:;
- (BOOL)enableCanvas;
- (BOOL)enableJSGroupThread;
- (id)identification;
- (id)initWithName:withLynxGroupOption:;
- (id)initWithName:withPreloadScript:useProviderJsEnv:enableCanvas:;
- (id)initWithName:withPreloadScript:useProviderJsEnv:enableCanvas:enableCanvasOptimization:;
- (id)preloadJSPaths;
- (BOOL)useProviderJsEnv;
- (id)whiteBoard;
- (id)initWithName:;
- (void).cxx_destruct;
- (id)groupName;
- (id).cxx_construct;
+ (id)groupNameForLynxGroupOrDefault:;
+ (id)jsThreadNameForLynxGroupOrDefault:;
+ (id)singleGroupTag;
@end
