@interface AALoginContextTransientStorage : NSObject
- (id)init;
- (void)save:;
- (void)clear;
- (void).cxx_destruct;
- (id)storedContext;
- (void)_saveNonsensitiveParameters:;
- (id)_readNonsensitiveParameters;
- (void)_saveKeychainItem:forUsername:service:;
- (id)_keychainItemForUsername:service:;
- (void)_deleteKeychainItemForUsername:service:;
+ (id)sharedStorage;
@end
