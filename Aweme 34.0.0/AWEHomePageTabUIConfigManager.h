@interface AWEHomePageTabUIConfigManager : NSObject
@property (nonatomic) AWEHomePageTabUIConfigModel config;
@property (nonatomic) AWEHomePageTabTextConfig topTabTextConfig;
@property (nonatomic) AWEHomePageTabTextConfig bottomTabTextConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)needOptimizeTabTextColor;
- (id)bottomTabTextConfig;
- (id)topTabTextConfig;
- (void)p_initConfig;
- (void)p_initConfigWithDic:;
- (void)setTopTabTextConfig:;
- (void)setBottomTabTextConfig:;
- (void)setConfig:;
- (id)init;
- (id)config;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
