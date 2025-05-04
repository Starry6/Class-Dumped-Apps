@interface AWEPOIDetailNGRecommendPOIComponentViewModel : DitoComponentViewModel
@property (nonatomic) NSDictionary collectTextConfig;
@property (nonatomic) AWEPOIDetailInfoSimilarPOIRecommendViewModel bizViewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)poiDetail;
- (void)bindStateAndAction;
- (id)componentSizeWithMaxWidth:;
- (id)collectTextConfig;
- (void)didTapColletGuide;
- (id)bizViewModel;
- (void)setBizViewModel:;
- (void)setupBizViewModel;
- (id)clickCollectSchema;
- (void)setCollectTextConfig:;
- (id)initWithNode:;
- (void).cxx_destruct;
@end
