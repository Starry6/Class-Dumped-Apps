@interface AWEHPBottomChannelDispatchBasePluginController : NSObject
@property (nonatomic) <AWEBizTabBarItemConfigProtocol> channelController;
@property (nonatomic) <AWEHPBottomChannelControllerConfigProtocol> channelConfig;
@property (nonatomic) AWEHPChannelDispatchPluginFactory factory;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)channelController;
- (void)setChannelController:;
- (id)getFactory;
- (void)tabBarWillSelectItemWithEnterModel:;
- (void)itemViewDidLoad;
- (void)itemViewWillAppear;
- (void)itemViewDidAppear;
- (void)itemViewDidDisappear;
- (id)getCustomTrackParamsWithTrackInfo:;
- (void)tabBarDidSetHidden:;
- (void)tabBarDidSetAlpha:;
- (id)initWithItemConfig:channelConfig:;
- (void)setChannelConfig:;
- (id)channelConfig;
- (id)factory;
- (void).cxx_destruct;
@end
