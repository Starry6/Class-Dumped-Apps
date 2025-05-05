@interface BDAAppStorePreloadList : NSObject
@property (nonatomic) NSMutableArray preloadList;
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
- (void)stopLoadItems:;
- (void)trackPreloadBreakEvent:;
- (void)removeItem:;
- (void)addItem:;
- (void)clearCache;
- (id)init;
- (void).cxx_destruct;
@end
