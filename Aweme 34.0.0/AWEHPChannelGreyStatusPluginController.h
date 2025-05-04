@interface AWEHPChannelGreyStatusPluginController : NSObject
@property (nonatomic) <AWEHPChannelControllerPrivatedConfigProtocol> privatedConfig;
@property (nonatomic) <AWEHPChannelControllerProtocol> channelController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)channelController;
- (void)setChannelController:;
- (void)channelViewDidAppear;
- (id)privatedConfig;
- (void)setHomepagePrivatedConfig:;
- (void).cxx_destruct;
- (id)initWithController:;
+ (BOOL)channelAllowInjectToController:;
@end
