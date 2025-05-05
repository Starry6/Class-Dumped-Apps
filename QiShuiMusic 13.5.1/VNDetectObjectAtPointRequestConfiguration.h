@interface VNDetectObjectAtPointRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) {CGPoint=dd} inputPoint;
- (void)setInputPoint:;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (id)inputPoint;
@end
