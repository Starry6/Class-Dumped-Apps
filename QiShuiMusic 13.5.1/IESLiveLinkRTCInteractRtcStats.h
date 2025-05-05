@interface IESLiveLinkRTCInteractRtcStats : NSObject
@property (nonatomic) Q duration;
@property (nonatomic) double fps;
@property (nonatomic) double bitrate;
- (double)bitrate;
- (void)setDuration:;
- (double)fps;
- (unsigned long long)duration;
- (void)setBitrate:;
- (void)setFps:;
@end
