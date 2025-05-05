@interface MPSImageIntegral : MPSUnaryImageKernel
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)InitEncoder;
+ (id)libraryInfo:;
@end
