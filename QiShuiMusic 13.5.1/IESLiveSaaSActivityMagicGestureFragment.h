@interface IESLiveSaaSActivityMagicGestureFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) IESLiveSaaSComponentContext componentContext;
@property (nonatomic) NSMutableArray magicGestures;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMount;
- (id)initWithRoom:trackContext:componentContext:;
- (id)magicGestures;
- (id)p_activityMagicGestureAreaInPlayerWithCenterPoint:radius:;
- (void)p_addGesture;
- (id)p_multiLinkerVideoAreaFrame;
- (BOOL)p_needResponseMagicGestureTap;
- (void)p_onSEIReceived:;
- (id)p_pkVideoAreaFrame;
- (void)p_removeTimeoutMagicGesture:;
- (void)p_setupPlayerSEIReceiver;
- (void)p_setupRTCSEIReceiver;
- (BOOL)p_shouldReceiveTouch:;
- (void)p_trackEventWithGestureModel:eventName:;
- (void)setMagicGestures:;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)componentWithRoom:trackContext:componentContext:;
+ (long long)preferredLoadPhase;
@end
