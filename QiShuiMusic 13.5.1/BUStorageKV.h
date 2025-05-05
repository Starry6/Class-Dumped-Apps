@interface BUStorageKV : NSObject
@property (nonatomic) <BUDBStorageProtocol> db;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)unSecureUnArchiveObjectWithData:;
- (id)db;
- (void)removeAll;
- (BOOL)setObject:forKey:;
- (id)allKeys;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)setDb:;
- (unsigned long long)count;
- (void)removeObjectForKey:;
- (id)initWith:;
+ (id)initWithName:option:;
@end
