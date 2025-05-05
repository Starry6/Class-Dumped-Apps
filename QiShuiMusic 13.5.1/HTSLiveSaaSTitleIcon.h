@interface HTSLiveSaaSTitleIcon : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSImage icon;
@property (nonatomic) NSInteger sizeType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
