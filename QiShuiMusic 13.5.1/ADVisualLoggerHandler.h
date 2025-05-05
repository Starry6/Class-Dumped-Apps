@interface ADVisualLoggerHandler : ADLogManagerHandler
- (void)dealloc;
- (id)initWithName:;
- (void).cxx_destruct;
- (id)name;
- (long long)setHostName:;
- (long long)setLogFolder:;
- (void)preEnable;
- (void)postDisable;
- (void)logPixelBuffer:name:timestamp:;
- (void)logPointCloud:name:timestamp:;
- (void)logString:name:timestamp:;
- (void)logRawBuffer:size:name:timestamp:;
- (void)logCalibration:name:timestamp:;
- (void)logDictionary:name:timestamp:;
- (void)logMatrix4x4:name:timestamp:;
- (void)logMatrix4x3:name:timestamp:;
- (long long)removeFileSettings;
- (long long)removeHostSettings;
@end
