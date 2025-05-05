@interface IESLiveSaaSUserPieceModel : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSUserModel userModel;
@property (nonatomic) NSNumber withColon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)userModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
