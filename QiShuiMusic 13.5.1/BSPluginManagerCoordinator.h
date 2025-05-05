@interface BSPluginManagerCoordinator : NSObject
- (id)pluginManagerForBundle:;
- (void)registerPluginsFromBundle:;
- (void).cxx_destruct;
- (void)registerPlugins;
- (id)mainPluginManager;
+ (id)sharedInstance;
@end
