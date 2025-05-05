@interface BWIrisDiscontinuity : NSObject
@property (nonatomic) {?=qiIq} time;
@property (nonatomic) {?=qiIq} targetFrameDuration;
- (id)targetFrameDuration;
- (void)dealloc;
- (id)time;
- (id)initWithTime:duration:targetFrameDuration:onlyRetime:generateIFrames:timeSkews:;
- (void)resetWithNewTimeSkews:;
- (BOOL)containsVideoBufferTime:;
- (BOOL)shouldKeepBufferWithTime:forceKeepingBuffer:nextAdjustedTimeInOut:discontinuityFrameAttributesOut:;
@end
