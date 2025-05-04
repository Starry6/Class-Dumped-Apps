@interface AWEHPLeftSlideToUserConfigManager : NSObject
@property (nonatomic) AWEHPLeftSlideToUserConfig config;
@property (nonatomic) NSMutableDictionary supportTabConfigMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)guideConfig;
- (BOOL)configEnable;
- (double)mainTabSlideWidth;
- (double)edgeSlideWidth;
- (id)supportTabConfigMap;
- (id)getTabConfigWithTabID:;
- (void)setSupportTabConfigMap:;
- (void)setConfig:;
- (id)init;
- (id)config;
- (void).cxx_destruct;
- (void)setupConfig;
+ (id)sharedInstance;
@end
