@interface CSJDynamicSDKAnalysisEngineManager : NSObject
@property (nonatomic) NSDictionary sdkDefaultDict;
- (void)__loadDefaultInfo;
- (void)async_preloadDefaultInfo;
- (id)layoutInfoFromGlobalModel:error:havePreloadDefaultInfo:;
- (id)sdkDefaultDict;
- (void)setSdkDefaultDict:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
