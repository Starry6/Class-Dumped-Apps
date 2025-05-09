@interface IESLiveMultiLinkerTeamTaskViewModel : NSObject
@property (nonatomic) IESLiveMultiLinkerTeamTaskModel taskModel;
@property (nonatomic) Q taskState;
@property (nonatomic) BOOL isTaskPhase;
@property (nonatomic) BOOL hadContributed;
@property (nonatomic) NSInteger teamWorkType;
@property (nonatomic) BOOL isRoomOwner;
@property (nonatomic) NSString currentLoginUser;
@property (nonatomic) NSString anchorUserID;
@property (nonatomic) NSString teammateUidOf2V2TeamBattle;
@property (nonatomic) BOOL didReceiveTeamTaskMsg;
@property (nonatomic) BOOL showedNotice;
@property (nonatomic) NSInteger taskResult;
@property (nonatomic) NSInteger teammateTaskResult;
@property (nonatomic) <IESLiveCompoundSubscription> disposable;
- (void)judgeTaskResult;
- (void)setIsRoomOwner:;
- (void)setIsTaskPhase:;
- (id)anchorUserID;
- (id)currentLoginUser;
- (BOOL)didReceiveTeamTaskMsg;
- (id)disposable;
- (void)forceChangeStateToEggNotice;
- (void)goalFailed;
- (BOOL)hadContributed;
- (void)handleWaitTaskResultTimeOut;
- (id)initWithDIContext:anchorModel:;
- (BOOL)isRoomOwner;
- (BOOL)isTaskPhase;
- (void)judgeIndependentTaskResult;
- (void)observeDoingTask;
- (void)observeReward;
- (BOOL)onlyOneAnchorAchieveGoal;
- (id)pkSource;
- (void)resolveTeamTaskMessage:;
- (void)setAnchorUserID:;
- (void)setCurrentLoginUser:;
- (void)setDidReceiveTeamTaskMsg:;
- (void)setDisposable:;
- (void)setHadContributed:;
- (void)setShowedNotice:;
- (void)setTaskModel:;
- (void)setTaskResult:;
- (void)setTeamWorkType:;
- (void)setTeammateTaskResult:;
- (void)setTeammateUidOf2V2TeamBattle:;
- (BOOL)showedNotice;
- (id)taskModel;
- (int)taskResult;
- (int)teamWorkType;
- (int)teammateTaskResult;
- (id)teammateUidOf2V2TeamBattle;
- (void)trackTeamTaskEvent:extra:;
- (void)trackTeamTaskResult:;
- (void)updateStateWithRemainTime:;
- (unsigned long long)taskState;
- (void)setTaskState:;
- (void).cxx_destruct;
- (void)goalAchieved;
@end
