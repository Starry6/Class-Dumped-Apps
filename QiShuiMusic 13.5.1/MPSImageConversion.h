@interface MPSImageConversion : MPSUnaryImageKernel
@property (nonatomic) Q sourceAlpha;
@property (nonatomic) Q destinationAlpha;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)initWithDevice:srcAlpha:destAlpha:backgroundColor:conversionInfo:;
- (id)initWithDevice:transform:;
- (void)encodeToCommandBuffer:sourceTexture:sourceDecode:destinationTexture:destinationDecode:;
- (unsigned long long)sourceAlpha;
- (unsigned long long)destinationAlpha;
+ (id)libraryInfo:;
@end
