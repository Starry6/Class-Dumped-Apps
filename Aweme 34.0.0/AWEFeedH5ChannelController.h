@interface AWEFeedH5ChannelController : NSObject
@property (nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> contentVC;
@property (nonatomic) AWEFeedH5ChannelModel h5Model;
@property (nonatomic) <AWEHPChannelControllerConfigProtocol> config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getCustomTrackParamsWithTrackInfo:;
- (id)contentVC;
- (void)setContentVC:;
- (void)channelDidLoadWithType:;
- (BOOL)channelIsAvailableWithError:;
- (BOOL)channelReleaseContentViewController:;
- (id)getContentViewController;
- (id)h5Model;
- (void)setH5Model:;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void).cxx_destruct;
@end
