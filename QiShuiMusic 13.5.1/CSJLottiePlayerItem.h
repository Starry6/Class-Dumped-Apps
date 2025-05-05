@interface CSJLottiePlayerItem : NSObject
@property (nonatomic) NSString audioUrlStr;
@property (nonatomic) NSString lottieUrlStr;
@property (nonatomic) double videoDuration;
@property (nonatomic) NSString coverUrlStr;
@property (nonatomic) q lottieResolutionWidth;
@property (nonatomic) q lottieResolutionHeight;
- (void)setAudioUrlStr:;
- (void)setCoverUrlStr:;
- (id)audioUrlStr;
- (id)coverUrlStr;
- (long long)lottieResolutionHeight;
- (long long)lottieResolutionWidth;
- (id)lottieUrlStr;
- (void)setLottieResolutionHeight:;
- (void)setLottieResolutionWidth:;
- (void)setLottieUrlStr:;
- (double)videoDuration;
- (void).cxx_destruct;
- (void)setVideoDuration:;
@end
