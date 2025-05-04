@interface AWEAwemeDetailPerformanceMonitorHandler : AWEOnPlayAndMonitorBaseHandler
- (id)paramsForVideoPlayQuality;
- (id)paramsForVideoPlayEnd;
- (id)paramsForVideoPlayFailed:;
- (id)getTransmissionParamsForEvent:;
- (id)paramsForVideoRequest:;
- (id)paramsForVideoRequestResponse;
- (id)paramsForVideoBlock;
@end
