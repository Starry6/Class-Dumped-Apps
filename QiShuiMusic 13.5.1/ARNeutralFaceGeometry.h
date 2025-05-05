@interface ARNeutralFaceGeometry : NSObject
- (unsigned long long)vertexCount;
- (id)textureCoordinates;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)triangleCount;
- (id)vertices;
- (id)initFromCVAFaceTrackingSemantics;
- (unsigned long long)textureCoordinateCount;
- (id)triangleIndices;
+ (id)sharedNeutralGeometry;
@end
