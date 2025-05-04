@interface AWEBizTabBarGlobalPluginManager : NSObject
@property (nonatomic) NSMutableArray plugins;
@property (nonatomic) NSHashTable weakPlugins;
- (void)tabBarDidSetHidden:;
- (void)registerTabBarGlobalPluginClass:;
- (void)registerTabBarGlobalPlugin:;
- (void)tabBarWillChangeSelectedTabWithCurrentSelectedTabID:previousSelectedTabID:;
- (BOOL)shouldInterceptDoubleClickWithCurrentTabID:targetTabID:;
- (BOOL)shouldInterceptLongPressWithCurrentTabID:targetTabID:;
- (BOOL)shouldInterceptSingleClickWithCurrentTabID:targetTabID:;
- (void)tabBarDidChangeSelectedTabWithCurrentSelectedTabID:previousSelectedTabID:;
- (BOOL)p_checkRegisterClass:;
- (id)shouldInterceptTabCurrentReferStringWithTabID:;
- (id)weakPlugins;
- (void)enumeratePluginsUsingBlock:;
- (void)setWeakPlugins:;
- (void)setPlugins:;
- (void).cxx_destruct;
- (id)plugins;
+ (id)sharedInstance;
@end
