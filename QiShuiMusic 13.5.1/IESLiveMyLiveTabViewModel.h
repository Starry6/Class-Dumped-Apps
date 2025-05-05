@interface IESLiveMyLiveTabViewModel : NSObject
@property (nonatomic) q nextQueryIndex;
@property (nonatomic) HTSLiveMyLiveTab metaData;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray cellItems;
@property (nonatomic) NSMutableSet cellIdentifiers;
@property (nonatomic) BOOL shouldScrollToTop;
- (id)cellIdentifiers;
- (void)createCellItems;
- (id)cellItems;
- (id)createSpaceCellViewModel;
- (id)initWithMetaData:;
- (void)loadMore:;
- (void)loadMoreCellItemsWithTab:;
- (long long)nextQueryIndex;
- (void)setCellIdentifiers:;
- (void)setCellItems:;
- (void)setNextQueryIndex:;
- (void)setShouldScrollToTop:;
- (BOOL)shouldScrollToTop;
- (void)setMetaData:;
- (void)setHasMore:;
- (void)setTitle:;
- (id)metaData;
- (id)title;
- (void).cxx_destruct;
- (BOOL)hasMore;
@end
