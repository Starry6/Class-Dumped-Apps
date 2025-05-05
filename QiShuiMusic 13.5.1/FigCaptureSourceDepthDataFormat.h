@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat
@property (nonatomic) float fieldOfView;
- (id)highResStillImageDimensions;
- (unsigned int)mediaType;
- (float)fieldOfView;
- (BOOL)gainMapSupported;
- (BOOL)isStillImageOnlyDepthData;
- (id)copyWithNewPixelFormat:;
- (id)depthEngineOutputDimensions;
- (BOOL)RGBIRStereoFusionSupported;
@end
