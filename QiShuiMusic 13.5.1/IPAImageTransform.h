@interface IPAImageTransform : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)inverseTransform;
- (id)initWithInputGeometry:intrinsicGeometry:;
- (id)mapVector:;
- (BOOL)canAlignToPixelsExactly;
- (id)intrinsicGeometry;
- (id)inputGeometry;
- (id)mapPoint:;
+ (id)identityTransformForGeometry:;
+ (id)compositeTransforms:;
@end
