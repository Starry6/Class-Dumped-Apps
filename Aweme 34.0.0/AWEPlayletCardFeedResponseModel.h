@interface AWEPlayletCardFeedResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray cardList;
@property (nonatomic) q offset;
@property (nonatomic) BOOL hasMore;
- (id)cardList;
- (void)setCardList:;
- (void)setOffset:;
- (long long)offset;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)cardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
