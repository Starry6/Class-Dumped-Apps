@interface IESIMSearchMusicRecommendedVideosModel : IESIMBaseApiModel
@property (nonatomic) NSString aladdinSource;
@property (nonatomic) NSString docID;
@property (nonatomic) IESIMSearchMusicRecommendedVideosControlModel playStatus;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray videoList;
- (id)aladdinSource;
- (id)playStatus;
- (void)setAladdinSource:;
- (void)setPlayStatus:;
- (void)setVideoList:;
- (id)videoList;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)docID;
- (void)setDocID:;
+ (id)docIDJSONTransformer;
+ (id)playStatusJSONTransformer;
+ (id)videoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
