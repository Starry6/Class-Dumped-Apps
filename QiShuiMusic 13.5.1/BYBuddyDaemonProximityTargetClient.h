@interface BYBuddyDaemonProximityTargetClient : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) <BYBuddyDaemonProximityTargetProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)connectToDaemon;
- (void)setDelegate:;
- (id)delegate;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)sendData:;
- (id)fileTransferSessionTemplate;
- (void)proximititySetupCompleted:;
- (void)displayProximityPinCode:visual:;
- (void)dismissProximityPinCode;
- (void)proximityConnectionPreparing:;
- (void)proximityConnectionInitiated;
- (void)proximityConnectionTerminated;
- (void)proximityConnectionReconnected;
- (void)receivedLanguages:locale:model:deviceClass:accessibilitySettings:;
- (void)beginAdvertisingProximitySetup;
- (void)endAdvertisingProximitySetup;
- (void)endPairing;
- (void)hasConnection:;
- (void)resumeProximitySetup:;
- (void)storeInformation:;
- (void)storeHandshake:;
- (void)endDeviceToDeviceMigration;
- (void)showMigrationInterfaceOnSource;
- (void)suspendConnectionForSoftwareUpdate:;
+ (id)proximityTargetClientInterface;
@end
