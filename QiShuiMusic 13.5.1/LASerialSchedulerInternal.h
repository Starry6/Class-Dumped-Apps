@interface LASerialSchedulerInternal : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)_run;
- (void)resume;
- (void)schedule:;
- (void).cxx_destruct;
- (id)initWithQueue:;
- (void)_schedule:;
- (void)_performPendingOperations;
- (void)_performPendingOperationsWithCompletion:;
@end
