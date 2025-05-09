@interface AWEUGTributeTaskManager : NSObject
@property (nonatomic) double lastRequestTimestamp;
@property (nonatomic) NSMutableDictionary tasks;
@property (nonatomic) BOOL needStartTaskWhenSettingsUpdated;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)awemeSettingDidChange;
- (double)lastRequestTimestamp;
- (void)setLastRequestTimestamp:;
- (void)startTributeTaskOnColdLaunch;
- (void)startTributeTaskIfNeeded;
- (void)tributeTaskReport;
- (void)setNeedStartTaskWhenSettingsUpdated:;
- (BOOL)needStartTaskWhenSettingsUpdated;
- (void)tributeTaskCreated:withToken:;
- (void)tributeTaskRemoveWithToken:;
- (void)tributeTaskProgressUpdated:withToken:;
- (void)startTributeTask;
- (void)trackAndPostRequestWithHost:path:params:isAuto:completion:;
- (BOOL)enableTribute;
- (void)requestTributeTaskToken;
- (double)tributeTokenRequestInterval;
- (void)requestTributeTaskConfWithToken:;
- (void)buildAndStartTributeTimingTask:token:reportInterval:;
- (id)tributeScenes;
- (id)blockTributeVideoType;
- (id)tributeConfig;
- (void).cxx_destruct;
- (void)setTasks:;
- (id)tasks;
+ (id)sharedInstance;
@end
