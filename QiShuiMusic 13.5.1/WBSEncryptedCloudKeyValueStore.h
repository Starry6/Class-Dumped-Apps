@interface WBSEncryptedCloudKeyValueStore : NSObject
@property (nonatomic) NSUbiquitousKeyValueStore backingStore;
- (void)_setObject:forKey:;
- (id)_objectForKey:ofClass:;
- (void)dealloc;
- (void)synchronizeWithCompletionHandler:;
- (id)backingStore;
- (void)setArray:forKey:;
- (id)initWithStore:;
- (void)setDictionary:forKey:;
- (id)decryptEntry:;
- (void)synchronize;
- (id)arrayForKey:;
- (int)_currentPCSConfiguration;
- (void).cxx_destruct;
- (id)_dsidForPrimaryAccount;
- (id)dictionaryRepresentation;
- (id)encryptPropertyList:;
- (void)removeObjectForKey:;
- (id).cxx_construct;
- (id)dictionaryForKey:;
+ (id)defaultStore;
+ (id)additionalStoreWithIdentifier:;
@end
