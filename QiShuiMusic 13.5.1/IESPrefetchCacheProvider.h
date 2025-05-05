@interface IESPrefetchCacheProvider : NSObject
@property (nonatomic) <IESPrefetchCacheStorageProtocol> storage;
@property (nonatomic) <IESPrefetchMonitorService> monitorService;
- (void)addCacheWithModel:forKey:;
- (id)allCaches;
- (void)cleanExpiredDataIfNeed;
- (id)fetchForKey:;
- (id)initWithCacheStorage:;
- (id)modelForKey:;
- (id)monitorService;
- (void)setMonitorService:;
- (void)setStorage:;
- (id)storage;
- (void).cxx_destruct;
@end
