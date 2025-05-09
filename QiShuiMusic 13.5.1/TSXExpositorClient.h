@interface TSXExpositorClient : TSXClient
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)kernelClockAvailableKernelClockIdentifiers;
- (id)exportedObject;
- (id)clockManagerDiagnosticInfo;
- (void)gPTPManagerNotifyWhengPTPManagerIsAvailable:;
- (void)gPTPManagerIsUnavailable;
- (void)clockManagerNotifyWhenClockManagerIsUnavailable:;
- (id)clockNameForClockIdentifier:;
- (id)clockManagerDiagnosticInfoForClockIdentifier:daemonClassName:;
- (id)gPTPPortDiagnosticInfoForPortWithClockIdentifier:andPortNumber:;
- (void)gPTPManagerNotifyWhengPTPManagerIsUnavailable:;
- (id)gPTPManagerDiagnosticInfo;
- (void).cxx_destruct;
- (id)clockManagerDiagnosticInfoForClockIdentifier:;
- (void)clockManagerIsAvailable;
- (id)clockManagerDaemonClassNameForClockIdentifier:;
- (void)clockManagerNotifyWhenClockManagerIsAvailable:;
- (void)gPTPManagerIsAvailable;
- (void)invalidatedConnection;
- (void)interruptedConnection;
- (void)clockManagerIsUnavailable;
+ (id)clientProtocol;
+ (id)serviceName;
+ (id)serverProtocol;
+ (id)sharedExpositorClient;
@end
