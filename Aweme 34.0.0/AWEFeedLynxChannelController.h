@interface AWEFeedLynxChannelController : NSObject
@property (nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> contentVC;
@property (nonatomic) AWEFeedLynxChannelInfo channelInfo;
@property (nonatomic) <AWEHPChannelControllerConfigProtocol> config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)contentVC;
- (void)setContentVC:;
- (void)channelDidLoadWithType:;
- (BOOL)channelIsAvailableWithError:;
- (BOOL)channelReleaseContentViewController:;
- (id)getContentViewController;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void).cxx_destruct;
- (void)setChannelInfo:;
- (id)channelInfo;
@end
