@interface AWEHPChannelPublicPluginRegisterList : AWEHPChannelBasePluginRegisterList
- (void)registerDispatchPlugins;
- (id)aAWEPadSplitScreenAdapter;
- (id)aAWEPadTabBarAdapter;
- (id)aAWEHPPluginControllersAdapter;
- (void)registerPrePlugins;
- (void)registerPostPlugins;
- (void)setup;
+ (Class)aAWEPadSplitScreenAdapterClass;
+ (Class)aAWEPadTabBarAdapterClass;
+ (Class)aAWEHPPluginControllersAdapterClass;
@end
