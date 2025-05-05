@interface CBALSTelemetry : CBModule
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)timerFired;
- (void)handleNotificationForKey:withProperty:;
- (void)dealloc;
- (void)start;
- (id)copyPropertyForKey:withParameter:;
- (void)stop;
- (id)copyPropertyForKey:;
- (BOOL)setProperty:forKey:;
- (id)initWithQueue:;
- (void)sendNotificationForKey:andValue:;
- (void)handleSystemDidWakeFromSleepPropertyHandler:;
- (unsigned long long)getBootTimeInMicroSeconds;
- (BOOL)setALSService:;
- (id)copyALSSampleHistoryWithLength:frequency:lastTimestamp:;
- (void)updateLastTimestampInDefaults;
- (void)handleSystemPrepareForSleepPropertyHandler:;
@end
