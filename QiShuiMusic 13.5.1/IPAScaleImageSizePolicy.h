@interface IPAScaleImageSizePolicy : IPAImageSizePolicy
- (id)initWithScale:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)transformSize:;
- (double)transformScaleForSize:;
@end
