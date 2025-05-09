@interface AWEIMStreakPetElfPendantComponent : AWEIMComponentBase
@property (nonatomic) AWEIMStreakPetElfPendantView petElfContainView;
@property (nonatomic) NSString curColor;
@property (nonatomic) q curStage;
@property (nonatomic) q curPetId;
@property (nonatomic) BOOL hostVCDidAppear;
@property (nonatomic) BOOL hostVCFirstRenderDidAppear;
@property (nonatomic) BOOL hasGetAchievePageData;
@property (nonatomic) BOOL needTryShowInHostVCDidAppear;
@property (nonatomic) Q curFlamePetElfPendantStatus;
@property (nonatomic) BOOL isInStatusChange;
@property (nonatomic) BOOL isFirstShow;
@property (nonatomic) Q trackStatus;
@property (nonatomic) BOOL shouldTrackShowPendantTimeCost;
@property (nonatomic) double enterConversationTime;
@property (nonatomic) double initPendantContainerTime;
@property (nonatomic) double frontSendInitReadyTime;
@property (nonatomic) double sendUpdateEventTime;
@property (nonatomic) BOOL hasTrackFlamePetElfPendantShow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentContext;
- (void)onConversationDidUpdateWithConversation:;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (void)imStreakDataDidUpdateWithConversation:;
- (void)inputViewTypeDidChange:oldInputViewType:;
- (long long)curStage;
- (void)hostVC_afterFirstRender;
- (void)setTrackStatus:;
- (unsigned long long)trackStatus;
- (void)setIsFirstShow:;
- (BOOL)isFirstShow;
- (void)logWithExecutePhase:eventName:extra:;
- (void)pageLayoutCoordinateAnimationWithAnimated:fromLayout:toLayot:;
- (void)afterGetServerDataTryShowFlamePetElfPendantWithRequestInfo:;
- (BOOL)p_canShowFlamePetElfPendant;
- (void)p_trackPetElfShowWithUserSetHidePendant:;
- (void)setShouldTrackShowPendantTimeCost:;
- (void)setEnterConversationTime:;
- (BOOL)hostVCDidAppear;
- (void)setHostVCDidAppear:;
- (id)petElfContainView;
- (BOOL)hostVCFirstRenderDidAppear;
- (void)setHostVCFirstRenderDidAppear:;
- (void)setHasGetAchievePageData:;
- (unsigned long long)curFlamePetElfPendantStatus;
- (id)currentConversationCon;
- (void)checkPendantStatusWithConversation:requestSource:;
- (id)getConversationShortID;
- (void)trackClickTipsToHideWidget;
- (id)getConversation;
- (long long)getStreakStatusForTrackingWithConversation:;
- (id)getStreakPetCommonParamsForTracking;
- (void)setSendUpdateEventTime:;
- (BOOL)isInStatusChange;
- (double)sendUpdateEventTime;
- (void)setIsInStatusChange:;
- (BOOL)shouldTrackShowPendantTimeCost;
- (void)setFrontSendInitReadyTime:;
- (double)enterConversationTime;
- (double)frontSendInitReadyTime;
- (double)initPendantContainerTime;
- (id)curColor;
- (void)petElfPendantHasSendUpdateEvent;
- (void)setPetElfContainView:;
- (void)setCurFlamePetElfPendantStatus:;
- (void)setCurStage:;
- (void)setCurPetId:;
- (void)setCurColor:;
- (long long)curPetId;
- (id)getConversationID;
- (void)tryShowFlamePetElfPendant;
- (void)setInitPendantContainerTime:;
- (void)p_gotoAchievePage;
- (BOOL)hasGetAchievePageData;
- (BOOL)hasTrackFlamePetElfPendantShow;
- (void)setHasTrackFlamePetElfPendantShow:;
- (id)getServerData;
- (id)getCurrentMessageListPageLayoutInfo;
- (id)getPetInfoDict;
- (id)getConversationExt;
- (id)getConversationPeerUserID;
- (id)getIMMessageConversation;
- (void)petElfPendantHasGetFrontHideFinishSignal;
- (void)petElfPendantHasGetFrontSwitchOverSignal;
- (void)petElfPendantSaveCurrentPositionWithDict:;
- (void)petElfPendantHasGetFrontReadySignal;
- (void)petElfPendantHasShowSuccessSignal;
- (void)hidePetElfWidget;
- (void)trackLongPress;
- (BOOL)needTryShowInHostVCDidAppear;
- (void)setNeedTryShowInHostVCDidAppear:;
- (void)dealloc;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
