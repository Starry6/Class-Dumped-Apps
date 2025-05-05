@interface IESIMRecommendConcernResponseModel : IESIMBaseApiModel
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray cardList;
- (id)cardList;
- (void)setCardList:;
- (void)setHasMore:;
- (void).cxx_destruct;
- (BOOL)hasMore;
+ (id)cardListJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
