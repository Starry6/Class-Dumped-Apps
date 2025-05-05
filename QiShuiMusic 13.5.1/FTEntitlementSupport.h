@interface FTEntitlementSupport : NSObject
@property (nonatomic) BOOL faceTimeNonWiFiEntitled;
@property (nonatomic) NSDictionary registrationState;
- (void)_handleCTServiceRequestName:userInfo:contextInfo:;
- (id)init;
- (BOOL)faceTimeNonWiFiEntitled;
- (id)registrationState;
- (void)_updateEntitlementStatusUsingCTEntitlementsInfo:;
- (id)_rawEntitlementValue;
- (BOOL)_disconnectCTServerConnection;
- (BOOL)_reconnectCTServerConnectionIfNecessary;
- (void)_unregisterForCTEntitlementNotifications;
- (void)_entitlementStatusChanged;
- (BOOL)_registerForCTEntitlementNotifications;
- (void)_cleanupMachInfo;
- (BOOL)_setupCTServerConnection;
+ (id)sharedInstance;
@end
