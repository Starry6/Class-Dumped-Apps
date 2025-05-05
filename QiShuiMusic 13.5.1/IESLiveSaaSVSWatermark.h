@interface IESLiveSaaSVSWatermark : BDDynamicMTLModel
@property (nonatomic) q position;
@property (nonatomic) q landscapeDis;
@property (nonatomic) q verticalDis;
@property (nonatomic) NSArray watermarkIconArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)watermarkIconArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
