@interface AWEIMListFPSChecker : NSObject
@property (nonatomic) q fps;
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) double startTime;
@property (nonatomic) double finishTime;
@property (nonatomic) q trackStatus;
- (void)p_tick:;
- (void)setTrackStatus:;
- (void)startRecord;
- (void)stopRecordAndTrackFPSWithEvent:extra:;
- (long long)trackStatus;
- (id)displayLink;
- (void)setDisplayLink:;
- (void)setStartTime:;
- (double)startTime;
- (void).cxx_destruct;
- (long long)fps;
- (void)setFps:;
- (void)setFinishTime:;
- (double)finishTime;
- (void)p_clear;
@end
