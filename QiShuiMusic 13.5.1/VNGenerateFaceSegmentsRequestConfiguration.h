@interface VNGenerateFaceSegmentsRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) float faceBoundingBoxExpansionRatio;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (void)setFaceBoundingBoxExpansionRatio:;
- (float)faceBoundingBoxExpansionRatio;
+ (float)beginRangeFaceBoundingBoxExpansionRatio;
+ (float)endRangeFaceBoundingBoxExpansionRatio;
+ (float)defaultFaceBoundingBoxExpansionRatio;
+ (BOOL)expansionRatioWithinValidRange:;
@end
