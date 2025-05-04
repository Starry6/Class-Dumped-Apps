@interface AWEHPBottomTabGreyStatusPlugin : NSObject
@property (nonatomic) <AWEBizTabBarItemConfigProtocol> itemConfig;
@property (nonatomic) <AWEHPBottomChannelControllerConfigProtocol> config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setItemConfig:;
- (id)itemConfig;
- (void)itemViewDidAppear;
- (id)initWithItemConfig:channelConfig:;
- (void)updateHomepageGreyStatusWithCurrentChannelID:;
- (void)setConfig:;
- (id)config;
- (void).cxx_destruct;
+ (BOOL)allowInjectWithChannelConfig:;
@end
