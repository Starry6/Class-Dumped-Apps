@interface EMCoreAnalyticsCollector : NSObject
@property (nonatomic) EFLocked periodicDataProviders;
@property (nonatomic) <EFScheduler> oneTimeScheduler;
@property (nonatomic) <EFScheduler> registrationScheduler;
@property (nonatomic) BOOL registered;
- (void)setRegistered:;
- (BOOL)registered;
- (id)init;
- (id)periodicDataProviders;
- (void)_logPeriodicEvents;
- (void)logOneTimeEvent:;
- (void).cxx_destruct;
- (id)registrationScheduler;
- (id)oneTimeScheduler;
- (void)_registerXPCActivity;
- (id)registerForLogEventsWithPeriodicDataProvider:;
+ (id)log;
@end
