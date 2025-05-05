@interface TVLPlayerItemAccessLogVideoBitrateSwitchEvent : TVLPlayerItemLogEvent
@property (nonatomic) q fromBitrate;
@property (nonatomic) q toBitrate;
- (void)bitrateDidSwitchFrom:to:;
- (long long)fromBitrate;
- (long long)toBitrate;
@end
