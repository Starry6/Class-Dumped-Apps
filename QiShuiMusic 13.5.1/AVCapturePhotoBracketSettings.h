@interface AVCapturePhotoBracketSettings : AVCapturePhotoSettings
@property (nonatomic) NSArray bracketedSettings;
@property (nonatomic) BOOL lensStabilizationEnabled;
- (void)setFlashMode:;
- (void)dealloc;
- (id)debugDescription;
- (void)setHDRMode:;
- (id)description;
- (id)copyWithZone:;
- (void)setAutoRedEyeReductionEnabled:;
- (void)setEV0PhotoDeliveryEnabled:;
- (void)setAutoStillImageStabilizationEnabled:;
- (void)setAutoVirtualDeviceFusionEnabled:;
- (void)setAutoDualCameraFusionEnabled:;
- (void)setLivePhotoMovieFileURL:;
- (void)setLivePhotoMovieFileURLForOriginalPhoto:;
- (void)setLivePhotoMovieMetadata:;
- (void)setLivePhotoMovieMetadataForOriginalPhoto:;
- (id)bracketedSettings;
- (id)_initWithFormat:processedFileType:rawPixelFormatType:rawFileType:bracketedSettings:uniqueID:exceptionReason:;
- (BOOL)isLensStabilizationEnabled;
- (void)setLensStabilizationEnabled:;
+ (id)photoBracketSettingsWithRawPixelFormatType:processedFormat:bracketedSettings:;
+ (id)photoBracketSettingsWithRawPixelFormatType:rawFileType:processedFormat:processedFileType:bracketedSettings:;
@end
