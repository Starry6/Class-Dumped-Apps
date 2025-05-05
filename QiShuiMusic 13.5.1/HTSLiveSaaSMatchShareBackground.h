@interface HTSLiveSaaSMatchShareBackground : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSImage verticalImg;
@property (nonatomic) IESLiveSaaSImage horizontalImg;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)horizontalImgJSONTransformer;
+ (id)verticalImgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
