@interface AWEEcomSearchMerchandiseRequestContext : NSObject
@property (nonatomic) NSString guideSearchWord;
@property (nonatomic) BOOL isFilterSearch;
@property (nonatomic) BOOL isLoadMore;
@property (nonatomic) BOOL ignoreFormat;
@property (nonatomic) @? fetchCompletion;
@property (nonatomic) NSDictionary monitorParams;
- (id)monitorParams;
- (BOOL)isLoadMore;
- (void)setIsLoadMore:;
- (id)guideSearchWord;
- (BOOL)ignoreFormat;
- (BOOL)isFilterSearch;
- (void)setIsFilterSearch:;
- (void)setIgnoreFormat:;
- (void)setMonitorParams:;
- (void)setFetchCompletion:;
- (void)setGuideSearchWord:;
- (id)fetchCompletion;
- (void).cxx_destruct;
@end
