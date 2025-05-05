@interface CSJAppStorePreloadList : NSObject
@property (nonatomic) NSMutableArray preloadList;
@property (nonatomic) NSObject<OS_dispatch_queue> storeSerialQueue;
@property (nonatomic) Q maxPreloadCount;
- (void)eliminateItems:;
- (void)setPreloadList:;
- (unsigned long long)maxPreloadCount;
- (id)duplicatedPreloadItemForAppID:;
- (id)preloadItemForAppID:;
- (id)preloadList;
- (void)removeItemByAppID:;
- (void)removeItemBySKController:;
- (void)setMaxPreloadCount:;
- (void)setStoreSerialQueue:;
- (void)stopLoadItems:;
- (id)storeSerialQueue;
- (void)trackPreloadBreakEvent:;
- (void)removeItem:;
- (void)addItem:;
- (void)clearCache;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
