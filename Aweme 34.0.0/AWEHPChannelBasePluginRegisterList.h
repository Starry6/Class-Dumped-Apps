@interface AWEHPChannelBasePluginRegisterList : NSObject
@property (nonatomic) NSMutableArray prePluginConfigs;
@property (nonatomic) NSMutableArray postPluginConfigs;
- (BOOL)registerPrePluginWithConfig:;
- (BOOL)registerPostPluginWithConfig:;
- (id)prePluginConfigs;
- (id)postPluginConfigs;
- (BOOL)registerPluginWithConfig:toArray:;
- (void)setPrePluginConfigs:;
- (void)setPostPluginConfigs:;
- (id)getPrePluginConfigs;
- (id)getPostPluginConfigs;
- (id)init;
- (void).cxx_destruct;
@end
