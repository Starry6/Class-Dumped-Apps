@interface AWETimingCloseManager : NSObject
@property (nonatomic) q totalCountdownTime;
@property (nonatomic) q remainCountdownTime;
@property (nonatomic) Q timingCloseType;
@property (nonatomic) AWEAwemeModel fromModel;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSDate lastResignDate;
@property (nonatomic) BOOL pendingTimingCloseArrived;
@property (nonatomic) q remainPollingTimes;
@property (nonatomic) BOOL shouldShowAlert;
@property (nonatomic) NSDictionary liveEngineInfo;
@property (nonatomic) AWETimingCloseTimeSelectedHandler timeSelectedHandler;
@property (nonatomic) q preTime;
@property (nonatomic) Q timingClosePreType;
@property (nonatomic) NSString prePage;
@property (nonatomic) @? onAlertDismissAction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (id)fromModel;
- (void)setFromModel:;
- (BOOL)isShowingTimingCloseAlert;
- (void)onAppDidEnterBackground;
- (void)teenModeDidChange:isLogout:;
- (id)prePage;
- (void)setPrePage:;
- (void)basicModeDidChange:;
- (long long)totalCountdownTime;
- (void)feedDidEndDisplayCell:;
- (BOOL)shouldShowAlert;
- (void)setLastResignDate:;
- (id)lastResignDate;
- (void)timingCloseArrivePolling;
- (BOOL)enableAntiAddictAvoid;
- (id)dismissablePresentedScenes;
- (unsigned long long)timingCloseType;
- (void)setTimingCloseType:;
- (void)pauseLiveEngineIfNeeded;
- (void)setTimingCloseTotalTime:;
- (void)resumeLiveEngineIfNeeded;
- (void)setTimingCloseOptionType:;
- (void)setFromModelWithModel:;
- (id)onAlertDismissAction;
- (BOOL)showAlertIfNeeded;
- (void)onAppDidBecomeActiveFromBackground;
- (BOOL)enableScreenAutoLock;
- (void)setTotalCountdownTime:;
- (void)setRemainCountdownTime:;
- (void)setPendingTimingCloseArrived:;
- (void)setRemainPollingTimes:;
- (void)setShouldShowAlert:;
- (void)showTimingCloseToastIdNeeded;
- (void)publishBDXEvent;
- (BOOL)enableTimingClose;
- (long long)remainCountdownTime;
- (long long)preTime;
- (unsigned long long)timingClosePreType;
- (long long)maxPollingTimes;
- (BOOL)pendingTimingCloseArrived;
- (void)silentPauseBackgroundIfNeeded;
- (BOOL)isHighPriorityAvoidScene;
- (BOOL)isLowPriorityAvoidScene;
- (long long)remainPollingTimes;
- (void)pauseLiveEngineIfNeededWithForbid:;
- (id)timeSelectedHandler;
- (void)showTimeSelectedSheetWithPrePage:;
- (BOOL)enablePauseLiveEngine;
- (id)decideLiveEngineInfoFrom:;
- (void)setLiveEngineInfo:;
- (id)liveEngineInfo;
- (BOOL)isInRecommendFeed;
- (BOOL)isSystemAlertShowing;
- (id)highAvoidScenes;
- (void)userStateDidChange;
- (long long)backgroundLimit;
- (BOOL)canShowLongPressPanelWithModel:;
- (void)backgroundHasReplayed;
- (BOOL)isTimingClosePlayCurrentEnable;
- (void)setOnAlertDismissAction:;
- (void)setTimeSelectedHandler:;
- (void)setIsRunning:;
- (void)setTimer:;
- (id)init;
- (id)timer;
- (void)setQueue:;
- (void)setup;
- (void).cxx_destruct;
- (id)queue;
- (void)invalidateTimer;
- (void)reset;
- (long long)pollingInterval;
- (BOOL)isRunning;
- (void)countDown;
+ (BOOL)timingCloseSupportPortrait;
+ (BOOL)timingCloseFixTimerCrash;
+ (id)sharedInstance;
@end
