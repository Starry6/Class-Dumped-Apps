@interface MKApplicationStateMonitor : NSObject
@property (nonatomic) BOOL forceRunningBoardServicesMonitoring;
@property (nonatomic) BOOL inBackground;
@property (nonatomic) BOOL active;
- (void)_resignActive;
- (id)init;
- (void)dealloc;
- (BOOL)forceRunningBoardServicesMonitoring;
- (void)startObserving;
- (BOOL)isInBackground;
- (void)stopObserving;
- (void)_becomeActive;
- (void)_exitBackground;
- (void)setForceRunningBoardServicesMonitoring:;
- (void)_performSynchronouslyOnMainQueue:;
- (void).cxx_destruct;
- (void)_enterBackground;
- (BOOL)_applicationStateIsForegroundForTaskState:;
- (void)_handleApplicationStateChangeForMonitor:handle:update:interestedPid:;
- (id)_stringForTaskState:;
- (void)_setupProcessMonitorWithIdentifier:interestedPid:;
- (BOOL)isActive;
+ (id)sharedInstance;
@end
