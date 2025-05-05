@interface MPSNNSlice : MPSCNNKernel
- (id)initWithCoder:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
+ (id)libraryInfo:;
@end
