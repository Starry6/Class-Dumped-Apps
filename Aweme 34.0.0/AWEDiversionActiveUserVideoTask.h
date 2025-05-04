@interface AWEDiversionActiveUserVideoTask : AWEUGWatchVideoTask
- (id)taskToken;
- (void)executeWithJumpResult:openTaskCallback:;
- (id)aAWEUGKitModuleDOUYINAdapter;
- (id)aNSObject;
- (void)trackLogWithMessage:;
- (id)aAWEUGKitModuleCommonAdapter;
- (void)taskReportFinish;
- (id)initWithModel:;
- (void)addObserver;
- (id)taskID;
- (void)stopTask;
+ (void)registerTaskDealer;
+ (BOOL)needPersistence;
+ (Class)aAWEUGKitModuleDOUYINAdapterClass;
+ (Class)aNSObjectClass;
+ (Class)aAWEUGKitModuleCommonAdapterClass;
+ (id)taskType;
@end
