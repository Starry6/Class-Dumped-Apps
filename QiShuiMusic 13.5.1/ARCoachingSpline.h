@interface ARCoachingSpline : NSObject
@property (nonatomic) ^{?=f} controlPoints;
@property (nonatomic) I numControlPoints;
@property (nonatomic) ^{?=} patchData;
@property (nonatomic) I patchDataLength;
@property (nonatomic) ^S indices;
@property (nonatomic) I numIndices;
- (id)indices;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)patchData;
- (id)controlPoints;
- (unsigned int)numControlPoints;
- (unsigned int)patchDataLength;
- (unsigned int)numIndices;
- (id)initWithPoints:numPoints:relativeThickness:pattern:mat:;
- (void)genLeftCapWithWidth:;
- (void)genRightCapWithWidth:;
- (void)genTubeIndicesWithPattern:;
+ (id)interpolate:p1:p2:p3:t:;
+ (id)interpolateTangent:p1:p2:p3:t:;
@end
