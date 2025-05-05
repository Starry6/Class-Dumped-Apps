@interface IESLiveSaaSAnchorRankEntranceThresholdModel : MTLModel
@property (nonatomic) q min;
@property (nonatomic) q max;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)min;
- (long long)max;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:;
@end
