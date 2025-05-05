@interface IESECWinHeaderFansCommentsModel : MTLModel
@property (nonatomic) NSArray impressionWords;
@property (nonatomic) IESECWinAuthorFansInfo fansInfo;
@property (nonatomic) IESECGoodsDetailAuthorReputationModel reputation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)impressionWords;
- (id)fansInfo;
- (id)reputation;
- (void)setFansInfo:;
- (void)setImpressionWords:;
- (void)setReputation:;
- (void).cxx_destruct;
+ (id)impressionWordsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
