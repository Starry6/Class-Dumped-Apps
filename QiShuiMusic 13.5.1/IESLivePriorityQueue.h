@interface IESLivePriorityQueue : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWihExcuted:;
- (BOOL)executeTaskWithName:identifier:;
- (id)topTask;
- (void)addTask:name:identifier:priority:;
- (void)addTask:priority:;
- (void)clearTasksWithIdentifiers:;
- (void)executeTask;
- (id)init;
- (void)dealloc;
- (BOOL)empty;
- (void)setup;
- (void).cxx_destruct;
- (long long)size;
- (void)clearTasks;
@end
