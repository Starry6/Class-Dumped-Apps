@interface ICFileContentKeyStore : NSObject
- (void)enumerateKeysUsingBlock:;
- (id)removeAllKeys;
- (void).cxx_destruct;
- (id)initWithPath:;
- (BOOL)containsKeyForIdentifier:error:;
- (id)loadKeyForIdentifier:renewalDate:error:;
- (id)saveKey:forIdentifier:withRenewalDate:;
- (id)incrementFailureCountForKeyWithIdentifier:;
- (id)removeKeyForIdentifier:;
- (id)_keyEntryForIdentifier:error:;
- (id)_saveKeyEntry:;
- (id)_filePathForKeyIdentifier:;
@end
