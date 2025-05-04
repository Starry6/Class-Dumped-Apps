@interface AWEFollowListCategoryResponse : AWEBaseApiModel
@property (nonatomic) AWEFollowListCategoryStatisticsModel categoryCount;
- (void)setCategoryCount:;
- (id)categoryCount;
- (void).cxx_destruct;
+ (id)categoryCountJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
