@interface AVVideoCallPlayerController : AVPlayerController
@property (nonatomic) AVPictureInPictureControllerContentSource contentSource;
@property (nonatomic) {CGSize=dd} contentDimensions;
@property (nonatomic) BOOL pictureInPicturePossible;
- (id)contentDimensions;
- (BOOL)isPlaying;
- (void)setContentSource:;
- (id)contentSource;
- (double)rate;
- (void)setPictureInPicturePossible:;
- (long long)timeControlStatus;
- (void).cxx_destruct;
- (void)setContentDimensions:;
- (long long)status;
- (BOOL)isPictureInPicturePossible;
@end
