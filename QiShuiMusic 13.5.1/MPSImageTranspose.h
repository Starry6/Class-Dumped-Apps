@interface MPSImageTranspose : MPSUnaryImageKernel
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)initEncoder;
+ (id)libraryInfo:;
@end
