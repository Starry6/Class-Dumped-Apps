@interface ARFaceLightEstimationTechnique : ARTechnique
- (id)init;
- (void)dealloc;
- (id)processData:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)requestResultDataAtTimestamp:context:;
- (unsigned long long)requiredSensorDataTypes;
- (void)_processFaceDataInBackground:pixelBuffer:lightIntensity:timestamp:;
+ (float)_computeShSmoothingAlpha:;
+ (id)_transformFaceTrackingData:;
@end
