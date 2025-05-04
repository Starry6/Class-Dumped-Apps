@interface AWEIMMessageTabOptPushBannerComponent : AWEIMMessageTabCommonBannerComponent
- (void)app_willEnterForeground;
- (void)afterInitialComponentAllResolved:;
- (void)onTabBarDidChangeNotification:;
- (Class)interactorClass;
- (id)pushGuideBannerInteractor;
- (void)updateGuideBanner;
- (void)viewWillAppear;
+ (BOOL)canCreateComponentWithContext:;
@end
