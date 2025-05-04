@interface AWEShareSchemaLongVideoModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel videoCover;
@property (nonatomic) NSString videoTitle;
@property (nonatomic) NSArray reward;
@property (nonatomic) NSString episodeNumber;
@property (nonatomic) NSString score;
@property (nonatomic) NSString label;
@property (nonatomic) NSString type;
@property (nonatomic) NSArray tagList;
- (id)tagList;
- (void)setTagList:;
- (id)reward;
- (void)setReward:;
- (id)videoTitle;
- (void)setVideoTitle:;
- (id)videoCover;
- (void)setVideoCover:;
- (void)setLabel:;
- (void)setScore:;
- (id)episodeNumber;
- (id)label;
- (void)setEpisodeNumber:;
- (id)score;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
