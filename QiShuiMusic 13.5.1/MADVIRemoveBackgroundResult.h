@interface MADVIRemoveBackgroundResult : MADResult
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) ^{CGImage=} image;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRect;
@property (nonatomic) float confidence;
- (float)confidence;
- (id)pixelBuffer;
- (id)initWithSurface:;
- (id)cropRect;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (id)image;
- (id)initWithSurface:cropRect:confidence:;
+ (BOOL)supportsSecureCoding;
@end
