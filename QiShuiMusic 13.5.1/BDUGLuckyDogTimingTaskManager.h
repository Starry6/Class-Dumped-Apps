@interface BDUGLuckyDogTimingTaskManager : NSObject
@property (nonatomic) NSMutableDictionary allRegistedTasksDict;
@property (nonatomic) NSMutableDictionary runningTasksDict;
@property (nonatomic) NSMutableDictionary triggeredOncePerSessionTasksDict;
- (id)__getCurrentServerDate;
- (BOOL)__isValidForTask:;
- (void)__triggerTaskIfNeededForTask:;
- (void)__unlock;
- (id)allRegistedTasksDict;
- (id)runningTasksDict;
- (void)setAllRegistedTasksDict:;
- (void)setRunningTasksDict:;
- (void)setTriggeredOncePerSessionTasksDict:;
- (void)triggerOnDateTaskIfNeed;
- (id)triggeredOncePerSessionTasksDict;
- (id)init;
- (void).cxx_destruct;
- (void)__lock;
+ (id)__beginDateForTask:;
+ (id)__expireDateForTask:;
+ (void)__logTaskTrigger:msg:;
+ (id)__taskKeyForTask:;
+ (void)registerTriggerTasks:;
+ (void)unregisterTriggerTasks:;
+ (id)sharedInstance;
@end
