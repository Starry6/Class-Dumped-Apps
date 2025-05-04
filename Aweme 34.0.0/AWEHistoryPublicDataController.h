@interface AWEHistoryPublicDataController : AWEListDataController
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSMutableDictionary cachedInsertIDs;
@property (nonatomic) NSString secUserID;
- (id)secUserID;
- (void)setSecUserID:;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)filterDuplicatedDatasourceWithArray:isEqual:;
- (id)cachedInsertIDs;
- (void)setCachedInsertIDs:;
- (id)cursor;
- (id)init;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
