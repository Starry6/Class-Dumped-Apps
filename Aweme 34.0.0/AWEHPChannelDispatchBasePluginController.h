@interface AWEHPChannelDispatchBasePluginController : NSObject
@property (nonatomic) <AWEHPChannelControllerProtocol> channelController;
@property (nonatomic) AWEHPChannelDispatchPluginFactory factory;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)channelController;
- (void)setChannelController:;
- (void)channelEnterWithModel:;
- (void)channelLeaveWithModel:;
- (id)getFactory;
- (id)getCustomTrackParamsWithTrackInfo:;
- (void)channelViewDidLoad;
- (void)channelViewDidRelease;
- (void)channelViewDidResume;
- (void)channelViewWillAppear;
- (void)channelViewDidAppear;
- (void)channelViewWillDisappear;
- (void)channelViewDidDisappear;
- (void)scrollViewDidFinishSliding;
- (id)factory;
- (void).cxx_destruct;
- (id)initWithController:;
@end
