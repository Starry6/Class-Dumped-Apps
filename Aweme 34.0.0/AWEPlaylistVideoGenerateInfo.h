@interface AWEPlaylistVideoGenerateInfo : NSObject
@property (nonatomic) NSString taskId;
@property (nonatomic) NSURL videoUrl;
@property (nonatomic) NSString videoPath;
@property (nonatomic) NSString musicId;
@property (nonatomic) double startTime;
- (void)setMusicId:;
- (id)musicId;
- (void)setStartTime:;
- (void).cxx_destruct;
- (double)startTime;
- (id)taskId;
- (void)setVideoPath:;
- (id)videoPath;
- (void)setVideoUrl:;
- (id)videoUrl;
- (void)setTaskId:;
@end
