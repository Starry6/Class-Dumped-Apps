@interface BDDiskIOControl : NSObject
@property (nonatomic) BDDiskTimedWaitLock lock;
- (BOOL)canAccessDisk;
- (void)enterTimeConsumingArea;
- (void)exitTimeConsumingArea;
- (id)init;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
+ (long long)accessStrategy;
+ (double)accessTimeout;
+ (void)setAccessStrategy:;
+ (void)setAccessTimeout:;
@end
