@interface IESLiveSaaSFeedDrawerServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)containsEnterFrom:enterMethod:;
- (BOOL)drawerMultiTabEnable;
- (BOOL)enableMultiTabWithContext:;
- (id)feedDrawer;
- (id)feedDrawerConfigForEnterFrom:enterMethod:;
- (id)feedDrawerConfigs;
- (id)feedItemForEnterFrom:enterMethod:;
- (id)feedViewControllerInsets:;
- (id)getUrlWithOrigin:cityCode:;
- (BOOL)isEnableNearbyTVDrawer;
- (id)multiTabModelForContext:;
- (id)nearbyTVDrawerConfig;
- (id)nearbyTVDrawerInnerUrl;
- (id)nearbyTVDrawerTitle;
- (id)p_nearbyTVDefaultFeedDrawerConfig;
- (BOOL)shouldShowSearchWithEnterFrom:enterMethod:;
- (id)singleTabModelForContext:;
- (id)tabConfigForEnterFrom:enterMethod:;
- (id)tabConfigFromNearbyTVEnterFrom:enterMethod:nearbyCityCode:;
- (void)updateTrackContext:viewController:;
- (id)viewControllerWithContext:;
@end
