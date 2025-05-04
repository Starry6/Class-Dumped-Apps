@interface AWEFeedEcommerceGoodsCardController : AWEBaseController
- (void)refreshCompletion:error:needAnimation:;
- (void)initialFetchCompletion:error:;
- (void)loadMoreCompletion:error:isFooterRefreshing:;
- (void)onInsertGoodCardNotification:;
- (void)onFeedGoodsCardShowNotification:;
- (BOOL)checkCanInsertGoodsCard;
- (void)insertFeedGoodsCardWithModel:;
- (void)trackCardRequestParams:;
- (id)getRequestCommonParamsWithList:;
- (id)getCurrentDate;
- (void)requestAndInsertCardWithParams:;
- (void)savePitayaNoneEffectiveInfoDate;
- (void)runPitayaTaskToGetParamsWithAwemeList:completion:;
- (BOOL)checkIfHasInserted;
- (BOOL)hasExceeded24Hours:;
- (void)insertFeedGoodsCardAwemeModelWithList:;
- (void)viewDidLoad;
@end
