@interface AWEPropRecommendMusicReponseModel : ACCBaseApiModel
@property (nonatomic) NSArray recommendMusicList;
@property (nonatomic) NSString bubbleTitle;
- (id)bubbleTitle;
- (void)setBubbleTitle:;
- (id)recommendMusicList;
- (void)setRecommendMusicList:;
- (void).cxx_destruct;
+ (id)recommendMusicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
