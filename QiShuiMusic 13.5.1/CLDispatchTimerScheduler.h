@interface CLDispatchTimerScheduler : NSObject
@property (nonatomic) NSObject<OS_dispatch_source> source;
@property (nonatomic) CLTimer timer;
- (void)dealloc;
- (id)initWithDispatchSilo:;
- (void)setTimer:;
- (void)reflectNextFireDelay:fireInterval:;
- (void).cxx_destruct;
- (id)source;
- (id)timer;
- (void)setSource:;
@end
