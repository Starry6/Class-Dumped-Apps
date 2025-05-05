@interface AMapCloudManager : NSObject
@property (nonatomic) NSMutableDictionary componentClouds;
@property (nonatomic) NSMutableDictionary components;
@property (nonatomic) NSMutableDictionary componentStatus;
- (id)componentClouds;
- (id)componentStatus;
- (id)needCheckCloud:;
- (void)checkCloudTimestampWithResponse:withRequest:;
- (id)cloudConfigWithAuthKey:;
- (id)cloudConfigWithComponent:authKeys:;
- (id)lctForComponent:;
- (id)lctForProduct:;
- (void)loadCloudConfigs;
- (id)productForRequest:;
- (void)saveCloudConfigs:request:response:withComponent:authKeys:;
- (void)setComponentClouds:;
- (void)setComponentStatus:;
- (id)components;
- (id)init;
- (void)setComponents:;
- (void).cxx_destruct;
+ (id)needCheckCloud:;
+ (void)checkCloudTimestampWithResponse:withRequest:;
+ (id)cloudConfigWithAuthKey:;
+ (id)cloudConfigWithComponent:authKeys:;
+ (void)saveCloudConfigs:request:response:withComponent:authKeys:;
+ (id)sharedManager;
@end
