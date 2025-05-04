@interface AWEFeedGeneralLabelModel : AWEBaseApiModel
@property (nonatomic) q strategyType;
@property (nonatomic) NSArray candidates;
- (void)setStrategyType:;
- (long long)strategyType;
- (id)getTagsModelWithBusinessID:;
- (void)setCandidates:;
- (id)candidates;
- (void).cxx_destruct;
+ (id)candidatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
