@interface ARServer : NSObject
@property (nonatomic) NSArray servicesBeingAdded;
@property (nonatomic) ARDaemonService serviceBeingRemoved;
@property (nonatomic) BOOL isKeybagUnlocked;
@property (nonatomic) ARUserProfile userProfile;
@property (nonatomic) NSString statusString;
@property (nonatomic) NSDictionary statusDictionary;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setServices:;
- (void)dealloc;
- (void)suspend;
- (id)statusString;
- (void)resume;
- (id)statusDictionary;
- (void).cxx_destruct;
- (id)_fullDescription;
- (void)invalidate;
- (id)userProfile;
- (void)setUserProfile:;
- (id)service:peerServiceOfType:;
- (long long)numberOfActiveConnectionsForService:;
- (void)serviceDidInvalidate:;
- (void)serviceDidInterrupt:;
- (void)didDiscoverService:;
- (void)didDiscoverControl:;
- (id)initInProcess:spawnTime:sessionUUID:watchdogMonitor:executionManager:;
- (id)daemonServiceForServiceNamed:;
- (BOOL)_addService:;
- (BOOL)_addServices:;
- (id)listenerEndPointForServiceNamed:;
- (id)_peerServicesOfService:;
- (BOOL)_updateWithServices:dryRun:parameters:error:;
- (BOOL)_updateWithServices:error:;
- (void)_removeService:;
- (void)_updateServicesByPID;
- (void)_configureServiceForExecution:;
- (BOOL)commitServices:;
- (BOOL)updateAlgorithmConfigurationWithService:;
- (BOOL)updateAlgorithmConfigurationWithServices:;
- (void)_logDaemonStatusWithType:;
- (void)_setupStatusTimer;
- (id)servicesBeingAdded;
- (void)setServicesBeingAdded:;
- (id)serviceBeingRemoved;
- (void)setServiceBeingRemoved:;
- (BOOL)isKeybagUnlocked;
- (void)setIsKeybagUnlocked:;
@end
