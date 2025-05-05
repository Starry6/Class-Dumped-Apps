@interface AFPluginManager : NSObject
- (void).cxx_destruct;
- (id)description;
- (id)initWithPath:domainKeys:factoryInitializationBlock:;
- (void)enumerateFactoryInstancesForDomainKey:groupIdentifier:classIdentifier:usingBlock:;
- (void)preloadBundles;
- (void)_loadBundlesIfNeeded;
- (void)_registerBundle:;
+ (id)pluginManagerForPath:domainKeys:factoryInitializationBlock:;
@end
