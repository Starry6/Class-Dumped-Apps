@interface AWEIMMessageNoticeFlameCardComponent : AWEIMFlexComponent
@property (nonatomic) NSString cardLevel;
@property (nonatomic) NSDictionary cardConfig;
@property (nonatomic) AWEIMComponentManager componentManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (void)setComponentManager:;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)setCardConfig:;
- (id)cardConfig;
- (id)cardLevel;
- (void)setCardLevel:;
- (void)sendRecoveryFlame;
- (void)gotoFlameAchievementPage;
- (void)p_adaptNoticeBackground;
- (void).cxx_destruct;
- (id)componentManager;
+ (BOOL)canCreateComponentWithContext:;
@end
