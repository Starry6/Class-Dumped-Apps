@interface MPSImageStatisticsMeanAndVariance : MPSUnaryImageKernel
@property (nonatomic) {?={?=QQQ}{?=QQQ}} clipRectSource;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)initEncoder;
- (void)setClipRectSource:;
- (id)clipRectSource;
+ (id)libraryInfo:;
@end
