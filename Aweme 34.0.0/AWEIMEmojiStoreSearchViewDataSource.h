@interface AWEIMEmojiStoreSearchViewDataSource : NSObject
@property (nonatomic) AWEIMEmojiStoreSearchResultView searchResultView;
@property (nonatomic) <IESIMHttpTask> requestingHttpTask;
@property (nonatomic) AWEIMEmojiResourcesListSearchResponseModel model;
@property (nonatomic) AWEIMEmojiStoreSearchResultDataSource searchResult;
@property (nonatomic) BOOL isDataRefreshed;
@property (nonatomic) BOOL shouldShowEmptyView;
@property (nonatomic) BOOL shouldShowNetErrorView;
@property (nonatomic) BOOL isSearchingEmptyString;
- (BOOL)shouldShowEmptyView;
- (void)setIsDataRefreshed:;
- (void)setShouldShowNetErrorView:;
- (BOOL)shouldShowNetErrorView;
- (BOOL)isDataRefreshed;
- (void)setSearchResultView:;
- (id)searchResultView;
- (void)setRequestingHttpTask:;
- (id)requestingHttpTask;
- (id)initWithSearchResultView:;
- (BOOL)isSearchingEmptyString;
- (void)fetchDataWithSearchingString:isLoadMore:;
- (void)setIsSearchingEmptyString:;
- (void)setShouldShowEmptyView:;
- (void)setModel:;
- (id)searchResult;
- (void)setSearchResult:;
- (id)model;
- (void).cxx_destruct;
@end
