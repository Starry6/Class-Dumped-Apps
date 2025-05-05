@interface HMDMemoryMonitor : HMDMonitor
@property (nonatomic) double lastWarningTime;
@property (nonatomic) Q lastWarningType;
@property (nonatomic) NSObject<OS_dispatch_source> memoryPressureSource;
@property (nonatomic) NSMutableDictionary customData;
- (void)customTrackBeginWithIdentifier:;
- (unsigned long long)lastWarningType;
- (void)willLeaveScene:;
- (void)customTrackEndWithIdentifier:;
- (void)didEnterScene:;
- (id)refresh:relativeforScene:identifier:;
- (unsigned long long)reporterPriority;
- (void)setLastWarningType:;
- (void)setMemoryPressureSource:;
- (void)startWithInterval:;
- (id)refresh;
- (void)didReceiveMemoryWarning:;
- (void)stop;
- (void).cxx_destruct;
- (id)memoryPressureSource;
- (id)customData;
- (void)setCustomData:;
- (Class)storeClass;
- (double)lastWarningTime;
- (void)setLastWarningTime:;
+ (id)sharedMonitor;
@end
