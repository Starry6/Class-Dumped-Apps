@interface IESLiveSaaSStreamPlayerLayoutDynamicConfig : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSStreamPlayerLayoutContentFrame contentFrame;
@property (nonatomic) q topAvoidType;
@property (nonatomic) q bottomAvoidType;
@property (nonatomic) q scaleType;
@property (nonatomic) IESLiveSaaSStreamPlayerLayoutAlignModeWrapper big;
@property (nonatomic) IESLiveSaaSStreamPlayerLayoutAlignModeWrapper small;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)bigJSONTransformer;
+ (id)contentFrameJSONTransformer;
+ (id)smallJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)configWithDictionary:;
@end
