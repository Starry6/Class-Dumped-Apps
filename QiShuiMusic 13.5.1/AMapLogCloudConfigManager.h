@interface AMapLogCloudConfigManager : NSObject
@property (nonatomic) NSMutableDictionary cloudConfigDic;
@property (nonatomic) NSMutableDictionary cloudConfigObjDic;
@property (nonatomic) NSString localConfigConfig;
- (void)_getCacheConfig;
- (id)_initSinglton;
- (id)cloudConfigDic;
- (id)cloudConfigObjDic;
- (id)cloudConfigWithComponent:;
- (id)localConfigConfig;
- (void)setCloudConfig:component:;
- (void)setCloudConfigDic:;
- (void)setCloudConfigObjDic:;
- (void)setLocalConfigConfig:;
- (id)init;
- (void).cxx_destruct;
+ (id)shareManager;
@end
