@interface VKFrameProviderConfiguration : NSObject
@property (nonatomic) Q cameraPreset;
@property (nonatomic) Q resolutionPreset;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToFrameProviderConfiguration:;
- (unsigned long long)cameraPreset;
- (void)setCameraPreset:;
- (unsigned long long)resolutionPreset;
- (void)setResolutionPreset:;
@end
