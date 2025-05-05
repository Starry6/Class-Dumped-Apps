@interface IESIMSearchMusicFinalModel : IESIMSearchMusicModel
@property (nonatomic) IESIMSearchMusicRecommendedVideosModel recommedVideos;
- (id)recommedVideos;
- (void)setRecommedVideos:;
- (void).cxx_destruct;
+ (id)recommedVideosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
