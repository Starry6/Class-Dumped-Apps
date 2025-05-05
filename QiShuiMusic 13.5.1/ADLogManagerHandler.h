@interface ADLogManagerHandler : NSObject
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL humanReadableFormat;
- (BOOL)active;
- (id)name;
- (void)setActive:;
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
- (BOOL)humanReadableFormat;
- (void)setHumanReadableFormat:;
@end
