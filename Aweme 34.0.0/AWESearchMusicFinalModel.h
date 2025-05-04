@interface AWESearchMusicFinalModel : AWESearchMusicModel
@property (nonatomic) <ACCSearchMusicRecommendedVideosModelProtocol> recommedVideos;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWESearchMusicRecommendedVideosModel recommedVideos;
- (id)recommedVideos;
- (void)setRecommedVideos:;
- (void).cxx_destruct;
+ (id)recommedVideosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
