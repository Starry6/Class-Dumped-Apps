@interface AWEFeedPlayletCardChannelController : NSObject
@property (nonatomic) UIViewController<AWESCPlayletTabViewControllerProtocol><AWEFeedTabItemViewControllerProtocol> contentVC;
@property (nonatomic) <AWEHPChannelControllerConfigProtocol> config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)channelTopTabDidSelect;
- (void)channelEnterWithModel:;
- (void)channelTopTabDidUnSelect;
- (id)contentVC;
- (void)setContentVC:;
- (id)topBarAbility;
- (void)channelDidLoadWithType:;
- (void)channelLandingTabWithModel:;
- (BOOL)channelReleaseContentViewController:;
- (id)getContentViewController;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void).cxx_destruct;
@end
