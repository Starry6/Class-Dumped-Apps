@interface AWEIMUserDBCleaner : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) AWEStorage configStorage;
@property (nonatomic) NSMutableArray tasks;
@property (nonatomic) BOOL isCleaning;
- (void)p_setup;
- (BOOL)isCleaning;
- (void)setIsCleaning:;
- (void)p_cleanHistoryVersionFileIfNeed;
- (void)addCleanTask:;
- (void)startTasksIfNeed;
- (id)configStorage;
- (void)setConfigStorage:;
- (id)init;
- (id)serialQueue;
- (void).cxx_destruct;
- (void)setTasks:;
- (id)tasks;
+ (id)sharedInstance;
+ (void)setup;
@end
