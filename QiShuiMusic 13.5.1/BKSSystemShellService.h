@interface BKSSystemShellService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSObject<OS_dispatch_queue> calloutQueue;
@property (nonatomic) @? collectiveWatchdogPingBlock;
@property (nonatomic) double idleSleepInterval;
@property (nonatomic) BOOL waitForDataMigration;
- (void)setCalloutQueue:;
- (BOOL)collectiveWatchdogPing;
- (double)idleSleepInterval;
- (void)setWaitForDataMigration:;
- (void)_activateServerConnectionWithIdleSleepInterval:;
- (id)initWithConfigurator:;
- (void)start;
- (void)setIndependentWatchdogEnabled:;
- (void)setCollectiveWatchdogPingBlock:;
- (void)restartWithOptions:;
- (void)_reconnect:;
- (BOOL)waitForDataMigration;
- (id)calloutQueue;
- (void).cxx_destruct;
- (void)setIdleSleepInterval:;
- (id)collectiveWatchdogPingBlock;
- (void)didFinishLaunching;
- (void)_checkIn;
@end
