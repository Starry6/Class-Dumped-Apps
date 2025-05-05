@interface IPABestFitImageSizePolicy : IPAImageSizePolicy
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)transformSize:;
- (double)transformScaleForSize:;
- (BOOL)isBestFitPolicy;
- (id)initWithFitSize:;
@end
