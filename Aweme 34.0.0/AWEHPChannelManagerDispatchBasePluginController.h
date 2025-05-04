@interface AWEHPChannelManagerDispatchBasePluginController : NSObject
@property (nonatomic) <AWEHPChannelControllerProtocol> channelController;
@property (nonatomic) AWEHPChannelDispatchPluginFactory factory;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)channelController;
- (void)setChannelController:;
- (void)channelTopTabContainerDidAppear;
- (void)channelTopTabContainerDidDisappear;
- (id)getFactory;
- (id)getCustomTrackParamsWithTrackInfo:;
- (void)channelTopSegmentControllHidden:;
- (id)factory;
- (void).cxx_destruct;
- (id)initWithController:;
@end
