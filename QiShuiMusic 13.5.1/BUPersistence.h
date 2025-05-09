@interface BUPersistence : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) BUDiskCache diskCache;
@property (nonatomic) BUPersistenceOption option;
@property (nonatomic) BitKVWrapper kv;
@property (nonatomic) <BUKVStorageProtocol> kvStorage;
@property (nonatomic) q newStorageStage;
@property (nonatomic) BUStorageValidator validator;
@property (nonatomic) BOOL enableValidate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)_pbu_internal_setObject:forKey:;
- (long long)newStorageStage;
- (void)_appDidReceiveMemoryWarningNotification;
- (BOOL)_pbu_internal_hasObjectForKey:;
- (id)_pbu_internal_objectForKey:;
- (id)_pbu_internal_objectsForKeys:;
- (BOOL)_pbu_internal_removeAll;
- (BOOL)_pbu_internal_removeObjectsForKeys:;
- (BOOL)_pbu_internal_save;
- (void)allObjectsWithSafeBlock:;
- (void)didValidateData:;
- (BOOL)enableValidate;
- (id)kv;
- (id)kvStorage;
- (void)setDiskCache:;
- (void)setEnableValidate:;
- (void)setKv:;
- (void)setKvStorage:;
- (void)setNewStorageStage:;
- (BOOL)removeAll;
- (BOOL)setObject:forKey:;
- (void)dealloc;
- (void)setName:;
- (BOOL)save;
- (id)diskCache;
- (id)validator;
- (id)initWithName:;
- (void)applicationDidEnterBackground:;
- (BOOL)removeObjectsForKeys:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)setValidator:;
- (void)setOption:;
- (id)objectsForKeys:;
- (id)name;
- (id)option;
- (void)trim;
- (BOOL)hasObjectForKey:;
+ (id)commonPersistence;
+ (id)persistenceWithName:;
+ (id)persistenceWithName:option:;
+ (void)setMinitor:;
+ (id)cacheDirectory;
+ (id)sdkVersion;
+ (void)setSDKVersion:;
@end
