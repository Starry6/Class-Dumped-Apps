@interface AWETheaterChannelController : NSObject
@property (nonatomic) AWETheaterViewController contentVC;
@property (nonatomic) <AWEHPChannelControllerConfigProtocol> config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)contentVC;
- (void)setContentVC:;
- (void)channelDidLoadWithType:;
- (BOOL)channelRefreshWithModel:completion:;
- (BOOL)channelReleaseContentViewController:;
- (id)getContentViewController;
- (id)aAWETheaterViewControllerCommonAdapter;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void).cxx_destruct;
+ (Class)aAWETheaterViewControllerCommonAdapterClass;
@end
