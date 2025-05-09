@interface IESECWinTabApi : NSObject
@property (nonatomic) IESECWinContext context;
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserId;
@property (nonatomic) NSString ec_extra;
@property (nonatomic) NSString passThroughAPI;
@property (nonatomic) NSString clickedGoodsID;
@property (nonatomic) NSString commonPassThrough;
@property (nonatomic) Q tabType;
@property (nonatomic) q subTab;
@property (nonatomic) q cursor;
@property (nonatomic) q goodsType;
@property (nonatomic) q sortType;
@property (nonatomic) q sort;
@property (nonatomic) q size;
@property (nonatomic) NSString filterType;
@property (nonatomic) NSString categoryIDs;
@property (nonatomic) NSString subCategoryIDs;
@property (nonatomic) BOOL isFirstEnter;
@property (nonatomic) q upgradeVersion;
@property (nonatomic) NSString forceInsertInfo;
@property (nonatomic) NSString nextApi;
@property (nonatomic) NSString api;
@property (nonatomic) # modelClass;
- (id)forceInsertInfo;
- (id)nextApi;
- (void)setCategoryIDs:;
- (unsigned long long)tabType;
- (id)categoryIDs;
- (id)clickedGoodsID;
- (id)commonPassThrough;
- (id)ec_extra;
- (void)fetchWindowTabWithCompletion:metricsBlock:;
- (long long)goodsType;
- (BOOL)isFirstEnter;
- (id)passThroughAPI;
- (id)secUserId;
- (void)setClickedGoodsID:;
- (void)setCommonPassThrough:;
- (void)setEc_extra:;
- (void)setForceInsertInfo:;
- (void)setGoodsType:;
- (void)setIsFirstEnter:;
- (void)setNextApi:;
- (void)setPassThroughAPI:;
- (void)setSecUserId:;
- (void)setSubCategoryIDs:;
- (void)setSubTab:;
- (void)setTabType:;
- (void)setUpgradeVersion:;
- (id)subCategoryIDs;
- (long long)subTab;
- (void)trackEcWindowTabResponse:withRequestParams:response:error:;
- (long long)upgradeVersion;
- (long long)cursor;
- (id)userID;
- (id)context;
- (void)setFilterType:;
- (id)filterType;
- (void)setCursor:;
- (Class)modelClass;
- (void)setModelClass:;
- (void).cxx_destruct;
- (void)setUserID:;
- (long long)sort;
- (void)setContext:;
- (void)setSize:;
- (long long)size;
- (long long)sortType;
- (void)setSortType:;
- (void)setSort:;
- (id)api;
- (void)setApi:;
@end
