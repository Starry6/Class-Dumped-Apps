@interface AWESearchHotSpotRelatedVSProgramVideoModel : AWEBaseApiModel
@property (nonatomic) AWELiveVSEpisode episode;
@property (nonatomic) NSString title;
@property (nonatomic) NSString authorID;
@property (nonatomic) NSString episodeID;
@property (nonatomic) AWEURLModel posterURL;
@property (nonatomic) NSString videoTitle;
@property (nonatomic) NSString videoStage;
@property (nonatomic) NSString episodeExtra;
- (id)episodeExtra;
- (void)setEpisodeExtra:;
- (void)setEpisodeID:;
- (id)posterURL;
- (void)setPosterURL:;
- (id)videoTitle;
- (void)setVideoTitle:;
- (id)videoStage;
- (void)setVideoStage:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)episode;
- (void)setEpisode:;
- (id)authorID;
- (void)setAuthorID:;
- (id)episodeID;
+ (id)posterURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
