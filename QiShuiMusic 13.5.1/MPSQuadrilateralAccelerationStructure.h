@interface MPSQuadrilateralAccelerationStructure : MPSPolygonAccelerationStructure
@property (nonatomic) Q quadrilateralCount;
- (id)initWithDevice:;
- (void)setPolygonType:;
- (id)vertexBuffer;
- (id)initWithGroup:;
- (unsigned long long)quadrilateralCount;
- (void)setQuadrilateralCount:;
@end
