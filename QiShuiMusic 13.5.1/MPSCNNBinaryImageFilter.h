@interface MPSCNNBinaryImageFilter : MPSCNNBinaryKernel
- (id)initWithCoder:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)initWithFilter:;
+ (id)libraryInfo:;
@end
