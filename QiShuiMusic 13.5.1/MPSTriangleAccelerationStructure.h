@interface MPSTriangleAccelerationStructure : MPSPolygonAccelerationStructure
@property (nonatomic) Q triangleCount;
- (id)initWithDevice:;
- (void)setPolygonType:;
- (unsigned long long)triangleCount;
- (void)setTriangleCount:;
- (id)initWithGroup:;
@end
