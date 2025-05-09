@interface BTDPoketto : NSObject
@property (nonatomic) NSRecursiveLock lock;
@property (nonatomic) NSMutableDictionary cidKeys;
@property (nonatomic) NSMutableArray allKeys;
@property (nonatomic) NSMutableDictionary models;
- (void)setIsFromLocal:;
- (id)cidKeys;
- (BOOL)getIsFromLocal:;
- (id)parseKeyFromCid:logExtra:model:;
- (void)cacheResultForCid:object:key:;
- (id)getObjectForCid:;
- (id)getObjectForCid:logExtra:;
- (BOOL)isConfirmProtocol:;
- (id)keyFromObject:;
- (id)mmkv;
- (void)removeDataForKey:cid:;
- (void)removeExpiredData:;
- (void)removeObjectForCid:logExtra:;
- (id)reqIdFromObject:;
- (id)ritFromLogExtra:;
- (id)ritFromObject:;
- (void)setAllKeys:;
- (void)setCidKeys:;
- (void)setObject:forReqId:;
- (void)setObject:forRit:;
- (id)sortedData;
- (void)setModels:;
- (void)setObject:;
- (id)init;
- (void)setObject:forKey:;
- (void)save;
- (id)allKeys;
- (id)models;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
- (void)removeData:;
- (unsigned long long)isValidObject:;
- (void)saveObject:forKey:;
+ (id)sharedInstance;
@end
