@interface BitKVWrapper : NSObject
@property (nonatomic) {shared_ptr<BitKVSpace::BitKV>=^{BitKV}^{__shared_weak_count}} shared_kv;
@property (nonatomic) NSString fileName;
- (void)allObjectsWithSafeBlock:;
- (id)initWithName:path:;
- (void)setShared_kv:;
- (id)shared_kv;
- (id)unSecureUnArchiveObjectWithData:;
- (unsigned long long)fileSize;
- (BOOL)removeAll;
- (id)dataForKey:;
- (BOOL)setObject:forKey:;
- (id)fileName;
- (void)save;
- (id)allKeys;
- (BOOL)setData:forKey:;
- (BOOL)removeObjectsForKeys:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)setFileName:;
- (long long)count;
- (BOOL)removeObjectForKey:;
- (id).cxx_construct;
- (void)trim;
- (BOOL)hasObjectForKey:;
- (unsigned long long)usedSpace;
+ (id)initWithName:path:;
+ (id)initWithName:;
@end
