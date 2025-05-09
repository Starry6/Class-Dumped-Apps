@interface IESECShopGoodsDataController : IESECListDataController
@property (nonatomic) NSNumber totalCount;
@property (nonatomic) q cursor;
@property (nonatomic) IESECShopContext shopContext;
@property (nonatomic) IESECTracker tracker;
@property (nonatomic) q currentPage;
@property (nonatomic) NSString materialId;
@property (nonatomic) NSString searchWord;
@property (nonatomic) NSString paramsFromFE;
@property (nonatomic) NSDictionary passThroughAPIFromFE;
@property (nonatomic) NSString nextPageParams;
@property (nonatomic) BOOL hasMoreRecommendFeedData;
@property (nonatomic) IESECShopFilterDiffableModel shopFilterDiffableModel;
@property (nonatomic) IESECStoreFilterDiffableModel storeFilterDiffableModel;
@property (nonatomic) IESECShopMultiGoodsDiffableModel goodsDiffableModel;
@property (nonatomic) IESECShopStateDiffableModel stateDiffableModel;
@property (nonatomic) IESECShopStateDiffableModel extraStateDiffableModel;
@property (nonatomic) IESECShopRecommendFeedDiffableModel recommendFeedDiffableModel;
@property (nonatomic) IESECShopCartsInfoModel cartsModel;
@property (nonatomic) Q layoutType;
@property (nonatomic) IESECShopGoodsObjectDiffableModel lynxProductModel;
@property (nonatomic) IESECShopRecommendFeedDiffableModel recommendMixCardsDiffableModel;
@property (nonatomic) IESECShopProductsPromotionalFilterState promotionalFilterState;
@property (nonatomic) BOOL clickedFilter;
@property (nonatomic) IESECShopRecommendTitleObject recommendTitleDiffableModel;
@property (nonatomic) IESECShopRecommendMallObject recommendMallDiffableModel;
@property (nonatomic) NSString materialTitle;
@property (nonatomic) q querySource;
- (void)setRecommendTitleDiffableModel:;
- (void)setShopContext:;
- (void)addGoodsList:sortTypes:pickTypes:selectButtons:bizExtra:hasMore:cursur:;
- (void)cancelLatestProductListTask;
- (id)cartsModel;
- (BOOL)clickedFilter;
- (void)configWithGoodsListResponse:;
- (void)configWithTabModel:;
- (id)currentTabProductIDs;
- (id)extraStateDiffableModel;
- (id)goodsDiffableModel;
- (BOOL)hasMoreRecommendFeedData;
- (void)initFetchWithCompletion:;
- (void)loadMoreWithCompletion:;
- (id)lynxProductModel;
- (id)materialTitle;
- (id)nextPageParams;
- (id)nextPageParamsForQuerySource:;
- (id)paramsFromFE;
- (id)passThroughAPIFromFE;
- (id)preprocessLogExtra:;
- (id)promotionalFilterState;
- (id)recommendFeedDiffableModel;
- (id)recommendMallDiffableModel;
- (id)recommendMixCardsDiffableModel;
- (id)recommendTitleDiffableModel;
- (void)requestCartsNumberWithCompletion:;
- (void)requestClassficationRecommendWithCompletion:;
- (void)requestGoodsInfo:withCompletion:;
- (void)requestGoodsListHeaderViewBackgroundImageWithCompletion:;
- (void)requestNextPageWithQuerySource:completion:;
- (void)requestRecommendMallWithCompletion:;
- (void)resetNextPageParams;
- (void)resetRecommendFeedData;
- (id)searchWord;
- (void)setCartsModel:;
- (void)setClickedFilter:;
- (void)setExtraStateDiffableModel:;
- (void)setGoodsDiffableModel:;
- (void)setHasMoreRecommendFeedData:;
- (void)setLynxProductModel:;
- (void)setMaterialTitle:;
- (void)setNextPageParams:;
- (void)setNextPageParams:forQuerySource:;
- (void)setParamsFromFE:;
- (void)setPassThroughAPIFromFE:;
- (void)setPromotionalFilterState:;
- (void)setRecommendFeedDiffableModel:;
- (void)setRecommendMallDiffableModel:;
- (void)setRecommendMixCardsDiffableModel:;
- (void)setSearchWord:;
- (void)setShopFilterDiffableModel:;
- (void)setStateDiffableModel:;
- (void)setStoreFilterDiffableModel:;
- (id)shopContext;
- (id)shopFilterDiffableModel;
- (id)stateDiffableModel;
- (id)storeFilterDiffableModel;
- (unsigned long long)layoutType;
- (void)setTracker:;
- (long long)cursor;
- (void)setLayoutType:;
- (id)init;
- (id)tracker;
- (id)totalCount;
- (void)setCursor:;
- (long long)currentPage;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)reset;
- (void)setCurrentPage:;
- (id)materialId;
- (void)setMaterialId:;
- (long long)querySource;
- (void)setQuerySource:;
- (void)setTotalCount:;
+ (id)fetchGoodsListWithAPIPath:parameters:completion:;
@end
