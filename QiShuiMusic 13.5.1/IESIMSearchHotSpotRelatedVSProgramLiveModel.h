@interface IESIMSearchHotSpotRelatedVSProgramLiveModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString authorID;
@property (nonatomic) NSString roomID;
@property (nonatomic) IESIMURLModel posterURL;
@property (nonatomic) NSString videoTitle;
@property (nonatomic) NSString videoStage;
@property (nonatomic) q liveType;
@property (nonatomic) NSString episodeExtra;
- (id)episodeExtra;
- (long long)liveType;
- (id)posterURL;
- (void)setEpisodeExtra:;
- (void)setLiveType:;
- (void)setPosterURL:;
- (void)setVideoStage:;
- (void)setVideoTitle:;
- (id)videoStage;
- (id)videoTitle;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:;
- (id)authorID;
- (void)setAuthorID:;
+ (id)posterURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
