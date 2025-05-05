@interface RAWDemosaicFilter : RAWFilter
- (int)sensorType;
- (id)range;
- (void).cxx_destruct;
- (id)outputImage;
- (id)regionOf:destRect:userInfo:;
- (id)crop;
- (int)forceVersion;
- (id)blacks;
- (id)noiseModel;
- (id)exposureFactor;
- (int)versionfor:;
- (id)phaseFor:;
- (id)phaseForXtrans;
- (id)phaseForBayer;
@end
