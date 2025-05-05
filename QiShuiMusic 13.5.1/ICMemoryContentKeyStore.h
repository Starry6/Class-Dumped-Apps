@interface ICMemoryContentKeyStore : NSObject
- (id)init;
- (void)enumerateKeysUsingBlock:;
- (id)removeAllKeys;
- (void).cxx_destruct;
- (BOOL)containsKeyForIdentifier:error:;
- (id)loadKeyForIdentifier:renewalDate:error:;
- (id)saveKey:forIdentifier:withRenewalDate:;
- (id)incrementFailureCountForKeyWithIdentifier:;
- (id)removeKeyForIdentifier:;
@end
