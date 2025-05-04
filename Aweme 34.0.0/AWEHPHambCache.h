@interface AWEHPHambCache : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) NSDictionary defaultConfig;
@property (nonatomic) NSDictionary userConfig;
@property (nonatomic) NSDictionary deviceConfig;
@property (nonatomic) NSMutableDictionary resultConfig;
- (id)userConfig;
- (void)setUserConfig:;
- (id)resultConfig;
- (void)setResultConfig:;
- (id)getAllConfig;
- (id)getConfigWithCmd:;
- (void)reloadDefaultConfig:userConfig:deviceConfig:messages:;
- (void)insertMessages:modifyNames:error:;
- (id)init;
- (void)setLock:;
- (id)lock;
- (id)defaultConfig;
- (void).cxx_destruct;
- (id)deviceConfig;
- (void)setDeviceConfig:;
- (void)setDefaultConfig:;
@end
