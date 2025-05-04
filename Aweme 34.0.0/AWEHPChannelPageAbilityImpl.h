@interface AWEHPChannelPageAbilityImpl : AWEHPChannelBaseAbilityImpl
@property (nonatomic) <AWEHPChannelPageAbilityImpl> target;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateBottomBarFillBackground:;
- (id)getFeedHomePageContext;
- (void)updateTopBarThemeStyle:;
- (void)updateBottomBarThemeStyle:;
- (id)getContentViewController;
- (BOOL)tryRemoveContentViewController;
- (BOOL)tryAddContentViewController;
- (BOOL)isScrollViewSliding;
- (id)getLifeCycleInfoModel;
- (void)tryReleaseContentViewControllerWithParams:completion:;
- (BOOL)isLandingInProgress;
- (BOOL)hasAddContentViewController;
- (void)removeChannel;
- (void)updateViewControllerSkylight:;
- (void)updateTopBarMaskStatus:;
- (void)updateTopTabBrightness:;
- (id)target;
- (void)setTarget:;
- (void).cxx_destruct;
@end
