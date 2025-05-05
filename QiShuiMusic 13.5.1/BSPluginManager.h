@interface BSPluginManager : NSObject
@property (nonatomic) NSBundle bundle;
@property (nonatomic) NSString pluginDirectory;
@property (nonatomic) NSArray pluginBundles;
- (id)pluginDirectory;
- (id)pluginBundlesForType:;
- (id)bundle;
- (id)pluginBundleForIdentifier:;
- (id)pluginBundles;
- (id)pluginBundleForName:type:;
- (void).cxx_destruct;
- (id)description;
+ (id)mainManager;
@end
