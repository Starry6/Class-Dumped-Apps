@interface AWENearbyTaskDecisionEngine : NSObject
+ (id)sortTasks:;
+ (id)triggerCombinationJudgeWithContext:;
+ (id)decideAndSortTasks:;
+ (id)decideTasks:;
+ (BOOL)p_judgeFilterWithExpression:task:context:;
+ (BOOL)p_judgeConditionWithData:task:context:;
+ (BOOL)p_judgeCombinationWithData:task:context:;
+ (BOOL)p_judgeRunCheckWithData:task:context:;
+ (id)insertAndSortTask:toTasks:;
+ (BOOL)runCheckJudgeWithContext:task:runCheckNode:;
@end
