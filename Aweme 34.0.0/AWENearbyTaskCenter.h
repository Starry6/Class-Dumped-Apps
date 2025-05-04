@interface AWENearbyTaskCenter : NSObject
@property (nonatomic) NSMutableDictionary taskDict;
@property (nonatomic) NSMutableDictionary destroyTaskDict;
@property (nonatomic) AWENearbyTaskExecutor executor;
@property (nonatomic) q pageType;
- (void)setTaskDict:;
- (id)initWithPageType:;
- (void)commitTask:;
- (void)commitTasks:;
- (void)commitTask:needTrigger:;
- (void)insertTaskToExecutor:;
- (id)destroyTaskDict;
- (void)triggerTasksWithType:;
- (void)triggerTasksWithType:triggerSource:;
- (void)p_triggerSingleTasksWithType:triggerSource:;
- (void)p_triggerCombinationTasksWithType:triggerSource:;
- (void)p_commonDestroyTasksWithType:triggerSource:isCombination:;
- (void)p_commonTriggerTaskWithType:triggerSource:isCombination:;
- (id)p_commonFilterWithTaskList:triggerType:triggerSource:;
- (void)revertTaskWithKey:;
- (void)revertTasksWithKeys:;
- (void)setDestroyTaskDict:;
- (id)executor;
- (void)setPageType:;
- (void).cxx_destruct;
- (long long)pageType;
- (void)setExecutor:;
- (id)taskDict;
@end
