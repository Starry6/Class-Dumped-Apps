@interface DRConfigMonitor : NSObject
@property (nonatomic) DRConfig currentConfig;
@property (nonatomic) @? processingBlock;
@property (nonatomic) NSObject<OS_dispatch_queue> targetQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> accessQueue;
@property (nonatomic) NSString teamID;
- (id)teamID;
- (id)accessQueue;
- (id)processingBlock;
- (BOOL)markCompletedConfigUUID:errorOut:;
- (void)dealloc;
- (id)targetQueue;
- (id)initWithTeamID:targetQueue:configProcessingBlock:;
- (BOOL)_markConfigUUID:isRejected:errorOut:;
- (void)_handleCurrentConfig:error:forceBroadcast:;
- (id)currentConfig;
- (void)startMonitoring;
- (void).cxx_destruct;
- (id)currentConfigSnapshotWithErrorOut:;
- (void)setCurrentConfig:;
- (void)_notifyClientOfConfig:error:;
- (BOOL)rejectConfigUUID:errorOut:;
- (void)stopMonitoring;
@end
