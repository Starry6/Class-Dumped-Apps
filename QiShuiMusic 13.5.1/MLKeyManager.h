@interface MLKeyManager : NSObject
+ (id)syncQueue;
+ (id)createPersistentKeyBlobForKeyID:usesCodeSigningIdentityForEncryption:error:;
+ (id)extractKeyIdentifierFromModelAtURL:usesCodeSigningIdentityForEncryption:error:;
+ (id)loadDecryptionKeyForModelAtURL:retUsesCodeSigningIdentityForEncryption:error:;
+ (id)decryptSessionForModelAtURL:error:;
+ (BOOL)isModelEncrypted:;
@end
