@interface MPSCPURayIntersector : NSObject
@property (nonatomic) Q rayDataType;
@property (nonatomic) Q rayStride;
@property (nonatomic) Q intersectionDataType;
@property (nonatomic) Q intersectionStride;
- (id)init;
- (void)getIntersectionsOfType:rays:intersections:rayCount:accelerationStructure:;
- (void)setRayDataType:;
- (void)setIntersectionDataType:;
- (void)setRayStride:;
- (void)setIntersectionStride:;
- (unsigned long long)rayDataType;
- (unsigned long long)intersectionDataType;
- (unsigned long long)rayStride;
- (unsigned long long)intersectionStride;
@end
