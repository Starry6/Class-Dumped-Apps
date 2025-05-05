@interface CertUITrustManager : NSObject
- (void)userAllowsCertificateTrust:host:shouldPrompt:completionHandler:;
- (id)init;
- (int)actionForSSLTrust:hostname:service:;
- (BOOL)_hasExceptionsForSMIMETrust:sender:;
- (void)addSSLTrust:hostname:service:;
- (int)actionForSMIMETrust:sender:;
- (void)removeSMIMETrust:sender:;
- (unsigned int)rawTrustResultForSSLTrust:hostname:service:;
- (void)removeSSLTrust:hostname:service:;
- (void)clearSavedTrustSettingsForTrust:host:service:;
- (void)allowTrust:forHost:service:;
- (void)removeAllTrusts;
- (id)_getExceptionsForSSLTrust:hostname:service:;
- (int)_actionForTrust:exceptions:;
- (id)initWithAccessGroup:;
- (void).cxx_destruct;
- (int)actionForTrust:forHost:andService:;
- (unsigned int)_rawTrustResultForTrust:exceptions:;
- (void)addSMIMETrust:sender:;
+ (void)migrateFromVersionZero;
+ (void)migrateFromVersionOne;
+ (id)defaultTrustManager;
+ (void)_migrateVersionZeroFromAccessGroup:toGroup:;
@end
