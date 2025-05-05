@interface AVCaptureSynchronizedData : NSObject
@property (nonatomic) {?=qiIq} timestamp;
- (void)dealloc;
- (id)timestamp;
- (id)_initWithTimestamp:;
- (id)adjustedTimestamp;
- (void)setTimestampOverride:;
- (void)setAdjustedTimestamp:;
- (BOOL)hasCorrespondingDepthData;
- (BOOL)hasCorrespondingVisionData;
- (int)constituentDeviceCaptureID;
@end
