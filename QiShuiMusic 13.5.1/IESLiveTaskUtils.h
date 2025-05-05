@interface IESLiveTaskUtils : NSObject
@property (nonatomic) IESLiveTaskScheduler scheduler;
@property (nonatomic) BOOL taskQueueEnabe;
@property (nonatomic) NSDictionary taskConfig;
@property (nonatomic) NSMutableDictionary taskDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)excutedTaskWithName:identifier:;
- (void)addTask:name:identifer:priority:;
- (void)setTaskConfig:;
- (void)setTaskDict:;
- (void)setTaskQueueEnabe:;
- (void)setUpWithRoomType:;
- (id)taskConfig;
- (BOOL)taskQueueEnabe;
- (void)setScheduler:;
- (id)scheduler;
- (void).cxx_destruct;
- (void)clearTasks;
- (id)taskDict;
+ (void)accessLiveTaskQueueWithBootLevel:component:stage:task:;
+ (void)accessLiveTaskQueueWithBootLevel:stage:task:;
+ (id)shareInstance;
@end
