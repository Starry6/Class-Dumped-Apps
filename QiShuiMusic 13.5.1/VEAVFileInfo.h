@interface VEAVFileInfo : NSObject
@property (nonatomic) BOOL hasVideo;
@property (nonatomic) BOOL hasAudio;
@property (nonatomic) I codecType;
@property (nonatomic) q bitrate;
@property (nonatomic) double audioDuration;
@property (nonatomic) double videoDuration;
@property (nonatomic) {CGSize=dd} videoSize;
@property (nonatomic) {CGAffineTransform=dddddd} transform;
- (id)initWithAsset:;
- (id)init;
- (void)setHasVideo:;
- (void)setTransform:;
- (BOOL)hasVideo;
- (long long)bitrate;
- (id)transform;
- (double)videoDuration;
- (void)setHasAudio:;
- (BOOL)hasAudio;
- (void)setBitrate:;
- (void)setVideoDuration:;
- (double)audioDuration;
- (void)setAudioDuration:;
- (unsigned int)codecType;
- (void)setCodecType:;
- (id)videoSize;
- (void)setVideoSize:;
@end
