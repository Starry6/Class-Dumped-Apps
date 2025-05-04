@interface AWEYAPTransportCitySceneModel : AWEBaseApiModel
@property (nonatomic) NSString bizScene;
@property (nonatomic) NSString sceneName;
@property (nonatomic) AWEYAPTransportCitySceneIconConfig sceneConfig;
@property (nonatomic) BOOL recommendFlag;
@property (nonatomic) NSArray trafficCardList;
- (void)setBizScene:;
- (BOOL)recommendFlag;
- (id)trafficCardList;
- (id)bizScene;
- (id)sceneConfig;
- (void)setSceneConfig:;
- (void)setRecommendFlag:;
- (void)setTrafficCardList:;
- (id)sceneName;
- (void).cxx_destruct;
- (void)setSceneName:;
+ (id)trafficCardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
