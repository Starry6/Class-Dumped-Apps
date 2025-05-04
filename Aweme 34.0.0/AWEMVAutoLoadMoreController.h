@interface AWEMVAutoLoadMoreController : AWEDCFeedBaseController
@property (nonatomic) q loadMoreRetryCount;
@property (nonatomic) BOOL isShowingCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onLoadPlaceholderDataEndWithResult:placeholderData:;
- (void)onLoadMoreListDataStartWithReason:;
- (void)bindEvents;
- (void)autoLoadMoreListDataWithType:;
- (BOOL)isShowingCache;
- (long long)loadMoreRetryCount;
- (void)setLoadMoreRetryCount:;
- (void)setIsShowingCache:;
- (id)getMVPageContext;
- (void)containerViewDidLoad;
@end
