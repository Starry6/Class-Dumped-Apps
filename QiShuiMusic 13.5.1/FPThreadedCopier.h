@interface FPThreadedCopier : NSObject
@property (nonatomic) q numberOfInflightCopies;
@property (nonatomic) NSObject<OS_dispatch_semaphore> bufferLimitSemaphore;
@property (nonatomic) NSMutableArray buffers;
@property (nonatomic) NSObject<OS_dispatch_queue> writeQueue;
- (id)buffers;
- (id)init;
- (void)setBuffers:;
- (void).cxx_destruct;
- (void)endOperation;
- (BOOL)copy:to:overwriteDestination:progress:error:;
- (int)beginReading:error:;
- (int)beginWriting:overwriteDestination:error:;
- (BOOL)finishReading:writing:error:;
- (void)beginOperation;
- (long long)numberOfInflightCopies;
- (void)setNumberOfInflightCopies:;
- (id)bufferLimitSemaphore;
- (void)setBufferLimitSemaphore:;
- (id)writeQueue;
- (void)setWriteQueue:;
+ (id)sharedCopier;
@end
