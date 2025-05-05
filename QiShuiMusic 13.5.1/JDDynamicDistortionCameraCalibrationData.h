@interface JDDynamicDistortionCameraCalibrationData : JDMutableCameraCalibrationData
@property (nonatomic) BOOL adjustToBinning;
- (void)setAdjustToBinning:;
- (id)initWithPixelSize:gdcModel:cameraToPlatformTransform:;
- (BOOL)updateForFrameWithDimensions:metadataDictionary:;
- (BOOL)pointFromMetadataField:key:point:;
- (BOOL)rectFromMetadataField:key:rect:;
- (BOOL)adjustToBinning;
@end
