@interface ABPKMLImageData : NSObject
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) double timestamp;
@property (nonatomic) ABPKImagePreProcessingParams preprocessingParams;
@property (nonatomic) q deviceOrientation;
@property (nonatomic) q abpkDeviceOrientation;
- (void)setDeviceOrientation:;
- (void)dealloc;
- (id)pixelBuffer;
- (long long)deviceOrientation;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
- (void)setPixelBuffer:;
- (id)initWithPixelBuffer:timestamp:abpkDeviceOrientation:preprocessingParameters:;
- (long long)abpkDeviceOrientation;
- (void)setAbpkDeviceOrientation:;
- (id)initWithPixelBuffer:timestamp:deviceOrientation:preprocessingParameters:;
- (id)preprocessingParams;
- (void)setPreprocessingParams:;
@end
