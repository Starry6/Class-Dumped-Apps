@interface AWE1YuanGouCountdownTaskManager : NSObject
@property (nonatomic) NSMutableDictionary allTasks;
@property (nonatomic) NSMutableSet allFinishedTasks;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeInvalidTasks;
- (void)reportTask:retryCount:;
- (id)aAWEMain1YuanGouCommonAdapter;
- (id)allFinishedTasks;
- (BOOL)forbidCountdownForTask:playingAweme:;
- (BOOL)forbidSamePlayCountdown:;
- (void)didFinishTask:;
- (void)loopPlayForTask:aweme:;
- (void)countdownChangedForTask:currentCountdown:playingAweme:;
- (void)setAllFinishedTasks:;
- (void)setTask:;
- (id)init;
- (id)allTasks;
- (void).cxx_destruct;
- (void)setAllTasks:;
+ (Class)aAWEMain1YuanGouCommonAdapterClass;
+ (id)sharedInstance;
@end
