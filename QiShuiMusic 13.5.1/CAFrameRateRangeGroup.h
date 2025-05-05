@interface CAFrameRateRangeGroup : NSObject
@property (nonatomic) {CAFrameRateRange=fff} arbitratedRange;
- (void)dealloc;
- (id)initWithDisplay:;
- (id)initWithHeartbeatRate:minimumFrameDuration:supportsVRR:compatQuantaMode:serverCompatQuantaMode:;
- (void)addFrameRateRange:;
- (void)removeFrameRateRange:;
- (void)updateFrameRateRange:toRange:;
- (id)arbitratedRange;
- (id)arbitratedIntervalRange;
- (id)reasonsWithCount:;
- (void)addReason:;
- (void)addCompatQuantaIntent;
- (BOOL)hasCompatQuantaIntent;
@end
