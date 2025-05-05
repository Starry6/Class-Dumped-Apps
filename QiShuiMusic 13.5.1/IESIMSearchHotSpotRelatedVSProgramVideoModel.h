@interface IESIMSearchHotSpotRelatedVSProgramVideoModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString authorID;
@property (nonatomic) NSString episodeID;
@property (nonatomic) IESIMURLModel posterURL;
@property (nonatomic) NSString videoTitle;
@property (nonatomic) NSString videoStage;
@property (nonatomic) NSString episodeExtra;
- (id)episodeExtra;
- (id)posterURL;
- (void)setEpisodeExtra:;
- (void)setEpisodeID:;
- (void)setPosterURL:;
- (void)setVideoStage:;
- (void)setVideoTitle:;
- (id)videoStage;
- (id)videoTitle;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)authorID;
- (void)setAuthorID:;
- (id)episodeID;
+ (id)posterURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
