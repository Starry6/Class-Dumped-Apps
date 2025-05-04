@interface AWEPOIDetailNGFollowPOIComponentViewModel : DitoComponentViewModel
@property (nonatomic) NSDictionary nodeData;
@property (nonatomic) AWEPOIDetailInfoPOIFollowViewModel bizViewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindStateAndAction;
- (id)componentSizeWithMaxWidth:;
- (id)constData;
- (id)generalContext;
- (void)dispatchActionWithShowState:;
- (void)didTapFollowWithType:completion:;
- (void)didTapCollectGuide;
- (id)bizViewModel;
- (void)setBizViewModel:;
- (void)setupBizViewModel;
- (id)initWithNode:;
- (void).cxx_destruct;
- (id)cardData;
- (id)nodeData;
- (void)setNodeData:;
@end
