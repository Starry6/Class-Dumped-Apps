@interface CIImageProcessorInOut : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} region;
@property (nonatomic) ^{__IOSurface=} surface;
@property (nonatomic) BOOL usesSRGBTransferFunction;
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) Q bytesPerRow;
@property (nonatomic) NSInteger format;
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) Q digest;
- (id)surface;
- (unsigned long long)digest;
- (void)dealloc;
- (int)format;
- (id)pixelBuffer;
- (id)region;
- (id)debugDescription;
- (id)description;
- (id)device;
- (unsigned long long)bytesPerRow;
- (id)initWithSurface:texture:digest:allowSRGB:bounds:context:;
- (BOOL)usesSRGBTransferFunction;
@end
