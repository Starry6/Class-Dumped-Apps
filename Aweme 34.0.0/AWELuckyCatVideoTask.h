@interface AWELuckyCatVideoTask : AWEUGWatchVideoTask
- (void)executeWithJumpResult:openTaskCallback:;
- (id)aAWEUGKitModuleDOUYINAdapter;
- (id)aNSObject;
- (void)trackLogWithMessage:;
- (id)aAWEUGKitModuleCommonAdapter;
- (void)taskReportFinish;
- (id)initWithModel:;
- (void)addObserver;
- (void)stopTask;
+ (void)registerTaskDealer;
+ (BOOL)needPersistence;
+ (Class)aAWEUGKitModuleDOUYINAdapterClass;
+ (Class)aNSObjectClass;
+ (Class)aAWEUGKitModuleCommonAdapterClass;
+ (id)taskType;
@end
