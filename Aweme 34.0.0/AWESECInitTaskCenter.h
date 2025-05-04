@interface AWESECInitTaskCenter : NSObject
@property (nonatomic) NSMutableDictionary taskTimingDict;
@property (nonatomic) NSMutableDictionary taskDict;
- (void)setTaskDict:;
- (void)configTasks;
- (void)configColdLaunchTasks;
- (void)configFeedReadyTasks;
- (void)addTask:forTiming:;
- (id)taskTimingDict;
- (void)addTask:forName:;
- (id)taskNamesForTiming:;
- (id)taskForName:;
- (id)tasksForTiming:;
- (void)setTaskTimingDict:;
- (id)init;
- (void).cxx_destruct;
- (id)taskDict;
+ (BOOL)rulerInitTaskEnabled;
+ (id)settings;
+ (id)shared;
+ (BOOL)enabled;
@end
