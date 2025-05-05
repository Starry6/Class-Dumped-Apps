@interface VKCRemoveBackgroundResult : NSObject
@property (nonatomic) VKCRemoveBackgroundRequest request;
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) ^{CGImage=} maskImage;
@property (nonatomic) ^{CGImage=} orientedMaskImage;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} normalizedCropRect;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRect;
@property (nonatomic) q imageOrientation;
- (void)dealloc;
- (id)pixelBuffer;
- (id)cropRect;
- (id)request;
- (long long)imageOrientation;
- (void).cxx_destruct;
- (id)normalizedCropRect;
- (void)setMaskImage:;
- (id)maskImage;
- (id)createCGImage;
- (id)initWithMADResult:request:;
- (void)generateImageMaskIfNecessaryWithContext:;
- (id)orientedMaskImage;
- (void)setOrientedMaskImage:;
@end
