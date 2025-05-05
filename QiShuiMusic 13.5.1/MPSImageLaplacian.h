@interface MPSImageLaplacian : MPSUnaryImageKernel
@property (nonatomic) float bias;
- (void)setBias:;
- (float)bias;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
+ (id)libraryInfo:;
@end
