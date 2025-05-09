@interface IESLivePKGuestAudienceBuilder : NSObject
@property (nonatomic) HTSEventContext eventContext;
@property (nonatomic) BOOL interactiveModeEnabled;
@property (nonatomic) NSString anchorLinkmicStrID;
@property (nonatomic) NSNumber waitingStartTime;
@property (nonatomic) BOOL connected;
@property (nonatomic) NSError verifyError;
@property (nonatomic) NSString requestPage;
@property (nonatomic) NSString invitorSecUserId;
@property (nonatomic) @? reApplyOrReplyBlock;
@property (nonatomic) BOOL isJoiningChannel;
@property (nonatomic) BOOL isProcessingApply;
@property (nonatomic) BOOL doPermitProcessAfterApply;
@property (nonatomic) IESLiveInterativeTimeOutManager timeOutManager;
@property (nonatomic) NSString joinToken;
@property (nonatomic) IESLivePKModel pkmodel;
@property (nonatomic) HTSLiveLinkMicMethod inviteAudienceMsg;
@property (nonatomic) HTSLiveLinkMessage confirmUnsilenceMsg;
@property (nonatomic) BOOL adminRightIsChanged;
@property (nonatomic) BOOL enableAdminRight;
@property (nonatomic) HTSGroupedLiveMessageHandler groupedHandler;
@property (nonatomic) IESLivePKGuestTrackerContext guestTrackerContext;
@property (nonatomic) NSNumber timeStamp;
@property (nonatomic) BOOL isAdminWhenEnterRoom;
@property (nonatomic) BOOL interactStarted;
@property (nonatomic) HTSLiveInteractiveAPI interactiveAPI;
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) HTSLiveUser currentUser;
@property (nonatomic) IESLivePKInteractUserService userService;
@property (nonatomic) IESLiveInteractiveLinkService linkService;
@property (nonatomic) NSString toast;
@property (nonatomic) IESLivePKGuestPreApplyManager preApplyManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q mode;
@property (nonatomic) q linkMicStatus;
@property (nonatomic) NSDictionary vpassSDKParams;
@property (nonatomic) Q currentVendor;
@property (nonatomic) NSDictionary rtcExtraInfo;
@property (nonatomic) Q overType;
@property (nonatomic) NSMutableArray anchorUserListArray;
@property (nonatomic) NSNumber replyTimestamp;
@property (nonatomic) BOOL muteOnJoinChannel;
- (BOOL)adminModeEnable;
- (BOOL)isInvitingUser:;
- (void)onReceivedSystemKickOutMessage:;
- (void)setRequestPage:;
- (void)setUserService:;
- (void)setdown;
- (void)adminKickOutUserID:secUserID:linkType:requestSource:completion:;
- (void)adminMuteGuest:;
- (BOOL)interactStarted;
- (void)onReceivedReplyAudienceMessage:;
- (id)pkmodel;
- (id)preApplyManager;
- (void)setLinkService:;
- (void)setVerifyError:;
- (void)adminInviteWithUserID:secUserID:sourcePage:;
- (void)adminInviteWithUserID:secUserID:sourcePage:extraParams:;
- (void)adminKickOutUserID:secUserID:requestSource:completion:;
- (void)adminPermit:;
- (void)adminPermitUserID:secUserID:requestSource:;
- (void)adminPermitWithUserID:secUserID:;
- (BOOL)adminRightChangeWhenAdminModeEnable;
- (BOOL)adminRightIsChanged;
- (void)adminUnMuteGuest:;
- (id)anchorLinkmicStrID;
- (id)anchorUserListArray;
- (void)applyConnectionInMode:applySource:withPosition:afterFollow:paidCount:limitedTime:reason:eventExtra:andCompletion:;
- (BOOL)canJoinChannel;
- (id)confirmUnsilenceMsg;
- (BOOL)currentSceneIsPK;
- (unsigned long long)currentVendor;
- (long long)determineFinalLinkTypeWithOrigin:;
- (void)didSetAttachingDIContext;
- (BOOL)doPermitProcessAfterApply;
- (BOOL)enableAdminRight;
- (void)endInteractWaiting;
- (id)getMuteGusetNicknameByUserID:;
- (id)groupedHandler;
- (id)guestTrackerContext;
- (id)initWithRoom:diContext:eventContext:;
- (id)interactiveAPI;
- (BOOL)interactiveModeEnabled;
- (id)inviteAudienceMsg;
- (id)invitorSecUserId;
- (BOOL)isAdminWhenEnterRoom;
- (BOOL)isInteractionRuning;
- (BOOL)isJoiningChannel;
- (BOOL)isProcessingApply;
- (void)joinChannel:;
- (id)joinToken;
- (void)leaveOnLiveEndWithReason:;
- (long long)linkMicStatus;
- (id)linkService;
- (void)liveWillEndWithReason:;
- (BOOL)muteOnJoinChannel;
- (BOOL)noAdminRight;
- (void)onInteractiveKickouted;
- (void)onInteractiveModeStartWithRoomEnterTimeStamp:isAdmin:;
- (void)onInteractiveModeStartedWithTimeStamp:listStatus:;
- (void)onInteractiveModeStoppedByForce:;
- (void)onReceiveAudienceCameraOpenReply:;
- (void)onReceiveLinkApplyExpired:;
- (void)onReceivedActiveSignalMessage:;
- (void)onReceivedAudienceConFirmUnsilenceMessage:;
- (void)onReceivedDisableAudienceMessage:;
- (void)onReceivedEnableAudienceMessage:;
- (void)onReceivedInviteAudienceMessage:;
- (void)onReceivedKickoutedAudienceMessage:;
- (void)onReceivedLinkBattleConnectMessage:;
- (void)onReceivedPermitAudienceMessage:;
- (unsigned long long)overType;
- (void)pr_afterReceivePermit;
- (void)reApplyOrReplyAfterPermissionCheck;
- (id)reApplyOrReplyBlock;
- (void)refreshLinkServiceDelegate;
- (id)replyTimestamp;
- (void)replyWithType:linkType:inviteSource:replyToUserSecID:;
- (void)reportJoinRTCSucceed;
- (id)requestPage;
- (id)rtcExtraInfo;
- (void)setAdminRightIsChanged:;
- (void)setAnchorLinkmicStrID:;
- (void)setAnchorUserListArray:;
- (void)setConfirmUnsilenceMsg:;
- (void)setCurrentVendor:;
- (void)setDoPermitProcessAfterApply:;
- (void)setEnableAdminRight:;
- (void)setEventContext:;
- (void)setGroupedHandler:;
- (void)setGuestTrackerContext:;
- (void)setInteractStarted:;
- (void)setInteractiveAPI:;
- (void)setInteractiveModeEnabled:;
- (void)setInviteAudienceMsg:;
- (void)setInvitorSecUserId:;
- (void)setIsAdminWhenEnterRoom:;
- (void)setIsJoiningChannel:;
- (void)setIsProcessingApply:;
- (void)setJoinToken:;
- (void)setLinkMicStatus:;
- (void)setMuteOnJoinChannel:;
- (void)setOverType:;
- (void)setPkmodel:;
- (void)setPreApplyManager:;
- (void)setReApplyOrReplyBlock:;
- (void)setReplyTimestamp:;
- (void)setRtcExtraInfo:;
- (void)setTimeOutManager:;
- (void)setVpassSDKParams:;
- (void)setWaitingStartTime:;
- (void)setupCurrentUserInUserService:;
- (void)startInteractiveModeIfNeeded;
- (void)stopConnectionWithRequestSource:;
- (void)stopConnectionWithRequestSource:extra:;
- (id)timeOutManager;
- (void)userActiveChanged:linkmicId:;
- (id)userModelWrapperConfig;
- (id)userService;
- (id)verifyError;
- (id)vpassSDKParams;
- (id)waitingStartTime;
- (void)setConnected:;
- (BOOL)connected;
- (void)stopConnection;
- (void)setup;
- (void).cxx_destruct;
- (id)currentUser;
- (id)timeStamp;
- (long long)mode;
- (id)eventContext;
- (void)setMode:;
- (void)setTimeStamp:;
- (id)room;
- (void)setRoom:;
- (void)messageReceived:;
- (BOOL)isAdmin;
- (void)setToast:;
- (id)toast;
- (void)setupService;
- (void)clean;
@end
