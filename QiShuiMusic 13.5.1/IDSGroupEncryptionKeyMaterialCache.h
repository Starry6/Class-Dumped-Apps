@interface IDSGroupEncryptionKeyMaterialCache : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)recvKeyMaterial:;
- (void)invalidateKeyMaterialByKeyIndexes:;
- (void)enumerateCachedKeyMaterialUsingBlock:;
@end
