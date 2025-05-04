@interface AWESCDefaultMutuallyExclusiveTask : NSObject
@property (nonatomic) <BDSCSearchMutuallyExclusiveTask> task;
@property (nonatomic) <AWESCSearchMutuallyExclusiveTaskDelegate> searchMEDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSearchMEDelegate:;
- (id)searchMEDelegate;
- (BOOL)canStopOtherTask:;
- (void)willChangeState:task:;
- (BOOL)canStopSearchMETaskNow;
- (void)stopSearchMETask;
- (id)init;
- (id)task;
- (void).cxx_destruct;
@end
