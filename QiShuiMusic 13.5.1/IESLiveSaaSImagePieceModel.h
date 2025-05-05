@interface IESLiveSaaSImagePieceModel : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSImage image;
@property (nonatomic) float scalingRate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setScalingRate:;
- (float)scalingRate;
+ (id)formatJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
