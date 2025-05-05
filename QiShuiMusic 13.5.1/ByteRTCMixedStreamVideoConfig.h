@interface ByteRTCMixedStreamVideoConfig : NSObject
@property (nonatomic) Q videoCodec;
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) q fps;
@property (nonatomic) q gop;
@property (nonatomic) q bitrate;
@property (nonatomic) BOOL enableBFrame;
- (void)setGop:;
- (BOOL)enableBFrame;
- (void)setEnableBFrame:;
- (long long)gop;
- (id)init;
- (void)setWidth:;
- (long long)bitrate;
- (void)setVideoCodec:;
- (long long)height;
- (long long)width;
- (void)setHeight:;
- (long long)fps;
- (unsigned long long)videoCodec;
- (void)setBitrate:;
- (void)setFps:;
@end
