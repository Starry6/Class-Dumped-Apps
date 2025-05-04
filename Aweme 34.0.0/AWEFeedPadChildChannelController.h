@interface AWEFeedPadChildChannelController : NSObject
@property (nonatomic) AWEPadChildChannelInfo channelInfo;
@property (nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> contentVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWEHPChannelControllerConfigProtocol> config;
- (id)aAWEPadModuleAdapter;
- (void)channelEnterWithModel:;
- (id)getCustomTrackParamsWithTrackInfo:;
- (id)contentVC;
- (void)setContentVC:;
- (void)channelDidLoadWithType:;
- (BOOL)channelIsAvailableWithError:;
- (BOOL)channelRefreshWithModel:completion:;
- (BOOL)channelReleaseContentViewController:;
- (id)getContentViewController;
- (id)refreshMethod:;
- (void)fetchMediumChannelTypeWithConfig:;
- (void)trackRefreshData:;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void).cxx_destruct;
- (void)setChannelInfo:;
- (id)channelInfo;
+ (Class)aAWEPadModuleAdapterClass;
@end
