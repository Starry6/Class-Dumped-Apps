@interface ByteRTCScreenParam : NSObject
@property (nonatomic) q frameRate;
@property (nonatomic) q bitrate;
- (void)setFrameRate:;
- (long long)frameRate;
- (long long)bitrate;
- (void)setBitrate:;
@end
