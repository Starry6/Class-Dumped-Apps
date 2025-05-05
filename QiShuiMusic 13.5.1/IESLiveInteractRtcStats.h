@interface IESLiveInteractRtcStats : NSObject
@property (nonatomic) Q duration;
@property (nonatomic) double fps;
@property (nonatomic) double bitrate;
- (double)bitrate;
- (void)setDuration:;
- (id)description;
- (double)fps;
- (unsigned long long)duration;
- (void)setBitrate:;
- (void)setFps:;
@end
