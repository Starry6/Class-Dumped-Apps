@interface AWEFeedHotSpotChannelController : NSObject
@property (nonatomic) AWEXTabHotSpotViewController contentVC;
@property (nonatomic) <AWEHPChannelControllerConfigProtocol> config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)channelEnterWithModel:;
- (void)channelTopTabContainerDidAppear;
- (id)contentVC;
- (void)setContentVC:;
- (id)topBarAbility;
- (void)channelTopTabItemTapGestureRecognizerShouldReceiveTouchWithParams:;
- (void)channelTopTabItemTapGestureRecognizerStateChangedWithParams:;
- (void)topTabScrollDidReachStableEnd;
- (void)channelDidLoadWithType:;
- (void)channelLandingTabWithModel:;
- (void)channelTrackRefreshWithModel:;
- (BOOL)channelReleaseContentViewController:;
- (id)getContentViewController;
- (id)getCommunicationObjectByProtocol:;
- (void)tryTriggerBubble;
- (void)handleGuideViewHasShow:;
- (void)setConfig:;
- (id)initWithConfig:;
- (void)addObserver;
- (id)config;
- (void).cxx_destruct;
@end
