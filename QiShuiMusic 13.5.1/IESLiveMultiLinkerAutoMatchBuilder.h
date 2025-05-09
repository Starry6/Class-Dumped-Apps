@interface IESLiveMultiLinkerAutoMatchBuilder : NSObject
@property (nonatomic) <IESLiveMultiLinkerProvider> multiLinkerProvider;
@property (nonatomic) IESLiveMultiLinkerModel mLinkerModel;
@property (nonatomic) IESLiveMultiLinkerApi multiLinkerApi;
@property (nonatomic) IESLiveCountTimer autoMatchTimer;
@property (nonatomic) NSString participantStr;
@property (nonatomic) NSMutableArray participantAnchorIds;
@property (nonatomic) HTSLivePopUpView autoMatchPanel;
@property (nonatomic) IESLiveRevenueInteractAutoMatchBuilder autoMatchCommonBuilder;
@property (nonatomic) BOOL hadShowMathingTips;
@property (nonatomic) BOOL hadShowSpeedUpTips;
@property (nonatomic) BOOL disableClickAutoMatch;
@property (nonatomic) BOOL isLargeMatchInvitee;
@property (nonatomic) double autoMatchStartTime;
@property (nonatomic) double speedupStartTime;
@property (nonatomic) HTSLiveRoom largeAutoMatchRivalRoom;
@property (nonatomic) NSDictionary multiAutoMatchParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cacheMatchParticipantInfoIfNeed;
- (id)autoMatchCommonBuilder;
- (id)autoMatchPanel;
- (double)autoMatchStartTime;
- (id)autoMatchTimer;
- (id)baseMonitorParams;
- (void)bindAction;
- (void)buildMultiAutoMatchModelWithInfo:;
- (id)buildMultiMatchViewWithRecommendInfo:;
- (unsigned long long)calculateMatchedDuration;
- (unsigned long long)calculateSpeedUpDuration;
- (void)cancelMultiAutoMatchWithType:;
- (void)cancelMultiAutoMatchWithType:withRequest:;
- (void)cancelMultiAutoMatchWithType:withRequest:isSuccess:;
- (id)currentUserService;
- (void)didClickCancelButton;
- (void)didClickSpeedUpButton;
- (void)didSetAttachingDIContext;
- (BOOL)disableClickAutoMatch;
- (void)endRevenueInteractWithScene:;
- (void)fastStartRandomTeamMatchWithAutoMatchInfo:;
- (BOOL)hadShowMathingTips;
- (BOOL)hadShowSpeedUpTips;
- (void)handleMulti2v2With:;
- (void)handleMultiBrawlWithRivals:matchType:;
- (void)inviteRandomIndividualRival:matchType:;
- (BOOL)isLargeMatchInvitee;
- (BOOL)isMultiLinkmicAutoMatchForMatchType:;
- (id)largeAutoMatchRivalRoom;
- (void)mLinkNotiViewControllerAcceptWithType:;
- (void)mLinkNotiViewControllerRejectWithType:isTimeout:;
- (id)mLinkerModel;
- (id)matchTypeTrackString;
- (id)multiAutoMatchModel;
- (id)multiAutoMatchParams;
- (void)multiAutoMatchSuccessWithMatchType:;
- (void)multiAutoMatchSuccessWithMatchType:withRequest:;
- (void)multiInviteUserWithRoom:signExtra:inviteType:inviteeScene:inviteeFollowUserIds:matchType:completion:;
- (id)multiLinkerApi;
- (id)multiLinkerProvider;
- (id)multiMatchAnchorType;
- (void)onReceivedBattleMatchInviteMessage:;
- (void)p_acceptInvitation;
- (void)p_callCancelMultiAutoMatchWithType:;
- (void)p_logEvent:extra:;
- (void)p_rejectAutoMatchInvitation;
- (id)participantAnchorIds;
- (id)participantStr;
- (unsigned long long)sceneForRoom:;
- (void)setAutoMatchCommonBuilder:;
- (void)setAutoMatchPanel:;
- (void)setAutoMatchStartTime:;
- (void)setAutoMatchTimer:;
- (void)setDisableClickAutoMatch:;
- (void)setHadShowMathingTips:;
- (void)setHadShowSpeedUpTips:;
- (void)setIsLargeMatchInvitee:;
- (void)setLargeAutoMatchRivalRoom:;
- (void)setMLinkerModel:;
- (void)setMultiAutoMatchParams:;
- (void)setMultiLinkerApi:;
- (void)setMultiLinkerProvider:;
- (void)setParticipantAnchorIds:;
- (void)setParticipantStr:;
- (void)setSpeedupStartTime:;
- (id)setupAutoMatchViewWithRecommendInfo:type:;
- (void)setupMultiAutoMatchTimer;
- (void)showAutoMatchAlertPanel;
- (void)showAutoMatchPanel:;
- (void)showAutoMatchTipsOnPKItemIfNeeded;
- (double)speedupStartTime;
- (BOOL)startMultiAutoMatch:;
- (BOOL)startMultiAutoMatch:autoMatchInfo:params:;
- (void)switchToRandomTeamLocalAndStreamLayoutWithAnchorExtraModel:;
- (void)trackConnectionInviteWithSource:extraParams:;
- (void)trackWithEvent:extra:;
- (void)tryMultiAutoMatch:isHighWay:params:;
- (void)updateMultiAutoMatchTimer;
- (void)updateMultiAutoMatchWithMessage:;
- (id)initWithContext:;
- (void).cxx_destruct;
@end
