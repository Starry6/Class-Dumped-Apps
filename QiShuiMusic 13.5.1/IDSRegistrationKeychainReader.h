@interface IDSRegistrationKeychainReader : NSObject
- (void)flushCache;
- (void)_reloadFromKeychainLocked;
- (id)init;
- (void)dealloc;
- (id)registrationWithServiceType:accountType:isTemporary:value:;
- (void)_flush;
- (void).cxx_destruct;
- (void)_setPurgeTimer;
- (void)_reloadFromDictionaryLocked:;
- (id)registrationData;
+ (id)keychainServiceForVersion:;
+ (id)sharedInstance;
+ (id)keychainAccessGroupForVersion:;
+ (id)keychainAccountForVersion:;
@end
