@interface ABUDiskCache : NSObject
@property (nonatomic) ABUPersistenceOption option;
@property (nonatomic) <ABUPersistenceProtocol> storage;
@property (nonatomic) NSString diskCacheDirectory;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateObjectsForKeys:WithBlock:;
- (id)diskCacheDirectory;
- (void)initDirectory;
- (void)initStorage:;
- (id)initWithName:option:;
- (void)setCustomStorage:;
- (void)setDiskCacheDirectory:;
- (id)storageWithName:type:;
- (BOOL)removeAll;
- (BOOL)setObject:forKey:;
- (BOOL)save;
- (void)setStorage:;
- (BOOL)removeObjectsForKeys:;
- (id)storage;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)setOption:;
- (id)objectsForKeys:;
- (id)allObjects;
- (id)option;
- (BOOL)hasObjectForKey:;
+ (void)deleteWithName:;
+ (void)removeDiskCache;
+ (id)cachePath;
@end
