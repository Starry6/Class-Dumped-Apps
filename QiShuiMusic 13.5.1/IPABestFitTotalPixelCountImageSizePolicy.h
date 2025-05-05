@interface IPABestFitTotalPixelCountImageSizePolicy : IPAImageSizePolicy
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)transformSize:;
- (double)transformScaleForSize:;
- (BOOL)isBestFitPolicy;
- (id)initWithTotalPixelCount:;
- (id)_transformSize:scale:;
@end
