@interface IESIMStrategyWorkQueue : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSMutableSet execTasks;
@property (nonatomic) NSMutableOrderedSet waitingExecTasks;
@property (nonatomic) q maxExecTaskCount;
@property (nonatomic) <IESIMStrategyWorkQueueDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)execTasks;
- (long long)maxExecTaskCount;
- (void)p_execAnotherBatchTasks;
- (void)setExecTasks:;
- (void)setMaxExecTaskCount:;
- (void)setWaitingExecTasks:;
- (void)strategyTaskDidFinished:;
- (id)waitingExecTasks;
- (void)addTask:;
- (void)start;
- (void)setDelegate:;
- (id)identifier;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithIdentifier:;
- (void)setIdentifier:;
@end
