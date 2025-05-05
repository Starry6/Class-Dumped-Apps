@interface IESLiveCommentInterFlowTipView : UIView
@property (nonatomic) UIImageView tipsWarmImageView;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) HTSLiveButton closeButton;
@property (nonatomic) @? onCloseButtonTapped;
- (id)onCloseButtonTapped;
- (void)setOnCloseButtonTapped:;
- (void)setTipsLabel:;
- (void)setTipsWarmImageView:;
- (id)tipsLabel;
- (id)tipsWarmImageView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)closeButton;
- (void)setCloseButton:;
- (void)closeButtonTapped;
- (void)setUpUI;
@end
