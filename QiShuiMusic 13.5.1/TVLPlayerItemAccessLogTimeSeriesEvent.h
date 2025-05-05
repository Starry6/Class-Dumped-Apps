@interface TVLPlayerItemAccessLogTimeSeriesEvent : TVLPlayerItemLogEvent
@property (nonatomic) q audioBufferDuration;
@property (nonatomic) q renderingFrameRate;
@property (nonatomic) q pullingBitrate;
@property (nonatomic) q pushingFrameRate;
@property (nonatomic) q pushingBitrate;
- (long long)audioBufferDuration;
- (long long)pullingBitrate;
- (long long)pushingBitrate;
- (long long)pushingFrameRate;
- (long long)renderingFrameRate;
- (void)setAudioBufferDuration:;
- (void)setPullingBitrate:;
- (void)setPushingBitrate:;
- (void)setPushingFrameRate:;
- (void)setRenderingFrameRate:;
- (id)init;
@end
