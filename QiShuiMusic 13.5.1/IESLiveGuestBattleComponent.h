@interface IESLiveGuestBattleComponent : IESLiveInteractComponentBase
@property (nonatomic) IESLiveGuestBattleStore store;
@property (nonatomic) IESLiveGuestBattleModel battleModel;
@property (nonatomic) HTSEventForwardingView playgroundView;
@property (nonatomic) UIView battlerRoleChangeIconView;
@property (nonatomic) IESLiveCountTimer battleTimer;
@property (nonatomic) BOOL isValidDynamicLynxVersion;
@property (nonatomic) NSNumber startLinkTimestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)calculateIconFrameToPlayground:;
- (void)cleanUI;
- (id)dressID;
- (BOOL)isInGuestBattle;
- (void)setBattleModel:;
- (void)clearPrevGuestBattleScoreIfNeed;
- (long long)guestBattleType;
- (void)onSettleTimeOut;
- (void)setBattleTimer:;
- (void)stopBattleTimer;
- (id)battleModel;
- (id)battleTimer;
- (id)battlerRoleChangeIconView;
- (void)componentBindContext;
- (void)componentDidChangedFromLayout:toLayout:;
- (void)componentDidJoinChannel;
- (void)componentDidLeaveChannel;
- (void)componentDidUpdatedGuestList:;
- (void)componentEnterRoom;
- (void)componentMount;
- (void)componentUnmount;
- (void)didUpdateBattlersInfo:needAnimation:;
- (void)doAvatarAnimation:url:type:completion:;
- (void)doBattlePhaseStartAnimWithBattleSubStage:completion:;
- (void)doBattlePhaseStartAnimWithCompletion:;
- (void)doBattlerRoleAnimationWithConfig:completion:;
- (void)doBattlerRoleChangeAnimationWithConfig:completion:;
- (void)doBattlerRoleLargerAnimationWithRole:crownLevel:battleScoreView:;
- (void)doVictoryAnimation:;
- (BOOL)enableDynamicGuestBattle;
- (BOOL)enableGuestBattleEntrance:;
- (void)finishGuestBattleManually;
- (id)getCurrentUIAdaptor;
- (id)getFuzzyUpgradeStr:;
- (id)guestBattleDefaultBackGround;
- (void)guestBattleDressConfigChangeAction;
- (id)guestBattleID;
- (id)guestBattleInfoViewMap;
- (id)guestBattleScoreMap;
- (id)guestBattleScoreViewMap;
- (id)guestBattleTrackDic;
- (id)guestBattleTypeForTrack;
- (int)guestBattleUiType;
- (BOOL)isInBigPartyNonOverlappingLayout;
- (BOOL)isInNativeGuestBattle;
- (BOOL)isValidDynamicLynxVersion;
- (void)loadMessageHandlers;
- (void)onGuestBattleFinish;
- (void)onGuestBattlePause;
- (void)onGuestBattleResume;
- (void)onGuestBattleSettleFromBattle;
- (void)onGuestBattleSettleFromNone;
- (void)onGuestBattleStartFromNone;
- (void)onGuestBattleStartFromSettle;
- (void)pauseGuestBattle;
- (id)playgroundView;
- (void)prepareGuestBattlePlayground;
- (void)reAddBattlePlaygroundView;
- (void)resumeGuestBattle;
- (void)setBattlerRoleChangeIconView:;
- (void)setIsValidDynamicLynxVersion:;
- (void)setPlaygroundView:;
- (void)setStartLinkTimestamp:;
- (BOOL)shouldUpdateBattlerRole:uid:;
- (BOOL)shouldUseRealScore:;
- (void)showBattleFinishToast:;
- (void)showGuestBattleControlPanel:;
- (void)showGuestBattleRankPanel;
- (void)showGuestBattleSceneChangeConfirmModalDialogWithSceneName:actionName:confirmBlock:cancelBlock:;
- (void)showGuestBattleSettingPanel;
- (void)showGuestBattleStartToastForGuest;
- (void)showLynxGuestBattleControlPanel:;
- (void)startBattleTimer;
- (void)startGuestBattleWithScoreType:duration:loserNum:isAnchorInvolved:uiType:;
- (id)startLinkTimestamp;
- (void)startOneMoreGuestBattle;
- (void)startSettleTimer;
- (void)stopBattlerRoleAnimationWithConfig:;
- (void)trackPlayModeLink;
- (void)trackPlayModeLinkDuration;
- (void)updateBattlerRoleAvatarWithGuestInfoView:uid:role:level:force:completion:;
- (void)updateGuestBattleInfoWithUserID:;
- (void)updateGuestBattleScoreViews:;
- (void)updateGuestBattleScoreViews:needAnimation:;
- (void)dealloc;
- (void)setStore:;
- (BOOL)isAnchor;
- (void).cxx_destruct;
- (id)resource;
- (id)store;
@end
