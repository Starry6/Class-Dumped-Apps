@interface ARImageBasedTechnique : ARTechnique
- (id)init;
- (id)processData:;
- (void).cxx_destruct;
- (id)_fullDescription;
- (void)requestResultDataAtTimestamp:context:;
- (void)pushResultData:forFrameReference:;
- (void)pushResultData:forFrame:;
- (void)pushResultData:forTimestamp:;
- (void)prepareResultData:forContext:;
- (BOOL)context:matchesFrameReference:;
- (long long)getDeviceOrientationFromImageData:;
@end
