@interface IESLivePKGuestAudienceInstance : NSObject
@property (nonatomic) <IESLivePushStreamLifeCycle> pushStreamLifeCycle;
@property (nonatomic) <IESLiveRealStreamingProviderAdapter> streamProvider;
@property (nonatomic) IESLivePKGuestMuteStateManager muteStateManager;
@property (nonatomic) IESLivePKChatGuestListView pkGuestListView;
@property (nonatomic) IESLivePKEventTransparentView anchorEmojiContainer;
@property (nonatomic) IESLivePKGuestOperatePanelView panelView;
@property (nonatomic) UIView beautyView;
@property (nonatomic) <IESLivePKGuestAudienceBuilderService> interactStore;
@property (nonatomic) IESLivePKGuestTrackerContext guestTrackerContext;
@property (nonatomic) @? beautyStartBlock;
@property (nonatomic) @? beautyCancelBlock;
@property (nonatomic) IESLiveCountTimer checkLinkerStatusTmer;
@property (nonatomic) BOOL hasMutedOnJoinChannel;
@property (nonatomic) BOOL onInteract;
@property (nonatomic) BOOL inBeautyProcess;
@property (nonatomic) IESLiveInteractiveMediaService mediaService;
@property (nonatomic) UIView<IESLiveSmallAudienceRequestViewAdapter> smallAudienceRequestView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)inBeautyProcess;
- (void)interactiveMediaServiceWillEnd:;
- (id)pkGuestListView;
- (id)anchorEmojiContainer;
- (id)beautyCancelBlock;
- (id)beautyStartBlock;
- (id)beautyView;
- (id)checkLinkerStatusTmer;
- (void)clearGuestView;
- (void)clearSmallRequestView;
- (long long)currentCameraPosition;
- (id)currentLayoutForGuest;
- (unsigned long long)currentSceneForGuest;
- (void)didClickEmptyView:;
- (void)didClickItemView:;
- (void)didConnectSuccess;
- (void)didOwnPreViewAddToList;
- (void)didSetAttachingDIContext;
- (void)didSwitchConnectModeOn;
- (void)didUpdateOppositeRoomSilence;
- (void)didUpdateServerLinkTypeSucceed:actively:;
- (id)emojiContainerForUserID:isInteractiveEmoji:;
- (BOOL)enableAudienceMediaCaptureOpt;
- (id)guestTrackerContext;
- (BOOL)hasMutedOnJoinChannel;
- (id)initWithDiContext:;
- (id)interactStore;
- (void)interactiveMediaService:didOfflineOfUid:sessions:reason:;
- (void)interactiveMediaService:didUpdatedSessionsLocalLayout:;
- (void)interactiveMediaService:firstFrameRenderCallback:;
- (void)interactiveMediaService:firstRemoteVideoWithLinkmicUid:;
- (void)interactiveMediaService:receivesError:;
- (void)interactiveMediaServiceAppDidActive;
- (void)interactiveMediaServiceAppResignActive;
- (void)interactiveMediaServiceDidStart:;
- (BOOL)isAudioModeOn;
- (BOOL)isCameraOpen;
- (BOOL)isUserConnected:;
- (void)loadMediaService;
- (void)mediaCaptureInterruptedWithStrategy:;
- (void)mediaCaptureResumeedWithStrategy:;
- (void)moveInteractiveConnection;
- (void)moveSmallRequestView;
- (void)muteOthers:mute:;
- (void)muteSelf:;
- (void)muteStateDidChange:reason:;
- (BOOL)muteStateForUser:;
- (id)muteStateManager;
- (void)onBusinessPrepare;
- (void)onGuestMute:;
- (BOOL)onInteract;
- (void)onInteractionEnded;
- (void)onPKCloseWithGuest;
- (void)openBeautySettingPanelBeforeVideoInteractionWithStartBlock:cancelBlock:;
- (void)openBeautySettingPanelDuringVideoInteraction:;
- (void)overturnCamera;
- (void)p_muteOnJoinChannelIfNeeded;
- (void)p_removeGuestListView;
- (void)p_startCheckLinkerStatus;
- (void)p_startCheckLinkerStatusCountDownTimerWithTimeInterval:;
- (void)p_stopCheckLinkerStatus;
- (void)p_trackGuestConnectionOver:;
- (id)panelView;
- (id)pushStreamLifeCycle;
- (void)renderToolBarApplyStatus:;
- (id)roomModel;
- (void)setAnchorEmojiContainer:;
- (void)setBeautyCancelBlock:;
- (void)setBeautyStartBlock:;
- (void)setBeautyView:;
- (void)setCheckLinkerStatusTmer:;
- (void)setGuestTrackerContext:;
- (void)setHasMutedOnJoinChannel:;
- (void)setInBeautyProcess:;
- (void)setInteractStore:;
- (void)setMuteStateManager:;
- (void)setOnInteract:;
- (void)setPanelView:;
- (void)setPkGuestListView:;
- (void)setPushStreamLifeCycle:;
- (void)setSmallAudienceRequestView:;
- (void)setupGuestListView:;
- (void)setupGuestListView:height:;
- (void)setupSmallWindowViewWithAudio:cameraPreview:;
- (void)showControlPanelForSelf;
- (void)showGuestBeautyPopupViewBeforeVideoInteraction;
- (void)showGuestBeautyPopupViewDuringVideo:;
- (void)showGuestBeautyPopupViewDuringVideoInteraction;
- (void)showGuestBeautyPopupViewWithType:startBlock:cancelBlock:;
- (void)showPanelWithConfig:requestPage:;
- (id)smallAudienceRequestView;
- (void)startRTCInteract;
- (void)stopAndQuit;
- (void)stopConnectedWithUserID:;
- (void)stopInteractiveConnection;
- (void)stopInteractiveMode;
- (void)switchConnectMode;
- (void)switchSceneFromBigPartyWithMediaService:cameraPreview:;
- (void)trackGuestConnectSuccess;
- (void)turnOnCameraByOther:;
- (void)turnOnCameraBySelf:;
- (void)updateGuestListViewPosition;
- (void)updateLayoutWithAppData:;
- (void)updateSessionsLocalLayout:;
- (void)updateSmallWindowView;
- (id)userService;
- (void)showToast:;
- (id)streamProvider;
- (void)dealloc;
- (void)setStreamProvider:;
- (void)stopConnection;
- (void).cxx_destruct;
- (id)mediaService;
- (void)setMediaService:;
@end
