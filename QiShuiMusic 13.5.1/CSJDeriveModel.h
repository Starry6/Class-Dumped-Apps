@interface CSJDeriveModel : NSObject
@property (nonatomic) NSString lottieUrlStr;
@property (nonatomic) NSString audioUrlStr;
@property (nonatomic) NSString adPicUrlStr;
@property (nonatomic) q videoResolutionWidth;
@property (nonatomic) q videoResolutionHeight;
@property (nonatomic) double videoDuration;
- (void)setAdPicUrlStr:;
- (void)setAudioUrlStr:;
- (id)adPicUrlStr;
- (id)audioUrlStr;
- (id)lottieUrlStr;
- (void)setLottieUrlStr:;
- (void)setVideoResolutionHeight:;
- (void)setVideoResolutionWidth:;
- (long long)videoResolutionHeight;
- (long long)videoResolutionWidth;
- (double)videoDuration;
- (void).cxx_destruct;
- (void)setVideoDuration:;
+ (id)deriveModelWithMaterial:;
@end
