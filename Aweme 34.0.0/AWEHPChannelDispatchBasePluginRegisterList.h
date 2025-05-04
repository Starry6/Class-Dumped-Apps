@interface AWEHPChannelDispatchBasePluginRegisterList : NSObject
@property (nonatomic) BOOL hasSetup;
@property (nonatomic) NSMutableArray pluginConfigs;
- (BOOL)hasSetup;
- (void)setHasSetup:;
- (BOOL)registerPluginWithConfig:toArray:;
- (id)getPluginConfigs;
- (void)trySetup;
- (id)pluginConfigs;
- (BOOL)registerPluginWithConfig:;
- (void)setPluginConfigs:;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
@end
