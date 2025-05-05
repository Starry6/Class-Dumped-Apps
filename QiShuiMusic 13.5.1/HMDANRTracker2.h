@interface HMDANRTracker2 : HMDANRTracker
@property (nonatomic) HMInstance instance;
- (void)didBlockWithInfo:;
- (void)dropExceptionData;
- (BOOL)exceptionDataSource;
- (void)exceptionReporterDidReceiveResponse:;
- (id)pendingExceptionData;
- (id)instance;
- (void)setInstance:;
- (void).cxx_destruct;
+ (id)sharedTracker;
@end
