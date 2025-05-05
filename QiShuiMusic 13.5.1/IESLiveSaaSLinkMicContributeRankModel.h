@interface IESLiveSaaSLinkMicContributeRankModel : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSUserModel userModel;
@property (nonatomic) NSNumber score;
@property (nonatomic) NSNumber rank;
@property (nonatomic) NSString gapDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)userModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
