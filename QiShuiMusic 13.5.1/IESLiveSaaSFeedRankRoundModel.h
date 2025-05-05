@interface IESLiveSaaSFeedRankRoundModel : BDDynamicMTLModel
@property (nonatomic) q changeTime;
@property (nonatomic) NSArray rankLists;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)rankListsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
