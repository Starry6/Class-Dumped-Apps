@interface AWEPOIDetailoNGSharePOIComponentViewModel : DitoComponentViewModel
@property (nonatomic) NSArray conversationUsers;
@property (nonatomic) NSDictionary nodeData;
@property (nonatomic) AWEPOIDetailInfoSimilarPOIShareViewModel bizViewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindStateAndAction;
- (id)componentSizeWithMaxWidth:;
- (void)didTapColletGuide;
- (id)conversationUsers;
- (void)didTapShare;
- (id)bizViewModel;
- (void)setBizViewModel:;
- (void)setupBizViewModel;
- (id)currentNodeData;
- (void)setConversationUsers:;
- (id)initWithNode:;
- (void).cxx_destruct;
- (id)nodeData;
- (void)setNodeData:;
@end
