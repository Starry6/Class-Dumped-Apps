@interface AWEIMShareLiveCardProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? didClickFollow;
@property (nonatomic) @? liveCoverTappedBlock;
@property (nonatomic) @? cardAvatarTappedBlock;
@property (nonatomic) @? cardAnchorTappedBlock;
@property (nonatomic) AWEIMShareLiveMessageViewModel viewModel;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) BOOL followButtonHiddenState;
@property (nonatomic) BOOL enableAvatarClickAction;
- (BOOL)followButtonHiddenState;
- (void)setFollowButtonHiddenState:;
- (id)didClickFollow;
- (void)setDidClickFollow:;
- (id)liveCoverTappedBlock;
- (void)setLiveCoverTappedBlock:;
- (id)cardAvatarTappedBlock;
- (void)setCardAvatarTappedBlock:;
- (id)cardAnchorTappedBlock;
- (void)setCardAnchorTappedBlock:;
- (BOOL)enableAvatarClickAction;
- (void)setEnableAvatarClickAction:;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
@end
