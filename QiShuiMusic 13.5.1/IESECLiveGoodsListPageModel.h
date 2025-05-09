@interface IESECLiveGoodsListPageModel : IESECLiveApiBaseModel
@property (nonatomic) IESECLiveListABConfigModel abConfig;
@property (nonatomic) IESECLiveListHintModel hint;
@property (nonatomic) IESECLiveListHeaderModel header;
@property (nonatomic) IESECLiveListBottomModel bottom;
@property (nonatomic) IESECLiveDynamicRegionModel bottomDynamicRegionModel;
@property (nonatomic) IESECLiveListCategoryModel category;
@property (nonatomic) IESECLiveListVibeModel vibe;
@property (nonatomic) IESECLiveGoodsListTopModel top;
@property (nonatomic) IESECLiveListOpenRegionModel openRegionModel;
@property (nonatomic) IESECLiveListThemeModel liveTheme;
@property (nonatomic) IESECLiveListExtraModel extra;
@property (nonatomic) q totalGoodsCount;
@property (nonatomic) NSString logID;
@property (nonatomic) NSNumber serverTime;
@property (nonatomic) NSArray goodsList;
@property (nonatomic) IESECLiveGoodsModel introducingGoodsModel;
@property (nonatomic) IESECLiveGoodsModel relatedInfoGoodsModel;
@property (nonatomic) NSArray targetFlashGoodsModels;
@property (nonatomic) NSNumber nextOffset;
- (id)openRegionModel;
- (long long)totalGoodsCount;
- (id)abConfig;
- (id)bottomDynamicRegionModel;
- (id)goodsList;
- (id)introducingGoodsModel;
- (id)liveTheme;
- (id)relatedInfoGoodsModel;
- (void)setAbConfig:;
- (void)setBottomDynamicRegionModel:;
- (void)setExtra:;
- (void)setGoodsList:;
- (void)setIntroducingGoodsModel:;
- (void)setLiveTheme:;
- (void)setNextOffset:;
- (void)setOpenRegionModel:;
- (void)setRelatedInfoGoodsModel:;
- (void)setServerTime:;
- (void)setTargetFlashGoodsModels:;
- (void)setTotalGoodsCount:;
- (void)setVibe:;
- (id)targetFlashGoodsModels;
- (id)vibe;
- (void)setHeader:;
- (id)extra;
- (id)top;
- (id)nextOffset;
- (void)setTop:;
- (void)setCategory:;
- (void).cxx_destruct;
- (id)bottom;
- (void)setBottom:;
- (id)serverTime;
- (id)header;
- (id)category;
- (id)logID;
- (void)setHint:;
- (id)hint;
- (void)setLogID:;
+ (id)goodsListJSONTransformer;
+ (id)targetFlashGoodsModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
