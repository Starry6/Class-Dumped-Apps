@interface AWETimingManager : NSObject
@property (nonatomic) NSMutableDictionary timingDict;
@property (nonatomic) NSObject<OS_dispatch_semaphore> lock;
@property (nonatomic) double launchTime;
- (double)timeIntervalForKey:;
- (void)cancelTimingForKey:;
- (double)launchTimeInterval;
- (void)setLaunchTime:;
- (double)launchTime;
- (void)setTimingDict:;
- (id)init;
- (void)startTimingForKey:;
- (void)setLock:;
- (id)lock;
- (double)stopTimingForKey:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)timingDict;
+ (void)_aweLazyRegisterLoad;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
