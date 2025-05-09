@interface LiveStreamLinkInfo : NSObject
@property (nonatomic) NSInteger flags;
@property (nonatomic) NSString uid;
@property (nonatomic) q fps;
@property (nonatomic) {CGSize=dd} outputSize;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) q zOrder;
@property (nonatomic) Q videoMode;
@property (nonatomic) BOOL mirrored;
@property (nonatomic) double volume;
@property (nonatomic) NSInteger channelsPerFrame;
@property (nonatomic) NSInteger bytesPerFrame;
@property (nonatomic) NSInteger bitsPerChannel;
@property (nonatomic) NSInteger sampleRate;
- (void)setVideoMode:;
- (unsigned long long)videoMode;
- (id)init;
- (double)volume;
- (void)setX:;
- (id)uid;
- (void)setVolume:;
- (void)setY:;
- (int)sampleRate;
- (double)y;
- (void)setUid:;
- (void)setMirrored:;
- (void)setWidth:;
- (double)x;
- (double)height;
- (id)outputSize;
- (double)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (BOOL)isMirrored;
- (long long)fps;
- (void)setFlags:;
- (int)flags;
- (void)setSampleRate:;
- (long long)zOrder;
- (void)setFps:;
- (int)bytesPerFrame;
- (int)channelsPerFrame;
- (int)bitsPerChannel;
- (void)setOutputSize:;
- (void)setBytesPerFrame:;
- (void)setBitsPerChannel:;
- (void)setChannelsPerFrame:;
- (void)setZOrder:;
@end
