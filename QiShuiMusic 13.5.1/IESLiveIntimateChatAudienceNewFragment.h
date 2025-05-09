@interface IESLiveIntimateChatAudienceNewFragment : IESLiveChatRoomCommon
@property (nonatomic) HTSLiveInteractiveAudienceStore store;
@property (nonatomic) IESLiveIntimateChatAudienceStore intimateChatAudienceStore;
@property (nonatomic) <HTSLiveIntimateChatAudienceActions> dispatcher;
@property (nonatomic) <HTSLiveDiggAction> diggDispatcher;
@property (nonatomic) BOOL onInteract;
@property (nonatomic) IESLiveInteractionAudienceCustomItemView itemView;
@property (nonatomic) IESLiveInteractionAudienceCustomItemView moreToolsItemView;
@property (nonatomic) IESLiveIntimateChatHostApplyItemView hostApplyItemView;
@property (nonatomic) IESLiveAudienceInteractiveAnchorInvitePanel anchorInvitePanel;
@property (nonatomic) IESLiveLayoutPlaceholderView placeholderView;
@property (nonatomic) IESLiveSmallAudienceRequestView smallAudienceRequestView;
@property (nonatomic) IESLiveSmallAudienceRequestView switchingSmallRequestView;
@property (nonatomic) BOOL enableSendGiftToHost;
@property (nonatomic) BOOL hasRealNameVerified;
@property (nonatomic) BOOL isGoingToRealNameVerified;
@property (nonatomic) IESLiveCountTimer verifiedTimer;
@property (nonatomic) <IESLiveVerifyConfigAdapter> verifyConfig;
@property (nonatomic) <IESLiveRealStreamingProviderAdapter> streamProvider;
@property (nonatomic) <IESLiveURLSchemaHandlerAdapter> schemaURLHandler;
@property (nonatomic) <IESLiveAuthorizationServiceAdapter> authorizationService;
@property (nonatomic) <IESLiveNoticeActionsAdapter> noticeActionCreator;
@property (nonatomic) <IESLivePushStreamLifeCycle> pushStreamLifeCycle;
@property (nonatomic) <IESLivePerfSampler> perfSampler;
@property (nonatomic) HTSLiveToolbarItem toolbarItem;
@property (nonatomic) HTSLiveToolbarItem item;
@property (nonatomic) @? serverCtrlEntranceShowBlock;
@property (nonatomic) HTSGroupedLiveMessageHandler messageHandler;
@property (nonatomic) NSArray readedApplications;
@property (nonatomic) IESLiveIntimateChatOperationRootPanel adminInteractiveRootPanel;
@property (nonatomic) <IESLiveInteractiveAdminActions> adminActions;
@property (nonatomic) <HTSLiveAudienceActions> roomViewActionCreator;
@property (nonatomic) <IESLiveCustomConfig> customConfig;
@property (nonatomic) BOOL isConnenctToRTC;
@property (nonatomic) IESLiveAudienceInteractDistributeSettingGuidePopupView distributeSettingGuideView;
@property (nonatomic) IESLiveAudienceInteractDistributeSettingPopupView distributeSettingView;
@property (nonatomic) IESLiveCountTimer cameraFrenquencyFirstPartTimer;
@property (nonatomic) IESLiveCountTimer cameraFrenquencySecondPartTimer;
@property (nonatomic) BOOL hitCameraFrenquencyControl;
@property (nonatomic) BOOL didUpdateLayout;
@property (nonatomic) IESLiveInteractiveMediaService mediaService;
@property (nonatomic) IESLiveInteractiveMediaService switchingMediaService;
@property (nonatomic) IESLiveIntimateChatLocalLayout localLayout;
@property (nonatomic) HTSInteractionStreamAppData appData;
@property (nonatomic) BOOL isWatcherConnect;
@property (nonatomic) BOOL hasHostSessionCallback;
@property (nonatomic) BOOL hasBindUser;
@property (nonatomic) BOOL isSwitchingToPK;
@property (nonatomic) BOOL isSwitchingFromPK;
@property (nonatomic) NSString filterLinkmicID;
@property (nonatomic) IESLivePaidLinkmicExplainCard paidLinkmicExplainCard;
@property (nonatomic) IESLiveLayoutPlaceholderView paidLinkmicExplainCardPlaceHolderView;
@property (nonatomic) BOOL showPaidLinkmicExplainCardAfterReceiveSEI;
@property (nonatomic) IESLiveRightBottomMutuallyExclusiveItem linkMicExplainCardItem;
@property (nonatomic) IESLiveRightBottomMutuallyExclusiveItem linkMicItem;
@property (nonatomic) IESLiveRightBottomMutuallyExclusiveItem paidGuideMicItem;
@property (nonatomic) IESLivePaidLinkmicExplainCard guideLinkmicCard;
@property (nonatomic) IESLiveLayoutPlaceholderView guideLinkmicCardPlaceHolderView;
@property (nonatomic) double lastShowPaidGuideViewTime;
@property (nonatomic) BOOL hasEnterRoom;
@property (nonatomic) BOOL enableMicDressButton;
@property (nonatomic) NSMutableArray micDressButtonTags;
@property (nonatomic) BOOL hasReceiveSEI;
@property (nonatomic) IESLiveInteractionAudienceLayoutManager layoutManager;
@property (nonatomic) BOOL shouldUseOrientationChange;
@property (nonatomic) BOOL iconShowFlog;
@property (nonatomic) BOOL audienceConnectOpen;
@property (nonatomic) <IESLiveRoomServiceAdapter> roomService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q mode;
@property (nonatomic) BOOL connected;
@property (nonatomic) IESLiveIntimateChatGuestListView guestListView;
@property (nonatomic) <IESLiveIntimateChatLayoutMachine> layoutMachine;
@property (nonatomic) NSString toastString;
@property (nonatomic) <IESLiveInteractiveUserService> userService;
@property (nonatomic) IESLiveChatRoomTracker chatRoomTracker;
@property (nonatomic) IESLiveChatRoomTrackerContext chatRoomTrackerContext;
- (BOOL)adminModeEnable;
- (void)audienceInteractiveRootPanel:permitApplicationOfUser:extraInfo:;
- (BOOL)couldSendToHost;
- (BOOL)didUpdateLayout;
- (id)filterLinkmicID;
- (id)guideLinkmicCardPlaceHolderView;
- (void)interactiveMediaServiceWillEnd:;
- (BOOL)isConnenctToRTC;
- (void)setHasBindUser:;
- (void)setLinkMicItem:;
- (void)setLocalLayout:;
- (void)setPerfSampler:;
- (void)setRoomService:;
- (void)setServerCtrlEntranceShowBlock:;
- (unsigned long long)supportSeiTypes;
- (void)addCommonParamsForConnectTrack:;
- (void)addHostEntrance;
- (id)cameraFrenquencySecondPartTimer;
- (void)closeLinkMicWithAudienceByForce;
- (BOOL)isInPaidLinkmic;
- (BOOL)isSwitchingToPK;
- (void)registChatRoomStatusDispatcher:;
- (void)renderWaitingApplicationNumTip:;
- (void)setToastString:;
- (void)switchSceneFromGiftPKWithMediaService:smallAudienceRequestView:;
- (void)addItemViewInToolbar;
- (void)addPreRequestPage:;
- (id)adminActions;
- (id)adminInteractiveRootPanel;
- (BOOL)adminRightEnable;
- (id)anchorInvitePanel;
- (void)applyConnectionForAudioModeWithApplySource:paidCount:limitedTime:reason:extraParams:;
- (void)applyConnectionWithEventExtra:applySource:;
- (void)applyForAudioModeConnection;
- (void)applyForAudioModeConnectionWithApplySource:;
- (void)applyForVideoModeConnection;
- (void)applyForVideoModeConnectionWithApplySource:;
- (id)applyTitle;
- (void)applyWithDefaultModeWithApplySource:;
- (void)askForLeave;
- (void)askForStopConnectionAction:;
- (void)askForStopConnectionForGuest:;
- (void)audienceApplyExpired;
- (BOOL)audienceConnectOpen;
- (void)audienceInteractiveRootPanel:fetchInvitableFriendsListWithCount:completion:;
- (void)audienceInteractiveRootPanel:inviteWithUserID:secUserID:sourcePage:;
- (void)audienceInteractiveRootPanel:willShowSettingPanel:;
- (void)audienceInteractiveRootPanelAdminApply:;
- (void)audienceInteractiveRootPanelEndInteract:;
- (void)audienceInteractiveRootPanelNeedToResetWaitingApplications:;
- (void)authenticationNofity:;
- (void)autoLinkMicIfNeeded;
- (void)bindIntimateChatStore;
- (void)bindStore:;
- (id)cameraFrenquencyFirstPartTimer;
- (void)cancelApplication;
- (void)changeAudicneChatStatus:;
- (void)changeWatcherConnect:;
- (id)chatRoomFuncationType;
- (void)clearSmallRequestView;
- (void)clickAudienceSettingBtn;
- (void)clickInteractionItem;
- (void)clickLinkMicEntrance;
- (void)clickLinkMicEntranceWithDiabledAdminPanel:isFromSeat:;
- (id)commonParamsForConnectTrack;
- (void)componentBindService;
- (void)componentDidAppear;
- (void)componentMount;
- (void)componentOrientationChanged:;
- (void)componentUnmount;
- (BOOL)couldSendToGuest;
- (BOOL)couldUnmountComponent;
- (id)curSamllViewFrame;
- (id)currentHostID;
- (id)customConfig;
- (void)dealWithError:needToPreApply:;
- (void)didChangedAudienceSetting:;
- (void)didClickApplyView;
- (void)didClickFanTicketView:;
- (void)didClickItemView:;
- (void)didConnectSuccess;
- (BOOL)didConnectToAnchor;
- (void)didJoinRTCChannelByAudienceWithScene:;
- (void)didSwitchConnectModeOn;
- (void)didUpdateAudienceSettings:;
- (id)diggDispatcher;
- (void)disableFullScreenButton;
- (id)distributeSettingGuideView;
- (id)distributeSettingView;
- (void)doApplyProcess;
- (void)doPreApply;
- (BOOL)enableApplyReason;
- (BOOL)enableAudienceMediaCaptureOpt;
- (void)enableFullScreenButton;
- (BOOL)enableInteractDistribute;
- (BOOL)enableMicDressButton;
- (BOOL)enableSendGiftToHost;
- (BOOL)enableUserPCNewLayout;
- (void)endInteractiveWithScene:;
- (void)endRevenueInteractWithScene:;
- (void)fetchGuestGiftSetting;
- (void)filterSessionBeforeSwitchToPK:;
- (id)guestInfoList;
- (id)guestListView;
- (id)guideLinkmicCard;
- (void)handleInteractiveItemDidTapped;
- (void)handleKeyboardHideNoti;
- (void)handleOrientationTransitionEnd;
- (BOOL)hasBindUser;
- (BOOL)hasEnterRoom;
- (BOOL)hasHostSessionCallback;
- (BOOL)hasRealNameVerified;
- (BOOL)hasReceiveSEI;
- (void)hideAdminPanel;
- (BOOL)hitCameraFrenquencyControl;
- (void)hitOpenCameraFrenquency;
- (BOOL)hostApplyEntranceEnabled;
- (id)hostApplyItemView;
- (BOOL)iconShowFlog;
- (id)interactUserList;
- (void)interactiveMediaService:didOfflineOfUid:sessions:reason:;
- (void)interactiveMediaService:firstRemoteVideoWithLinkmicUid:;
- (void)interactiveMediaService:receivesError:;
- (id)interactiveMediaService:reorderedInteractSessions:;
- (void)interactiveMediaService:videoSizeChangedOfUid:size:;
- (void)interactiveMediaServiceAppDidActive;
- (void)interactiveMediaServiceAppResignActive;
- (void)interactiveMediaServiceDidStart:;
- (id)intimateChatAudienceStore;
- (void)intimateChatOperationRootPanel:inviteUser:source:;
- (void)intimateChatOperationRootPanel:permitApply4User:source:;
- (void)intimateChatOperationRootPanelAdminOperate:;
- (void)intimateChatOperationRootPanelCallOthersTogetherApply:;
- (void)inviteUserWithSecID:userID:sourcePage:;
- (BOOL)isApplyingToJoinChannel;
- (BOOL)isGoingToRealNameVerified;
- (BOOL)isInAnonymousPaidLinkmicWithUserID:;
- (BOOL)isInteractStreaming;
- (BOOL)isInteractWithGuest;
- (BOOL)isInteractionInMatch;
- (BOOL)isInteractionRuning;
- (BOOL)isIntimateChatEnabled;
- (BOOL)isLandscapeStream;
- (BOOL)isLinkMicAudienceStatusWaiting;
- (BOOL)isMatchingInteractionEvent;
- (BOOL)isMoreToolsShowingInteractiveItem;
- (BOOL)isSwitchingFromPK;
- (BOOL)isUnifyIntimateChat;
- (BOOL)isVideoConnection;
- (BOOL)isWatcherConnect;
- (double)lastShowPaidGuideViewTime;
- (id)layoutMachine;
- (void)layoutOnInteraction;
- (id)linkLimitTime;
- (id)linkMicExplainCardItem;
- (id)linkMicItem;
- (id)linkPaidCount;
- (id)linkmicHost;
- (void)loadInteractiveBtnInMore;
- (void)loadMediaService;
- (void)loadMessageHandler;
- (id)localLayout;
- (void)mediaCaptureInterruptedWithStrategy:;
- (void)mediaCaptureResumeedWithStrategy:;
- (id)micDressButtonTags;
- (id)moreToolsItemView;
- (void)moveInteractiveConnection;
- (void)moveSmallRequestView;
- (BOOL)multiVideoEnable;
- (void)needFaceRecognition;
- (void)needIdentityAuthentication;
- (BOOL)needShowPaidLimitPage;
- (id)noticeActionCreator;
- (void)onActiveListDidChangeFrom:to:;
- (BOOL)onInteract;
- (void)onInteractionEnded;
- (void)onInteractionStart;
- (void)onIntimateChatLayoutResumeByPKEnd;
- (void)onIntimateChatLayoutSuspendByPKStart;
- (void)onParseredWithSEIResult:;
- (void)onShowAssistPhoneAlert;
- (void)onShowBindMobileAlert;
- (void)onShowUnderAgeAlert;
- (void)onStatusConnectEnd;
- (void)onStatusConnecting;
- (void)onSwitchToPK;
- (id)onlineUserWrapper:;
- (void)openIntimateChatInMSequence;
- (void)opt_showControlSheet;
- (void)p_clickCurrentButtonInfo;
- (id)p_currentButtonInfo;
- (BOOL)p_enablePaidLinkmicAddPrice;
- (BOOL)p_getSuccessApplidStatus;
- (void)p_guestOperation:sourcePage:fromPanel:;
- (void)p_hidePaidGuidemicCard;
- (void)p_hidePaidLinkmicExplainCard;
- (void)p_showPaidLinkMicGuideMicCard;
- (void)p_showPaidLinkmicExplainCardWithContent:;
- (void)p_trackGuestConnectSuccess:;
- (void)p_trackGuestConnectionOver;
- (void)p_trackLayoutShow;
- (void)p_trackLayoutWatchDuration;
- (void)p_trackWatchDuration;
- (void)p_updateMicDressButtonStatusWithSetting:;
- (void)p_updateSuccessApplidStatus;
- (id)paidApplyDefaultReason;
- (id)paidApplyPresetReason;
- (id)paidApplyReasonRequired;
- (id)paidGuideMicItem;
- (void)paidLinkmicAddPriceStatusChanged:addPriceValue:;
- (void)paidLinkmicDidReceiveAddPriceMessage:;
- (id)paidLinkmicExplainCard;
- (id)paidLinkmicExplainCardPlaceHolderView;
- (void)paidLinkmicExplainCardShowWithInfo:;
- (void)paidLinkmicOpenStatusChanged:;
- (void)paidLinkmicWaitingUserLeaveWithToast:;
- (id)perfSampler;
- (void)permissionChecked;
- (unsigned long long)pr_customViewStatusFromCurrentLinkMicStatus;
- (BOOL)processingMultiVideo;
- (id)pushStreamLifeCycle;
- (id)readedApplications;
- (void)removeAdminUI;
- (void)removeHostEntrance;
- (void)removeInteractiveFromMore;
- (void)removeInteractiveItem;
- (void)removeInteractiveItemFromToolbar;
- (void)removeMoreToolsItemView;
- (void)renderLinkMicStausOnItemViewWithStatus:;
- (void)renderToolBarItemStatus:;
- (id)reorderedLinkedUsers;
- (void)resetChatRoomTracker;
- (void)resumeLayout;
- (id)roleForLog;
- (id)roomService;
- (void)roomThemeNeedRefresh;
- (id)roomViewActionCreator;
- (id)schemaURLHandler;
- (BOOL)sendGiftToHostEnable;
- (id)serverCtrlEntranceShowBlock;
- (void)setAdminActions:;
- (void)setAdminInteractiveRootPanel:;
- (void)setAnchorInvitePanel:;
- (void)setAudienceConnectOpen:;
- (void)setAuthorizationService:;
- (void)setCameraFrenquencyFirstPartTimer:;
- (void)setCameraFrenquencySecondPartTimer:;
- (void)setCustomConfig:;
- (void)setDidUpdateLayout:;
- (void)setDiggDispatcher:;
- (void)setDistributeSettingGuideView:;
- (void)setDistributeSettingView:;
- (void)setEnableMicDressButton:;
- (void)setEnableSendGiftToHost:;
- (void)setFilterLinkmicID:;
- (void)setGuestListView:;
- (void)setGuideLinkmicCard:;
- (void)setGuideLinkmicCardPlaceHolderView:;
- (void)setHasEnterRoom:;
- (void)setHasHostSessionCallback:;
- (void)setHasRealNameVerified:;
- (void)setHasReceiveSEI:;
- (void)setHitCameraFrenquencyControl:;
- (void)setHostApplyItemView:;
- (void)setIconShowFlog:;
- (void)setIntimateChatAudienceStore:;
- (void)setIsConnenctToRTC:;
- (void)setIsGoingToRealNameVerified:;
- (void)setIsSwitchingFromPK:;
- (void)setIsSwitchingToPK:;
- (void)setIsWatcherConnect:;
- (void)setLastShowPaidGuideViewTime:;
- (void)setLayoutMachine:;
- (void)setLinkMicExplainCardItem:;
- (void)setMicDressButtonTags:;
- (void)setMoreToolsItemView:;
- (void)setNeedLayoutPlayer;
- (void)setNoticeActionCreator:;
- (void)setOnInteract:;
- (void)setPaidGuideMicItem:;
- (void)setPaidLinkmicExplainCard:;
- (void)setPaidLinkmicExplainCardPlaceHolderView:;
- (void)setPushStreamLifeCycle:;
- (void)setReadedApplications:;
- (void)setRoomViewActionCreator:;
- (void)setSchemaURLHandler:;
- (void)setShouldUseOrientationChange:;
- (void)setShowPaidLinkmicExplainCardAfterReceiveSEI:;
- (void)setSmallAudienceRequestView:;
- (void)setSwitchingMediaService:;
- (void)setSwitchingSmallRequestView:;
- (void)setVerifiedTimer:;
- (void)setVerifyConfig:;
- (void)setupSmallWindowViewWithAudio:;
- (BOOL)shouldRenderHostGiftIcon;
- (BOOL)shouldUseOrientationChange;
- (void)showAdminOperationPanelForGuest:;
- (void)showAdminPanel;
- (void)showAlertWhenInteractionEndedWith:isSelfDisconnect:;
- (void)showAnchorInvitationPanelWithNickName:imageURLs:isFromAdmin:giftMsg:;
- (void)showApplyPopupView;
- (void)showControlSheet;
- (void)showDistributeGuideViewWithSettingModel:;
- (void)showModeSelecter;
- (void)showNoMediaPermissionAlert:settingUrl:;
- (void)showNotChangeOrientationAlert;
- (void)showOnlyApplyModeSelecter;
- (BOOL)showPaidLinkmicExplainCardAfterReceiveSEI;
- (void)showPaidViewWithDefaultMode;
- (void)showToastWhenInterationEndedOnisSelfDisconnect:;
- (void)showUserPreView:trackerLabel:;
- (id)smallAudienceRequestView;
- (void)startInteractiveMode;
- (void)startInteractiveWithScene:;
- (void)startRTCInteract;
- (void)startRevenueInteractWithScene:;
- (void)stopAndQuit;
- (void)stopConnectionWithRequestSource:;
- (void)stopInteractiveConnection;
- (void)stopInteractiveMode;
- (void)stopInteractiveMode:;
- (void)stopInteractiveModeByForce;
- (void)stopInteractiveModeWithRequestSource:;
- (void)stopInteractiveModeWithRequestSource:completion:;
- (void)switchApplyStateFromGiftPKWithLinkMicID:interactiveMode:;
- (void)switchConnectMode;
- (void)switchSceneFromGiftPK;
- (void)switchSceneFromGiftPKWithMediaService:;
- (id)switchingMediaService;
- (id)switchingSmallRequestView;
- (id)toastString;
- (void)toolbarComponentRemovedReason:extra:;
- (void)toolbarReceiveComponent:completion:;
- (void)trackDistributionEvent:extraParams:;
- (void)trackIconShowByTurnOn;
- (void)trackIconShowWithRequestPage:;
- (void)trackIconShowWithRequestPage:isInPK:;
- (void)tryToVerify;
- (id)ultimateFanTicket;
- (void)updateAdminUnReadTipsView:;
- (void)updateClickInteractiveEntranceTimeStamp;
- (void)updateDistributionOption:;
- (void)updateFullScrrenButtonTypeWithlinkMicStatus:;
- (void)updateLayoutOfSessionViews:;
- (void)updateLayoutOnInteraction;
- (void)updateSmallWindowView;
- (BOOL)userInActiveList:;
- (BOOL)userInActiveOrWaitingList:;
- (id)userService;
- (id)verifiedTimer;
- (id)verifyConfig;
- (void)verifyRealnameSuccessed;
- (id)waitingList;
- (void)watch_setupGuestListView;
- (void)showToast:;
- (id)placeholderView;
- (void)setDispatcher:;
- (id)dispatcher;
- (id)item;
- (void)setConnected:;
- (id)layoutManager;
- (id)streamProvider;
- (BOOL)connected;
- (void)setStore:;
- (void)setPlaceholderView:;
- (long long)currentStatus;
- (id)authorizationService;
- (void)setStreamProvider:;
- (void)setItem:;
- (id)messageHandler;
- (void).cxx_destruct;
- (long long)mode;
- (id)store;
- (void)setMessageHandler:;
- (void)setLayoutManager:;
- (id)itemView;
- (void)setItemView:;
- (id)toolbarItem;
- (void)messageReceived:;
- (BOOL)canLeave;
- (void)setAppData:;
- (id)appData;
- (void)setToolbarItem:;
- (id)mediaService;
- (void)setMediaService:;
- (long long)currentSessionCount;
+ (BOOL)componentShouldActive:;
@end
