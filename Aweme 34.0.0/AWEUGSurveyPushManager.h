@interface AWEUGSurveyPushManager : NSObject
@property (nonatomic) BOOL hasStarted;
@property (nonatomic) BOOL needStartTaskWhenSettingsUpdated;
@property (nonatomic) NSMutableDictionary tasks;
- (void)awemeSettingDidChange;
- (void)startTasksOnFeedReady;
- (void)restartTasksIfNeeded;
- (void)stopTasks;
- (void)surveyShowed:;
- (void)setNeedStartTaskWhenSettingsUpdated:;
- (BOOL)needStartTaskWhenSettingsUpdated;
- (void)startTasks;
- (BOOL)hasStarted;
- (void).cxx_destruct;
- (void)setHasStarted:;
- (void)setTasks:;
- (id)tasks;
+ (id)sharedInstance;
@end
