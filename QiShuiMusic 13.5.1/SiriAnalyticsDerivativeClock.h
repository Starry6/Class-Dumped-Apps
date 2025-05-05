@interface SiriAnalyticsDerivativeClock : SiriAnalyticsLogicalClock
@property (nonatomic) NSUUID isolatedStreamUUID;
- (id)init;
- (void).cxx_destruct;
- (id)initWithClockIdentifier:isolatedStreamUUID:timestampOffset:rootClock:;
- (id)isolatedStreamUUID;
@end
