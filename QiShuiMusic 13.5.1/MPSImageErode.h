@interface MPSImageErode : MPSImageDilate
- (id)initWithCoder:device:;
- (Class)maxClass;
- (id)initWithDevice:kernelWidth:kernelHeight:values:;
@end
