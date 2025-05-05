@interface IESLiveSaaSVSWatermarkIcon : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSImage icon;
@property (nonatomic) q iconWidth;
@property (nonatomic) q iconType;
@property (nonatomic) q landscapeDis;
@property (nonatomic) q verticalDis;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
