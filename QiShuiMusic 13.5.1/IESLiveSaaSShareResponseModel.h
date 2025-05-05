@interface IESLiveSaaSShareResponseModel : BDDynamicMTLModel
@property (nonatomic) NSNumber intimacy;
@property (nonatomic) IESLiveSaaSDisplayTextModel displayText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)displayTextJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
