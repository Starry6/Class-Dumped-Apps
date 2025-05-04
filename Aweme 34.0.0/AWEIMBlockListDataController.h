@interface AWEIMBlockListDataController : AWEListDataController
@property (nonatomic) q listType;
@property (nonatomic) q cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString hotsoonText;
@property (nonatomic) q hotsoonFilterCount;
@property (nonatomic) q hotsoonHasMore;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)setHotsoonHasMore:;
- (void)setHotsoonText:;
- (void)setHotsoonFilterCount:;
- (long long)hotsoonHasMore;
- (long long)hotsoonFilterCount;
- (id)hotsoonText;
- (void)updateLocalDataCenterWithBlockList:;
- (long long)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (long long)listType;
- (void)setListType:;
- (id)initWithListType:;
+ (id)blockListRequestURL;
+ (id)blockListAndHideMyPostListCountRequestURL;
@end
