@interface AWEHPTabGuidePluginManager : NSObject
@property (nonatomic) NSMutableDictionary tabIDToRegisterModels;
@property (nonatomic) NSMutableDictionary tabIDToPlugins;
- (void)registerHPTabGuidePlugin:;
- (void)callComponentDidShowWithInfo:context:container:;
- (void)callComponentDidClickWithInfo:context:container:;
- (id)callGetCustomRouterParamsWithInfo:urlString:context:;
- (id)callGetCustomTrackParamsWithInfo:context:;
- (BOOL)checkRegisterModel:;
- (id)tabIDToRegisterModels;
- (void)enumeratePluginsForTabID:usingBlock:;
- (id)getPluginsWithTabID:;
- (id)tabIDToPlugins;
- (void)setTabIDToRegisterModels:;
- (void)setTabIDToPlugins:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
