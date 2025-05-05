@interface ByteRTCVideoSolution : NSObject
@property (nonatomic) {CGSize=dd} videoSize;
@property (nonatomic) q frameRate;
@property (nonatomic) q maxKbps;
@property (nonatomic) q minKbps;
@property (nonatomic) q encoderPreference;
- (void)setEncoderPreference:;
- (long long)maxKbps;
- (void)setMaxKbps:;
- (long long)minKbps;
- (void)setMinKbps:;
- (long long)encoderPreference;
- (id)init;
- (void)setFrameRate:;
- (long long)frameRate;
- (BOOL)isValid;
- (id)description;
- (id)videoSize;
- (void)setVideoSize:;
@end
