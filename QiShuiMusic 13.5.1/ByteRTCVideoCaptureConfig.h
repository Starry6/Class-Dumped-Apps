@interface ByteRTCVideoCaptureConfig : NSObject
@property (nonatomic) q preference;
@property (nonatomic) {CGSize=dd} videoSize;
@property (nonatomic) q frameRate;
- (void)setFrameRate:;
- (long long)frameRate;
- (long long)preference;
- (void)setPreference:;
- (id)videoSize;
- (void)setVideoSize:;
@end
