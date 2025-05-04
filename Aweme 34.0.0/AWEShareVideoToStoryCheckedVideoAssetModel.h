@interface AWEShareVideoToStoryCheckedVideoAssetModel : NSObject
@property (nonatomic) NSURL videoURL;
@property (nonatomic) BOOL isValid;
@property (nonatomic) double duration;
@property (nonatomic) double videoTrackDuration;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) double fps;
@property (nonatomic) double bitrate;
- (double)videoTrackDuration;
- (void)setVideoTrackDuration:;
- (void)setVideoURL:;
- (double)fps;
- (void)setDuration:;
- (id)videoURL;
- (id)description;
- (BOOL)isValid;
- (id)size;
- (void)setIsValid:;
- (void).cxx_destruct;
- (void)setSize:;
- (double)duration;
- (double)bitrate;
- (void)setBitrate:;
- (void)setFps:;
@end
