@interface SGPersistentSaltProvider : NSObject
- (id)_queryKeychainError:;
- (id)salt;
- (void)_deleteSalt;
- (id)_createSalt;
- (id)_findOrCreateSalt;
- (void).cxx_destruct;
- (id)_findExistingSaltError:;
- (id)initWithServiceIdentifier:accessGroup:;
+ (id)saltProviderWithString:serviceIdentifier:accessGroup:;
+ (id)saltProviderFromKeyChainWithServiceIdentifier:accessGroup:;
+ (id)hexStringForData:;
@end
