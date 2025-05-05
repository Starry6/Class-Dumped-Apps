@interface IESLiveLinkRTCInteractPublicStreamVideoConfig : NSObject
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) q fps;
@property (nonatomic) q bitrate;
- (void)setWidth:;
- (long long)bitrate;
- (long long)height;
- (long long)width;
- (void)setHeight:;
- (long long)fps;
- (void)setBitrate:;
- (void)setFps:;
@end
