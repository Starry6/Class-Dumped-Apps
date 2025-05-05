@interface TVLPlayerItemAccessLogPlaySpeedChangeEvent : TVLPlayerItemLogEvent
@property (nonatomic) float toSpeed;
- (float)toSpeed;
- (void)logPlaySpeedChange:;
@end
