@interface IPAImageTransformSequence : NSObject
- (void).cxx_destruct;
- (id)description;
- (id)inverseTransform;
- (id)initWithTransforms:;
- (BOOL)canAlignToPixelsExactly;
- (id)intrinsicGeometry;
- (id)inputGeometry;
- (id)mapPoint:;
@end
