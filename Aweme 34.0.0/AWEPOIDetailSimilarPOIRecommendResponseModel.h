@interface AWEPOIDetailSimilarPOIRecommendResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray similarPoiList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q cursor;
- (id)similarPoiList;
- (void)setSimilarPoiList:;
- (long long)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)similarPoiListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
