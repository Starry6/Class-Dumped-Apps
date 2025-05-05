@interface IESECWinInsertCardsResponse : IESECBaseApiModel
@property (nonatomic) NSArray mixFullCards;
- (id)mixFullCards;
- (void)setMixFullCards:;
- (void).cxx_destruct;
+ (id)mixFullCardsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
