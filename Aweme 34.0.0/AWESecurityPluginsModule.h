@interface AWESecurityPluginsModule : NSObject
@property (nonatomic) AWESECHybridPluginManager pluginManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)awemeSettingDidChange;
- (void)setPluginManager:;
- (void)setupLegacyModules;
- (void)setupREFuncs;
- (void)setupSecLinkParamsHandler;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
- (id)pluginManager;
+ (id)sharedInstance;
@end
