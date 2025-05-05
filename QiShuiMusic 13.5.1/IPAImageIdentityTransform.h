@interface IPAImageIdentityTransform : IPAImageTransform
- (id)description;
- (id)inverseTransform;
- (id)mapVector:;
- (BOOL)canAlignToPixelsExactly;
@end
