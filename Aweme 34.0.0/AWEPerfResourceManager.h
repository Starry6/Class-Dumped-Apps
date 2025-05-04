@interface AWEPerfResourceManager : NSObject
@property (nonatomic) NSMutableArray plugins;
@property (nonatomic) NSArray cleanPaths;
@property (nonatomic) NSDictionary pluginBlockDictionary;
@property (nonatomic) NSMutableDictionary pluginSizeCache;
- (id)cleanPaths;
- (void)registerCleanPlugin:;
- (double)cleanSizeWithOption:;
- (void)cleanResourceWithOption:;
- (void)cleanResourceWithOption:cancelForCleanSize:;
- (void)setCleanPaths:;
- (void)initAllStrategies;
- (BOOL)isEnableWithPlugin:option:;
- (double)getSizeForPlugin:option:;
- (void)setSizeForPlugin:option:size:;
- (id)pluginBlockDictionary;
- (id)pluginSizeCache;
- (void)setPluginSizeCache:;
- (void)setPluginBlockDictionary:;
- (void)setPlugins:;
- (void).cxx_destruct;
- (id)plugins;
+ (id)shareManager;
+ (BOOL)isHighAppStorage;
@end
