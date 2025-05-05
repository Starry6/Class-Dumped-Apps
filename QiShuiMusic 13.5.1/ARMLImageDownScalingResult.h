@interface ARMLImageDownScalingResult : NSObject
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) {CGSize=dd} imageResolution;
@property (nonatomic) {CGSize=dd} regionOfInterest;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRegion;
@property (nonatomic) ^{__CVBuffer=} undistortedPixelBuffer;
- (void)dealloc;
- (id)pixelBuffer;
- (id)imageResolution;
- (id)regionOfInterest;
- (void)setPixelBuffer:;
- (id)initWithPixelBuffer:regionOfInterest:cropRegion:;
- (void)setUndistortedPixelBuffer:;
- (id)cropRegion;
- (id)undistortedPixelBuffer;
@end
