@interface AWEBizTabBarItemConfigsRegister : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerTabBarItemNormalConfigClass:type:;
- (void)registerTabBarItemTeenConfigClass:type:;
- (void)registerTabBarItemBasicModeConfigClass:type:;
- (void)registerTabBarGlobalPluginClass:;
- (void)registerTabBarGlobalPlugin:;
@end
