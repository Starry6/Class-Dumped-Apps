@interface CNTCCVersion1 : NSObject
@property (nonatomic) NSNumber simulateStatus;
@property (nonatomic) NSNumber isUnitTestingCachedValue;
- (long long)checkAuthorizationStatusOfCurrentProcessUsingAssumedIdentity:;
- (id)isUnitTestingImpl;
- (long long)checkAuthorizationStatusOfCurrentProcess;
- (long long)checkAuthorizationStatusOfAuditToken:assumedIdentity:;
- (id)authorizationRecords;
- (void)setIsUnitTestingCachedValue:;
- (id)authorizationRecordForBundleIdentifier:;
- (void)setSimulateStatus:;
- (void)simulateStatus:;
- (id)simulateStatus;
- (BOOL)isAuthorizationRestricted;
- (void)requestAuthorization:auditToken:assumedIdentity:completionHandler:;
- (void).cxx_destruct;
- (BOOL)isUnitTesting;
- (id)isUnitTestingCachedValue;
- (void)saveAuthorizationRecord:;
- (void)stopSimulation;
- (long long)checkAuthorizationStatusOfAuditToken:;
+ (id)createAppAuthorizationRecordFromTCCAppInfo:bundleIdentifier:;
@end
