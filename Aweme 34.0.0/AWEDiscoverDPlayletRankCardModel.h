@interface AWEDiscoverDPlayletRankCardModel : AWEBaseApiModel
@property (nonatomic) NSString rankCardText;
@property (nonatomic) NSNumber rank;
@property (nonatomic) NSString rankType;
@property (nonatomic) NSString rankSchema;
- (id)rankCardText;
- (id)rankSchema;
- (void)setRankCardText:;
- (void)setRankSchema:;
- (id)rank;
- (void)setRank:;
- (void).cxx_destruct;
- (void)setRankType:;
- (id)rankType;
+ (id)JSONKeyPathsByPropertyKey;
@end
