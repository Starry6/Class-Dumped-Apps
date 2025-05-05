@interface IESLiveInteractEnlargeStore : NSObject
@property (nonatomic) HTSLiveInteractiveAPI linkmicAPI;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) <IESLiveInteractionLinkerService> linker;
- (id)currentLargeUserType;
- (void)enlargeGuestInvite:isEnlarge:toPos:completion:;
- (id)initWithRoom:scene:trackContext:diContext:;
- (id)linker;
- (id)linkmicAPI;
- (void)p_trackEnlargeGuestInvite:guestID:;
- (void)p_trackSendCancelForGuestId:isCancelAll:;
- (void)p_trackSendInviteForGuestId:enlargeType:;
- (id)roomModel;
- (void)setLinker:;
- (void)setLinkmicAPI:;
- (void)setRoomModel:;
- (void)setTrackContext:;
- (id)trackContext;
- (void)trackEnlargeUserActionWithIsEnlarge:guestID:;
- (void)trackGuestOverEnlarge:isAnchorEnlarge:isDouble:;
- (void)trackGuestStartEnlargeIsAnchorEnlarge:;
- (void)tryToCloseDoubleCWithKickUser:completion:;
- (void)updateEnlargeFullSreenSettingIsOpen:completion:;
- (void).cxx_destruct;
@end
