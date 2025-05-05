@interface ADFileLoggerHandler : ADLogManagerHandler
- (id)init;
- (id)initWithName:;
- (void).cxx_destruct;
- (id)name;
- (long long)setLogFolder:;
- (void)logPixelBuffer:name:timestamp:;
- (void)logPointCloud:name:timestamp:;
- (void)logString:name:timestamp:;
- (void)logRawBuffer:size:name:timestamp:;
- (void)logCalibration:name:timestamp:;
- (void)logDictionary:name:timestamp:;
- (void)logMatrix4x4:name:timestamp:;
- (id)getFullPath:timestamp:extension:;
- (void)logMatrix4x3:name:timestamp:;
@end
