@interface FigCaptureSourceCommonSettings : NSObject
@property (nonatomic) NSInteger initialMemoryPoolSizeMB;
@property (nonatomic) BOOL livePhotoVitalityScoringSupported;
@property (nonatomic) float livePhotoJPEGIntermediateCompressionRatioDefaultOverride;
@property (nonatomic) NSInteger previewRegistrationType;
@property (nonatomic) NSDictionary photoProcessingTimeRangesInMS;
@property (nonatomic) BOOL RGBIRStereoFusionThresholdsEnabled;
@property (nonatomic) BOOL flashMitigationRequired;
- (void)dealloc;
- (int)initialMemoryPoolSizeMB;
- (BOOL)RGBIRStereoFusionThresholdsEnabled;
- (BOOL)livePhotoVitalityScoringSupported;
- (id)photoProcessingTimeRangesInMS;
- (int)previewRegistrationType;
- (BOOL)flashMitigationRequired;
- (float)livePhotoJPEGIntermediateCompressionRatioDefaultOverride;
@end
