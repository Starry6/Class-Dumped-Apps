@interface IESLiveSaaSAnchorRankEntranceIntervalModel : MTLModel
@property (nonatomic) IESLiveSaaSAnchorRankEntranceThresholdModel hour;
@property (nonatomic) IESLiveSaaSAnchorRankEntranceThresholdModel region;
@property (nonatomic) q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hour;
- (id)region;
- (long long)type;
- (void).cxx_destruct;
+ (id)hourJSONTransformer;
+ (id)regionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
