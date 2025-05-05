@interface IESLiveSaaSCleanScreenFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveSaaSCleanScreenNormalAbility normalAbility;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isScreenCleaned;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)didJoinChannelWithScene:;
- (void)didSetAttachingDIContext;
- (void)didUpdateRoom:;
- (void)handleLongPressMenuPopup;
- (BOOL)isSwipeToCleanScreenEnabled;
- (id)normalAbility;
- (void)remoteRoomDataReady:;
- (void)setNormalAbility:;
- (void)switchToCleanMode:enterType:;
- (void).cxx_destruct;
+ (id)componentWithRoom:trackContext:componentContext:;
+ (long long)preferredLoadPhase;
@end
