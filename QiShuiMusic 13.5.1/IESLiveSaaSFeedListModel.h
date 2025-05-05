@interface IESLiveSaaSFeedListModel : BDDynamicMTLModel
@property (nonatomic) NSArray feedCells;
@property (nonatomic) NSArray scheduledLives;
@property (nonatomic) IESLiveSaaSFeedExtraModel extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDictionary:error:;
+ (id)extraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
