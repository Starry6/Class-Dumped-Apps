@interface ARCubemapCompletion : NSObject
@property (nonatomic) BOOL generateHDROutput;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned char)srgbToLog:;
- (id)completeCubemap:cameraExposure:rotationWorldFromCube:;
- (id)completeLatLongImage:;
- (id)toVImageBuffer:;
- (id)toTexture:;
- (id)grayCubemapOfSize:;
- (id)generateSeamSmoothingTexture;
- (BOOL)generateHDROutput;
- (void)setGenerateHDROutput:;
+ (id)sharedInstance;
@end
