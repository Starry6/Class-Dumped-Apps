@interface IPABestFitImageWidthPolicy : IPAImageSizePolicy
- (id)initWithWidth:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)transformSize:;
- (double)transformScaleForSize:;
- (BOOL)isBestFitPolicy;
@end
