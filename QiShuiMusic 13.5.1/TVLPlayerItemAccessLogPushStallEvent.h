@interface TVLPlayerItemAccessLogPushStallEvent : TVLPlayerItemAccessLogStallEvent
@property (nonatomic) q audioSendStallTime;
@property (nonatomic) q videoSendStallTime;
@property (nonatomic) q durationSinceFirstFrame;
@property (nonatomic) NSString seiSource;
@property (nonatomic) NSArray pushRetryArray;
- (long long)audioSendStallTime;
- (long long)durationSinceFirstFrame;
- (long long)getRetryCode;
- (long long)getRetryTime;
- (id)initWithSeiInfo:videoSendStallTime:durationSinceFirstFrame:seiSource:;
- (id)pushRetryArray;
- (id)seiSource;
- (void)setAudioSendStallTime:;
- (void)setDurationSinceFirstFrame:;
- (void)setPushRetryArray:;
- (void)setSeiSource:;
- (void)setVideoSendStallTime:;
- (long long)videoSendStallTime;
- (void).cxx_destruct;
@end
