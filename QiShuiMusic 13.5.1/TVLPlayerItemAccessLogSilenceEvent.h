@interface TVLPlayerItemAccessLogSilenceEvent : TVLPlayerItemLogEvent
@property (nonatomic) q averageDBValue;
- (void)addSampleDBValue:;
- (long long)averageDBValue;
- (id)init;
@end
