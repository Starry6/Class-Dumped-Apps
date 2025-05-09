@interface AWEFeedGrouponChannelController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol><AWENewNearbyViewControllerProtocol> contentVC;
@property (nonatomic) BOOL isChannelLoaded;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWEHPChannelControllerConfigProtocol> config;
- (void)cancelRefresh;
- (void)refreshWithType:completion:;
- (BOOL)verticalPanGestureRecognizerShouldBegin:;
- (void)channelEnterWithModel:;
- (void)channelLeaveWithModel:;
- (void)channelTopTabContainerDidAppear;
- (void)channelTopTabContainerDidDisappear;
- (id)getCustomTrackParamsWithTrackInfo:;
- (void)hideBubbleWithCompletion:;
- (void)showBadgeWithModel:showCallBack:hideCallBack:downgradeCallBack:;
- (id)contentVC;
- (void)setContentVC:;
- (id)getNetworkQualityParams;
- (void)channelTopTabWillBeginDragging;
- (void)channelTopTabDidEndScroll;
- (void)channelDidLoadWithType:;
- (void)channelViewWillAppear;
- (void)channelViewDidDisappear;
- (void)channelTrackRefreshWithModel:;
- (BOOL)channelRefreshWithModel:completion:;
- (void)channelTopSegmentControllHidden:;
- (BOOL)channelReleaseContentViewController:;
- (id)getContentViewController;
- (id)getPrePluginControllers;
- (BOOL)isTopTabSelected;
- (id)topContainerFrame;
- (BOOL)isChannelLoaded;
- (void)setIsChannelLoaded:;
- (id)tabSegmentViewRect;
- (void)tabShowPinTopComponentWithComponentID:componentText:extraTrackParams:completion:;
- (void)tabShowPinTopComponentWithPinTopModel:extraTrackParams:showCompletion:pinTopCompletion:;
- (void)tabGeneratePinTopTaskWithComponentID:extraTrackParams:completion:;
- (void)cityHasChangedAndNeedRefresh:animated:nearbyTitle:;
- (void)contentOffsetChangedWithNewOffset:oldOffset:isUserTriggered:;
- (void)showNearbyBubbleWithModel:completion:clickCallback:dismissCallback:;
- (void)updateNearbyTopBarThemeIsLight:;
- (BOOL)isTopTabLoaded;
- (void)scrollToTopTabSegmentWithChannelId:animated:;
- (BOOL)canShowTabDot;
- (double)topTabSegmentShowPercentWithChannelId:;
- (void)showNearbyPinTopWithComponentID:extraTrackParams:completion:;
- (void)removeNearbyDotWithCompletion:;
- (void)updateNearbyBottomBarThemeIsLight:;
- (id)generateChannelBubbleWithNearbyModel:;
- (void)showXtabNearbyBubbleWithModel:completion:clickCallback:dismissCallback:;
- (void)hideXTabBubbleWithCompletion:;
- (id)generaTopBarDotModelWithNearbyTabModel:;
- (void)channelInitConfig;
- (void)hideRightEntrance;
- (void)showRightEntrance;
- (id)bottomCenterOfTopTabSegmentWithChannelId:;
- (id)tabTitle;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (long long)tabIndex;
- (void).cxx_destruct;
- (void)addObservers;
@end
