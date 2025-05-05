@interface IPAAffineImageTransform : IPAImageTransform
- (id)description;
- (id).cxx_construct;
- (id)matrix;
- (id)inverseTransform;
- (id)initWithInputGeometry:intrinsicGeometry:matrix:canAlignToPixelsExactly:;
- (id)mapVector:;
- (BOOL)canAlignToPixelsExactly;
@end
