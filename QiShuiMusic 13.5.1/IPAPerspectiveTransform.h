@interface IPAPerspectiveTransform : IPAImageTransform
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)inverseTransform;
- (id)mapVector:;
- (BOOL)canAlignToPixelsExactly;
- (id)initWithInputGeometry:intrinsicGeometry:projectionTransform:viewingTransform:;
- (id)intrinsicGeometry;
@end
