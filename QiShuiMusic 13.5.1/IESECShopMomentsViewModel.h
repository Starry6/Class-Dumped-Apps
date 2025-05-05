@interface IESECShopMomentsViewModel : NSObject
@property (nonatomic) Q apiStatus;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) Q cursor;
@property (nonatomic) BOOL hybridListEmpty;
@property (nonatomic) IESECStorePageContext pageContext;
@property (nonatomic) NSDictionary lynxGlobalProps;
@property (nonatomic) BOOL hasAutoLoadMoreOnce;
- (BOOL)hybridListEmpty;
- (id)lynxGlobalProps;
- (unsigned long long)apiStatus;
- (BOOL)hasAutoLoadMoreOnce;
- (void)initFetchShopMomentsDataWithCompletion:;
- (void)loadMoreShopMomentsDataWithCompletion:;
- (void)requestShopMomentsDataWithCompletion:;
- (void)setApiStatus:;
- (void)setHasAutoLoadMoreOnce:;
- (void)setHybridListEmpty:;
- (void)updateWithPreloadTabModel:;
- (unsigned long long)cursor;
- (void)setHasMore:;
- (void)setCursor:;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (id)pageContext;
- (void)setPageContext:;
+ (BOOL)isListModelEmpty:;
+ (void)p_requestShopMomentsDataWithParams:completion:;
@end
