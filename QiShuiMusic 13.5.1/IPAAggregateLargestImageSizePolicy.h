@interface IPAAggregateLargestImageSizePolicy : IPAImageSizePolicy
- (id)initWithPolicies:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)transformSize:;
- (double)transformScaleForSize:;
- (BOOL)isBestFitPolicy;
@end
