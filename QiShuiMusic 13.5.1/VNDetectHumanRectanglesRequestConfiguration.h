@interface VNDetectHumanRectanglesRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) BOOL upperBodyOnly;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (BOOL)upperBodyOnly;
- (void)setUpperBodyOnly:;
@end
