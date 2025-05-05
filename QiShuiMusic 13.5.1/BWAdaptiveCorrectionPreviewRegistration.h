@interface BWAdaptiveCorrectionPreviewRegistration : NSObject
- (void)dealloc;
- (void)cleanupResources;
- (id)initWithCameraInfoByPortType:;
- (int)allocateResourcesWithVideoFormat:metalContext:;
- (int)registerWiderSampleBufferUsingADC:narrowerSampleBuffer:narrowerRect:macroTransitionType:narrowerToWiderTransformsOut:;
- (int)computeAlignmentFromWiderSampleBuffer:narrowerSampleBuffer:narrowerToWiderTransformsOut:;
+ (id)flattenNarrowerToWiderTransforms:narrowerDimensions:narrowerFinalCropRect:atNarrowerToWiderCameraScale:useYAnchorAtHeightCenter:;
@end
