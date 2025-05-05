@interface PHImportBatch : NSObject
@property (nonatomic) NSMutableArray records;
@property (nonatomic) double duration;
@property (nonatomic) PHImportTimerCollection timers;
@property (nonatomic) NSObject<OS_dispatch_semaphore> semaphore;
- (id)timers;
- (id)records;
- (id)init;
- (void).cxx_destruct;
- (id)semaphore;
- (double)duration;
@end
