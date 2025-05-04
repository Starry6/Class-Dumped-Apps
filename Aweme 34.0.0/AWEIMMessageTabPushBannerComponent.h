@interface AWEIMMessageTabPushBannerComponent : AWEIMMessageTabCommonBannerComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)app_willEnterForeground;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)__didChangeMessageTabMode:;
- (Class)interactorClass;
- (id)pushGuideBannerInteractor;
- (void)updateGuideBanner;
- (id)v4PushGuideBannerInteractor;
- (void)pushGuideManager:pushBannerInvoked:;
- (void)dismissPushGuideBanerView;
- (BOOL)isIMListBannerShowing;
- (void)viewWillAppear;
+ (BOOL)canCreateComponentWithContext:;
@end
