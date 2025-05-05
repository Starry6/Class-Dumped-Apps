@interface VERunloopObject : IESMMObject
@property (nonatomic) NSObject<OS_dispatch_semaphore> sem;
- (id)initWithGCDName:;
- (void)runAsync:;
- (void)runSync:;
- (void)setSem:;
- (void).cxx_destruct;
- (id)sem;
@end
