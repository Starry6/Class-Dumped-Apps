@interface PCPersistentTimer : NSObject
@property (nonatomic) double minimumEarlyFireProportion;
@property (nonatomic) double earlyFireConstantInterval;
@property (nonatomic) BOOL disableSystemWaking;
@property (nonatomic) BOOL userVisible;
@property (nonatomic) double fireTime;
@property (nonatomic) double startTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)disableSystemWaking;
- (void)scheduleInRunLoop:inMode:;
- (void)scheduleInQueue:;
- (void)scheduleInRunLoop:;
- (BOOL)firingIsImminent;
- (double)fireTime;
- (double)_nextForcedAlignmentAbsoluteTime;
- (void)setDisableSystemWaking:;
- (void)dealloc;
- (id)initWithFireDate:serviceIdentifier:target:selector:userInfo:;
- (void)interfaceManagerWWANInterfaceStatusChanged:;
- (double)_earlyFireTime;
- (void)interfaceManagerInternetReachabilityChanged:;
- (void)setUserVisible:;
- (id)userInfo;
- (void)_updateTimers;
- (void)_fireTimerFired;
- (void)setEarlyFireConstantInterval:;
- (double)startTime;
- (id)debugDescription;
- (id)initWithTimeInterval:serviceIdentifier:guidancePriority:target:selector:userInfo:;
- (BOOL)isUserVisible;
- (BOOL)isValid;
- (void)interfaceManagerWWANInterfaceChangedPowerState:;
- (void).cxx_destruct;
- (void)cutPowerMonitorBatteryConnectedStateDidChange:;
- (id)_initWithAbsoluteTime:serviceIdentifier:guidancePriority:target:selector:userInfo:triggerOnGMTChange:;
- (id)initWithTimeInterval:serviceIdentifier:target:selector:userInfo:;
- (double)earlyFireConstantInterval;
- (void)invalidate;
- (double)minimumEarlyFireProportion;
- (void)setMinimumEarlyFireProportion:;
+ (double)currentMachTimeInterval;
+ (id)_backgroundUpdateQueue;
+ (id)lastSystemWakeDate;
+ (double)_currentGuidanceTime;
+ (void)_updateTime:forGuidancePriority:;
@end
