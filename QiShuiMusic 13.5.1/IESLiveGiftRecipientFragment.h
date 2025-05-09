@interface IESLiveGiftRecipientFragment : IESLiveCubeFragment
@property (nonatomic) IESLiveGiftRecipientController recipientController;
@property (nonatomic) IESLiveGiftRecipientTrackController trackController;
@property (nonatomic) IESLiveGiftRecipientUserInteractiveController userInteractiveController;
@property (nonatomic) RACReplaySubject currentSelectedReciverPublisher;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLiveRoomServiceAdapter> currentRoom;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) IESLiveComponentContext componentContext;
- (id)audienceService;
- (BOOL)isGroupLiveRoom;
- (BOOL)isGuildGameMode;
- (void)removeSpecialRecommendRecipient;
- (id)currentSelectedReciverPublisher;
- (id)trackController;
- (void)addAudienceGiftReceiverWithRoomID:anchorID:audienceID:completion:;
- (id)anchorSideAudienceGiftAuthInfo;
- (void)componentBindService;
- (id)componentContext;
- (void)componentMount;
- (void)cubeComponentCreate;
- (id)giftRecipientWithID:;
- (id)groupLiveMemberRecipientList;
- (unsigned long long)identifierValueOfRecipient:useCache:;
- (BOOL)isAllMic;
- (void)manualChangeFromRecipient:fromAllMic:toRecipient:toAllMic:;
- (void)manualChangeToRecipient:toAllMic:;
- (id)observeSelectedReciver;
- (BOOL)openAudienceReceiveGiftSettingWithAllMicExclusive:;
- (id)recipientController;
- (id)recipientEntranceService;
- (id)recipientFromAudienceGiftReceiverListWithID:;
- (id)recipientListJSBDataWithGuestListData:;
- (id)recipientService;
- (id)recipientTrackService;
- (id)recipientTypeWith:allMic:;
- (void)refreshSpecifiedUserOnGuildGameMode:;
- (void)requireRecipientListJSBDataWithCompletion:;
- (void)setAnchorSideAudienceGiftAuthInfo:;
- (void)setComponentContext:;
- (void)setCurrentSelectedReciverPublisher:;
- (void)setRecipientController:;
- (void)setRecipients:allMic:useDefaultWhenEmpty:;
- (void)setSpecialRecommendRecipientWithID:logExtra:completion:;
- (void)setTrackContext:;
- (void)setTrackController:;
- (void)setUserInteractiveController:;
- (id)trackContext;
- (void)updateAnchorSideAudienceGiftAuthInfoWithRoomID:anchorID:authSwitch:completion:;
- (id)userInteractiveController;
- (id)userInteractiveService;
- (BOOL)isAnchor;
- (void).cxx_destruct;
- (id)selectedRecipients;
- (id)currentRoom;
+ (BOOL)isMixed;
+ (BOOL)componentShouldActive:;
@end
