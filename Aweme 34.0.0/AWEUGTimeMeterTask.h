@interface AWEUGTimeMeterTask : NSObject
@property (nonatomic) BOOL hasLogUpdateAfterBecomeActivity;
@property (nonatomic) AWECampaignWatchTaskModel watchTaskModel;
@property (nonatomic) NSArray triggers;
@property (nonatomic) <AWEUGSceneServiceProtocol> sceneService;
@property (nonatomic) <AWEUGCampaignTaskTimerProtocol> timerHelper;
@property (nonatomic) NSArray outputers;
@property (nonatomic) NSNumber currentProgress;
@property (nonatomic) NSString currentUID;
@property (nonatomic) Q currentState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)taskToken;
- (id)commonParam;
- (id)currentUID;
- (double)firstInitTime;
- (void)taskDidEnterScene:;
- (void)setCurrentUID:;
- (void)taskReportFinish;
- (id)watchTaskModel;
- (void)didTaskUpdateWithProgress:task:;
- (void)didTaskStatusChanged:task:;
- (void)setWatchTaskModel:;
- (void)startCountDownForTaskTrigger:withReason:;
- (void)pauseCountDownForTaskTrigger:withReason:;
- (void)taskDidLeaveScene:;
- (id)outputers;
- (void)awe_ugOutputersTaskDidStart;
- (void)awe_ugOutputersTaskWillStartTiming;
- (void)awe_ugOutputersTaskDidFinishTask;
- (void)awe_ugOutputersTaskDidPauseForReason:;
- (void)awe_ugOutputersTaskDidEnterScene:;
- (void)awe_ugOutputersTaskDidLeaveScene:;
- (void)awe_ugOutputersTaskUpdateProgress:withTotalTime:;
- (void)awe_ugOutputersTaskDidFinishReportWithModel:;
- (void)setupTask;
- (void)setTimerHelper:;
- (void)setOutputers:;
- (void)setSceneService:;
- (id)sceneService;
- (void)setupActiveObserver;
- (id)timerHelper;
- (void)setHasLogUpdateAfterBecomeActivity:;
- (void)taskStartTiming;
- (void)triggerTaskIfNeededForTrigger:withReason:;
- (void)taskPauseForReason:;
- (BOOL)hasLogUpdateAfterBecomeActivity;
- (void)taskDidFinish;
- (void)taskInitWithJSON:;
- (void)setCurrentState:;
- (void)dealloc;
- (id)triggers;
- (id)currentProgress;
- (void)setTriggers:;
- (void)setCurrentProgress:;
- (unsigned long long)currentState;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (id)taskID;
- (void)taskStart;
@end
