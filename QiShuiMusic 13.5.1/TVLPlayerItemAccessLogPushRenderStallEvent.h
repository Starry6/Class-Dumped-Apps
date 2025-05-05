@interface TVLPlayerItemAccessLogPushRenderStallEvent : TVLPlayerItemAccessLogPushStallEvent
@property (nonatomic) q audioCaptureStallTime;
@property (nonatomic) q videoCaptureStallTime;
@property (nonatomic) q videoDropStallTime;
- (long long)audioCaptureStallTime;
- (void)initRenderStallTime:videoCaptureStallTime:videoDropStallTime:;
- (id)initWithSeiInfo:videoSendStallTime:durationSinceFirstFrame:seiSource:;
- (void)setAudioCaptureStallTime:;
- (void)setVideoCaptureStallTime:;
- (void)setVideoDropStallTime:;
- (long long)videoCaptureStallTime;
- (long long)videoDropStallTime;
@end
