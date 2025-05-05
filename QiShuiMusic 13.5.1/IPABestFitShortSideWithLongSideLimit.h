@interface IPABestFitShortSideWithLongSideLimit : IPAImageSizePolicy
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)transformSize:;
- (double)transformScaleForSize:;
- (BOOL)isBestFitPolicy;
- (id)initWithNominalShortSide:minLongSide:maxLongSide:;
@end
