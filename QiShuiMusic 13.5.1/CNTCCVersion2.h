@interface CNTCCVersion2 : NSObject
@property (nonatomic) NSObject<OS_tcc_server> server;
@property (nonatomic) NSObject<OS_tcc_service> service;
@property (nonatomic) NSObject<OS_tcc_message_options> messageOptionsForSyncNoPrompt;
@property (nonatomic) NSObject<OS_tcc_message_options> messageOptionsForAsyncPrompt;
@property (nonatomic) NSNumber simulateStatus;
@property (nonatomic) NSNumber isUnitTestingCachedValue;
- (id)init;
- (long long)checkAuthorizationStatusOfCurrentProcessUsingAssumedIdentity:;
- (id)isUnitTestingImpl;
- (id)server;
- (long long)checkAuthorizationStatusOfCurrentProcess;
- (long long)checkAuthorizationStatusOfAuditToken:assumedIdentity:;
- (id)authorizationRecords;
- (void)setIsUnitTestingCachedValue:;
- (id)authorizationRecordForBundleIdentifier:;
- (id)service;
- (void)setSimulateStatus:;
- (void)simulateStatus:;
- (id)simulateStatus;
- (BOOL)isAuthorizationRestricted;
- (id)messageOptionsForSyncNoPrompt;
- (void)requestAuthorization:auditToken:assumedIdentity:completionHandler:;
- (void).cxx_destruct;
- (BOOL)isUnitTesting;
- (id)isUnitTestingCachedValue;
- (void)saveAuthorizationRecord:;
- (void)stopSimulation;
- (id)credentialForAuditToken:assumedIdentity:;
- (void)requestAuthorizationWithCredential:messageOptions:completionHandler:;
- (id)messageOptionsForAsyncPrompt;
+ (id)os_log;
@end
