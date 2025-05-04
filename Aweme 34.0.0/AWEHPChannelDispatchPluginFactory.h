@interface AWEHPChannelDispatchPluginFactory : NSObject
@property (nonatomic) AWEHPChannelDispatchBasePluginRegisterList registerList;
@property (nonatomic) NSMutableArray prePluginConfigs;
- (id)prePluginConfigs;
- (void)setPrePluginConfigs:;
- (id)getPluginConfigs;
- (id)initWithRegisterList:;
- (id)registerList;
- (void)setRegisterList:;
- (void).cxx_destruct;
+ (id)postPluginFactory;
+ (id)prePluginFactory;
@end
