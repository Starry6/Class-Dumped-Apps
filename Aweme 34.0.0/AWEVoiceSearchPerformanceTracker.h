@interface AWEVoiceSearchPerformanceTracker : NSObject
@property (nonatomic) q startTimestamp;
@property (nonatomic) q readyTimestamp;
- (void)trackWithEvent:trackType:extra:;
- (void)resetStartTimestamp;
- (void)setReadyTimestamp:;
- (long long)readyTimestamp;
- (void)resetReadyTimestampWithAsr:record:;
- (void)trackWithEvent:trackType:;
- (void)trackHistoryReadCostWithParams:;
- (long long)startTimestamp;
- (id)init;
- (void)setStartTimestamp:;
+ (void)trackAsrState:msg:;
@end
