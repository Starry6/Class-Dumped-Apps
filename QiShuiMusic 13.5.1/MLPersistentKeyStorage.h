@interface MLPersistentKeyStorage : NSObject
+ (id)syncQueue;
+ (id)persistentKeyStorageURL;
+ (BOOL)storeKeyBlob:forKeyIdentifier:error:;
+ (id)retrieveKeyBlobForKeyIdentifier:;
@end
