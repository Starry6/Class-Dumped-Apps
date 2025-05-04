@interface AWEMVDataPluginCenter : NSObject
@property (nonatomic) NSMutableArray internalPlugins;
@property (nonatomic) NSHashTable externalPlugins;
@property (nonatomic) NSHashTable dataControllers;
- (id)aAWEPadBizUIAdapter;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)dataControllers;
- (void)setDataControllers:;
- (id)externalPlugins;
- (void)setExternalPlugins:;
- (void)attachPluginsForDataController:;
- (void)registerExternalPlugins:;
- (id)pluginsForDataController:;
- (id)pluginClassArrayForDataController:;
- (id)lazyGetInternalPluginByClassName:;
- (id)internalPlugins;
- (id)commonPluginClassArray;
- (void)setInternalPlugins:;
- (id)init;
- (void).cxx_destruct;
+ (Class)aAWEPadBizUIAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (id)sharedInstance;
@end
