@interface AWEPlaylistVideoStatusResponse : AWEBaseApiModel
@property (nonatomic) q schedule;
@property (nonatomic) AWEURLModel videoUrl;
@property (nonatomic) NSString musicId;
@property (nonatomic) NSString clipMusicId;
@property (nonatomic) q startTime;
- (void)setMusicId:;
- (id)musicId;
- (id)clipMusicId;
- (void)setClipMusicId:;
- (long long)schedule;
- (void)setStartTime:;
- (void).cxx_destruct;
- (long long)startTime;
- (void)setSchedule:;
- (void)setVideoUrl:;
- (id)videoUrl;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)videoUrlJSONTransformer;
@end
