@interface AWEMRSubscribeDoubleChannelPanelView : AWEMRSubscribeBasePanelView
@property (nonatomic) AWEMRSubscribeManageOptionCard leftOptionCard;
@property (nonatomic) AWEMRSubscribeManageOptionCard rightOptionCard;
- (void)setupContainerView;
- (double)containerViewTopInset;
- (double)containerViewBottomInset;
- (id)leftOptionCard;
- (id)rightOptionCard;
- (void)setLeftOptionCard:;
- (void)setRightOptionCard:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
