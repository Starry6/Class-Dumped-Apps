@interface BYBuddyDaemonProximityAutomatedDeviceEnrollmentTargetClient : NSObject
@property (nonatomic) NSXPCConnection daemonConnection;
@property (nonatomic) NSObject<OS_dispatch_queue> connectionQueue;
@property (nonatomic) NSObject<BYBuddyDaemonProximityAutomatedDeviceEnrollmentTargetProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)daemonConnection;
- (id)init;
- (void)shutdown;
- (id)connectionQueue;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)displayProximityPinCode:;
- (void)dismissProximityPinCodeWithError:;
- (void)configuratorPairingSuccessfulWithViewModel:;
- (void)enrollmentHasStatusUpdateWithViewModel:;
- (void)fetchActivationStateWithCompletion:;
- (void)activateUsingWiFiWithCompletion:;
- (void)enrollmentCompleteWithViewModel:;
- (void)displayShutdownUI;
- (void)beginAdvertisingProximityAutomatedDeviceEnrollment;
- (void)endAdvertisingProximityAutomatedDeviceEnrollment;
- (id)connectionToMachService:;
+ (id)clientInterface;
@end
