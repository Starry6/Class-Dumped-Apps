@interface IDSGroupEncryptionKeyManager : NSObject
- (void).cxx_destruct;
- (BOOL)useCurrentEncryptionkeyWithHandler:;
- (void)enumerateDecryptingKeysAndSaltsUsingBlock:;
- (id)initWithEncryptionContext:encryptionKeySize:;
- (void)recvKeyMaterial:;
- (void)invalidateKeyMaterialByKeyIndexes:;
- (void)receiveMembershipChangedInformation:;
- (void)purgeOldKeyMaterial;
- (BOOL)useDecryptingKeyForKeyIndex:handler:;
@end
