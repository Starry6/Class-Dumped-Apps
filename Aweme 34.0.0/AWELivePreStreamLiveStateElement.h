@interface AWELivePreStreamLiveStateElement : AWELiveBaseElement
@property (nonatomic) AWELiveRoomModel roomModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)roomModel;
- (void)viewController_viewWillAppear;
- (void)setRoomModel:;
- (void)preloadElement;
- (void)onMessageReceivce:withDict:;
- (void)configure;
- (void)setData:;
- (void).cxx_destruct;
- (void)reset;
@end
