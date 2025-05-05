@interface IPABestFitImageHeightPolicy : IPAImageSizePolicy
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)transformSize:;
- (id)initWithHeight:;
- (double)transformScaleForSize:;
- (BOOL)isBestFitPolicy;
@end
