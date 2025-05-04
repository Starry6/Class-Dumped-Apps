@interface AWEHPTabBarBGSkinHambConfig : MTLModel
@property (nonatomic) AWEHPTabBarBGSkinConfigModel normalModeConfig;
@property (nonatomic) AWEHPTabBarBGSkinConfigSpecialModeModel teenModeConfig;
@property (nonatomic) AWEHPTabBarBGSkinConfigSpecialModeModel basicModeConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)basicModeConfig;
- (id)normalModeConfig;
- (id)teenModeConfig;
- (void)setNormalModeConfig:;
- (void)setTeenModeConfig:;
- (void)setBasicModeConfig:;
- (BOOL)isValidWithError:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
