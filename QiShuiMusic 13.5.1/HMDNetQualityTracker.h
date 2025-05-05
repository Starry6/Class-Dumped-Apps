@interface HMDNetQualityTracker : NSObject
@property (nonatomic) BOOL isRunning;
@property (nonatomic) q currentNetQuality;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)currentNetQuality;
- (void)hmdCurrentNetQualityDidChange:;
- (void)setCurrentNetQuality:;
- (void)startNetQualityMonitor;
- (void)stopNetQualityMonitor;
- (void)switchNetQualityTrackerStatus:;
- (id)init;
- (void)dealloc;
- (void)setIsRunning:;
- (BOOL)isRunning;
+ (id)sharedTracker;
@end
