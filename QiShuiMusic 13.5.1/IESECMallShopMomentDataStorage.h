@interface IESECMallShopMomentDataStorage : NSObject
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} straight_out_lock;
@property (nonatomic) IESECMallShopMomentListModel straightOutListModel;
@property (nonatomic) BOOL hasAsyncLoadCacheData;
- (void)asyncLoadCahceFirstScreenData;
- (void)clearCacheData;
- (BOOL)hasAsyncLoadCacheData;
- (id)loadFirstScreenListModel;
- (void)removeStorageForKey:;
- (void)setHasAsyncLoadCacheData:;
- (void)setStraightOutListModel:;
- (void)setStraight_out_lock:;
- (void)storageBool:forKey:;
- (void)storageDictionary:forKey:;
- (id)straightOutListModel;
- (id)straight_out_lock;
- (id)syncLoadCacheFirstScreenData;
- (id)init;
- (void)dealloc;
- (BOOL)boolForKey:;
- (void).cxx_destruct;
- (id)dictionaryForKey:;
+ (id)sharedStorage;
@end
