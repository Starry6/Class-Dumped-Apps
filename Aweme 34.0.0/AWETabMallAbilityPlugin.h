@interface AWETabMallAbilityPlugin : NSObject
@property (nonatomic) <AWEHPChannelTopBarAbility> topBarAbility;
@property (nonatomic) <AWENormalModeTabBarItemConfigAbility> tabBarAbility;
@property (nonatomic) <AWEBizTabBarItemConfigProtocol> bottomTabConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTabBarAbility:;
- (id)tabBarAbility;
- (id)topBarAbility;
- (void)setBottomTabConfig:;
- (void)setTopBarAbility:;
- (id)bottomTabConfig;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
