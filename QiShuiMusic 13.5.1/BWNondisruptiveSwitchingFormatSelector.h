@interface BWNondisruptiveSwitchingFormatSelector : NSObject
- (void)setVideoStabilizationStrength:;
- (void)dealloc;
- (id)initWithPortType:sensorIDString:baseZoomFactor:zoomFactorToNondisruptiveSwitchingFormatIndex:;
- (int)formatIndexForZoomFactor:frameStatistics:stillImageDigitalFlashMode:isStationary:;
@end
