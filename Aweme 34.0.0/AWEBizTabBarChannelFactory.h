@interface AWEBizTabBarChannelFactory : NSObject
@property (nonatomic) NSMutableArray prePluginConfigs;
@property (nonatomic) NSMutableArray postPluginConfigs;
- (void)registerPrePlugin;
- (void)registerDispatchPlugins;
- (void)registerPostPlugin;
- (void)registerPrePluginWithConfig:;
- (id)aAWENormalModeTabBarPluginClassAdapter;
- (void)registerPostPluginWithConfig:;
- (id)prePluginConfigs;
- (id)getPluginWithChannel:configs:;
- (id)postPluginConfigs;
- (void)registerPluginWithConfig:toArray:;
- (id)getPrePluginWithChannel:;
- (id)getPostPluginWithChannel:;
- (void)setPrePluginConfigs:;
- (void)setPostPluginConfigs:;
- (id)init;
- (void).cxx_destruct;
+ (Class)aAWENormalModeTabBarPluginClassAdapterClass;
+ (id)sharedInstance;
@end
