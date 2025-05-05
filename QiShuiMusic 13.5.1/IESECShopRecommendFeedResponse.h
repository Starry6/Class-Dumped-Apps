@interface IESECShopRecommendFeedResponse : IESECBaseApiModel
@property (nonatomic) NSString recommendText;
@property (nonatomic) NSArray cards;
- (id)recommendText;
- (void)setCards:;
- (void)setRecommendText:;
- (void).cxx_destruct;
- (id)cards;
+ (id)cardsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
