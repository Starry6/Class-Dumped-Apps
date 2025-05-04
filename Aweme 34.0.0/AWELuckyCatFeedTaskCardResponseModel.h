@interface AWELuckyCatFeedTaskCardResponseModel : AWELiteBaseApiModel
@property (nonatomic) NSString cardKey;
@property (nonatomic) AWELuckyCatFeedTaskCardModel card;
@property (nonatomic) AWELuckyCatFeedTaskCardInsertInfo insertInfo;
- (void)setCardKey:;
- (id)cardKey;
- (id)insertInfo;
- (void)setInsertInfo:;
- (id)card;
- (void)setCard:;
- (void).cxx_destruct;
+ (id)cardJSONTransformer;
+ (id)insertInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
