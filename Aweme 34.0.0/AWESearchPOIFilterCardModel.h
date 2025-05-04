@interface AWESearchPOIFilterCardModel : AWEBaseApiModel
@property (nonatomic) AWEDoubleColumnSearchMerchandiseQueryModel queryInfo;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseUpdateQueryModel updateQuery;
@property (nonatomic) AWESearchPOIFilterControlInfoModel controllerInfoModel;
@property (nonatomic) double awesearch_poi_normalFilter_heightCache;
@property (nonatomic) double awesearch_poi_filterHeightCache;
@property (nonatomic) <AWESearchPOIFilterCardViewDelegate> cardDelegate;
@property (nonatomic) double quickFilterContentOffSetX;
- (id)cardDelegate;
- (void)setCardDelegate:;
- (void)setQueryInfo:;
- (id)updateQuery;
- (void)setUpdateQuery:;
- (void)setControllerInfoModel:;
- (double)quickFilterContentOffSetX;
- (void)setQuickFilterContentOffSetX:;
- (id)controllerInfoModel;
- (double)awesearch_poi_filterHeightCache;
- (double)awesearch_poi_normalFilter_heightCache;
- (void)setAwesearch_poi_normalFilter_heightCache:;
- (void)setAwesearch_poi_filterHeightCache:;
- (void).cxx_destruct;
- (id)queryInfo;
+ (id)updateQueryJSONTransformer;
+ (id)queryInfoJSONTransformer;
+ (id)controllerInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
