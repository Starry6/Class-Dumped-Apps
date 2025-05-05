@interface TestTelemetry : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> q;
@property (nonatomic) Q files_deleted;
@property (nonatomic) double termination_threshold;
@property (nonatomic) double remove_threshold;
@property (nonatomic) NSMutableArray terminationFailures;
@property (nonatomic) NSMutableArray removeFailures;
- (id)initWithInfo:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)deletes;
- (void)addRemoveFailure:;
- (void)addTerminationFailure:;
- (void)addDeletes:;
- (double)termination_threshold;
- (void)setTermination_threshold:;
- (double)remove_threshold;
- (void)setRemove_threshold:;
- (id)terminationFailures;
- (void)setTerminationFailures:;
- (id)removeFailures;
- (void)setRemoveFailures:;
- (id)q;
- (unsigned long long)files_deleted;
- (void)setFiles_deleted:;
+ (id)testTelemetryWithInfo:;
@end
