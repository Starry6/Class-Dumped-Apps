@interface IESLivePKGuestAudiencePlugin : NSObject
@property (nonatomic) IESLivePKGuestAudienceBuilder guestBuilder;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) <IESLiveVerifyConfigAdapter> verifyConfig;
@property (nonatomic) <IESLiveAuthorizationServiceAdapter> authorizationService;
@property (nonatomic) <IESLiveNoticeActionsAdapter> noticeActionCreator;
@property (nonatomic) IESLivePKGuestReceiveInvitationPanel anchorInvitePanel;
@property (nonatomic) BOOL hasRealNameVerified;
@property (nonatomic) BOOL isGoingToRealNameVerified;
@property (nonatomic) IESLiveCountTimer verifiedTimer;
@property (nonatomic) HTSInteractionStreamAppData appData;
@property (nonatomic) BOOL isWatcherConnect;
@property (nonatomic) BOOL enteredRoom;
@property (nonatomic) <IESLivePKGuestAudienceBuilderService> audBuilderService;
@property (nonatomic) NSArray readedApplications;
@property (nonatomic) IESLivePKGuestInteractiveRootPanel adminOperatePanel;
@property (nonatomic) IESLivePKGuestInteractiveRootPanelViewModel adminOperatePanelViewModel;
@property (nonatomic) IESLivePKGuestAudienceInstance guestInstance;
@property (nonatomic) BOOL isSwitchConnect;
@property (nonatomic) BOOL isSwitchingToMultiNormal;
@property (nonatomic) BOOL linkListLoaded;
@property (nonatomic) IESLivePKGuestApplyListPopUpView applyListPopupView;
@property (nonatomic) IESLivePKGuestApplyListPopUpViewModel applyListPopupViewModel;
@property (nonatomic) BOOL hasCancelWaiting;
@property (nonatomic) UIView beautyView;
@property (nonatomic) UIView<IESLiveInteractionGuestPreviewViewAdapter> cameraPreview;
@property (nonatomic) BOOL pkWithGuest;
@property (nonatomic) BOOL switchingFlag;
@property (nonatomic) BOOL pkingStateReceived;
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) IESLivePKGuestTrackerContext guestTrackerContext;
@property (nonatomic) IESLivePKGuestTrackHandler guestTrackerHandler;
@property (nonatomic) IESLivePKGuestInteractSettingHandler settingHandler;
@property (nonatomic) BOOL isBigPartyMode;
- (BOOL)adminModeEnable;
- (void)setPkWithGuest:;
- (BOOL)shouldIgnoreCameraRemoteControl;
- (unsigned long long)supportSeiTypes;
- (void)closeLinkMicWithAudienceByForce;
- (id)initWithDiContext:trackContext:;
- (BOOL)isSwitchConnect;
- (void)renderWaitingApplicationNumTip:;
- (void)setEnteredRoom:;
- (id)adminOperatePanel;
- (id)adminOperatePanelViewModel;
- (BOOL)adminRightEnable;
- (id)anchorInvitePanel;
- (id)appendKeyWithUserID:;
- (void)applyConnectionForAudioModeWithApplySource:paidCount:limitedTime:reason:extraParams:;
- (void)applyConnectionWithEventExtra:applySource:;
- (void)applyForAudioModeConnection;
- (void)applyForAudioModeConnectionWithApplySource:;
- (void)applyForConnection;
- (void)applyForVideoModeConnection;
- (void)applyForVideoModeConnectionWithApplySource:;
- (void)applyListPopUpViewDidClickTopRightBtn:;
- (id)applyListPopupView;
- (id)applyListPopupViewModel;
- (void)askForLeave;
- (void)askForStopConnection;
- (void)askForStopConnectionAction:;
- (id)audBuilderService;
- (id)beautyView;
- (void)bindStore:;
- (id)cameraPreview;
- (void)changeWatcherConnect:;
- (void)componentContainerFrameChanged;
- (BOOL)couldUnmountComponent;
- (long long)currentCameraPosition;
- (id)currentLayoutForGuest;
- (unsigned long long)currentSceneForGuest;
- (void)dealWithError:;
- (void)didChangePKStateFrom:to:;
- (void)didSetAttachingDIContext;
- (void)doApplyProcess;
- (id)emojiContainerForUserID:isInteractiveEmoji:;
- (BOOL)enableAudiencePreapply;
- (void)endLiveWithScource:;
- (BOOL)enteredRoom;
- (id)generateFastMatchConfig;
- (id)guestBuilder;
- (id)guestInstance;
- (id)guestTrackerContext;
- (id)guestTrackerHandler;
- (void)handleGuestSeatDidTapped;
- (void)handleInteractiveItemDidTapped;
- (void)handlePreApply;
- (BOOL)hasCancelWaiting;
- (BOOL)hasRealNameVerified;
- (void)hideAdminPanel;
- (BOOL)isBigPartyMode;
- (BOOL)isCameraOpen;
- (BOOL)isGoingToRealNameVerified;
- (BOOL)isSwitchingToMultiNormal;
- (BOOL)isWatcherConnect;
- (BOOL)linkListLoaded;
- (BOOL)linkMicConnected;
- (void)loadGuestInstance;
- (void)loadLinkListIfNeeded;
- (void)needIdentityAuthentication;
- (id)noticeActionCreator;
- (void)onBusinessPrepare;
- (void)onPKCloseWithGuest;
- (void)onPKFinish;
- (void)onParseredWithSEIResult:;
- (void)onShowBindMobileAlert;
- (void)onShowUnderAgeAlert;
- (void)onStatusConnectEnd;
- (void)onStatusConnecting;
- (void)openBeautySettingPanelBeforeVideoInteractionWithStartBlock:cancelBlock:;
- (void)overturnCamera;
- (void)permissionChecked;
- (void)pkGuestInteractiveRootPanel:inviteWithUserID:secUserID:sourcePage:;
- (void)pkGuestInteractiveRootPanel:inviteWithUserID:secUserID:sourcePage:params:;
- (void)pkGuestInteractiveRootPanel:permitApplicationOfUser:extraInfo:;
- (void)pkGuestInteractiveRootPanelAdminApply:;
- (void)pkGuestInteractiveRootPanelNeedToResetWaitingApplications:;
- (BOOL)pkWithGuest;
- (BOOL)pkingStateReceived;
- (unsigned long long)pr_customViewStatusFromCurrentLinkMicStatus;
- (void)preapplyManagerDidSucceedInCancellingPreapply:;
- (void)preapplyManagerDidSucceedInPreapplying:;
- (id)readedApplications;
- (void)removeAdminUI;
- (void)renderToolBarApplyStatus:;
- (id)roomModel;
- (void)setAdminOperatePanel:;
- (void)setAdminOperatePanelViewModel:;
- (void)setAnchorInvitePanel:;
- (void)setApplyListPopupView:;
- (void)setApplyListPopupViewModel:;
- (void)setAudBuilderService:;
- (void)setAuthorizationService:;
- (void)setBeautyView:;
- (void)setCameraPreview:;
- (void)setGuestBuilder:;
- (void)setGuestInstance:;
- (void)setGuestTrackerContext:;
- (void)setGuestTrackerHandler:;
- (void)setHasCancelWaiting:;
- (void)setHasRealNameVerified:;
- (void)setIsBigPartyMode:;
- (void)setIsGoingToRealNameVerified:;
- (void)setIsSwitchConnect:;
- (void)setIsSwitchingToMultiNormal:;
- (void)setIsWatcherConnect:;
- (void)setLinkListLoaded:;
- (void)setNoticeActionCreator:;
- (void)setPkingStateReceived:;
- (void)setReadedApplications:;
- (void)setRoomModel:;
- (void)setSettingHandler:;
- (void)setSwitchingFlag:;
- (void)setTrackContext:;
- (void)setVerifiedTimer:;
- (void)setVerifyConfig:;
- (id)settingHandler;
- (void)showAdminOperatePanel;
- (void)showAdminOperationPanelForGuest:;
- (void)showAdminOperationRootPanel;
- (void)showAdminPanel;
- (void)showAnchorInvitationPanelWithNickName:imageURLs:isFromAdmin:;
- (void)showApplyListPopupView;
- (void)showGuestBeautyPopupViewWithType:startBlock:cancelBlock:;
- (void)showOnlyApplyModeSelecter;
- (void)showToastWhenInterationEndedOnisSelfDisconnect;
- (void)showToolBarInteractiveItemDot:;
- (void)showToolBarInteractiveItemTip:;
- (void)stopAndHidePreView;
- (void)stopConnectionWithRequestSource:;
- (void)switchApplyStateFromBigPartyWithLinkMicID:interactiveMode:;
- (void)switchApplyStateFromMultiNormalWithLinkMicID:interactiveMode:;
- (void)switchPreApplyStateFromBigPartyWithDisplayText:;
- (void)switchSceneFromBigPartyWithMediaService:cameraPreview:;
- (BOOL)switchingFlag;
- (id)trackContext;
- (void)trackWatchDuration;
- (void)tryToVerify;
- (void)turnOnCameraByOther:;
- (void)turnOnCameraBySelf:;
- (void)unloadGuestInstance;
- (void)updateAdminUnReadTipsView:;
- (void)updateApplyListPopupViewOnLinkMicStatusUpdate;
- (void)updateToolBarInteractiveItemDot:;
- (BOOL)userInActiveOrWaitingList:;
- (id)userService;
- (id)verifiedTimer;
- (id)verifyConfig;
- (void)verifyRealnameSuccessed;
- (void)showToast:;
- (id)authorizationService;
- (void).cxx_destruct;
- (void)messageReceived:;
- (void)setAppData:;
- (id)appData;
@end
