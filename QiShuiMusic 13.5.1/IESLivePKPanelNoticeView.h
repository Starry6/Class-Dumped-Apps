@interface IESLivePKPanelNoticeView : UIView
@property (nonatomic) IESLivePKPanelNoticeViewConfig config;
@property (nonatomic) IESLiveImageView tipsImageView;
@property (nonatomic) IESLiveImageView transferImageView;
@property (nonatomic) HTSLiveScorllView scrollTextLabel;
@property (nonatomic) IESLiveButton transferButton;
@property (nonatomic) IESLiveButton closeButton;
@property (nonatomic) UITapGestureRecognizer tapGestureRecognizer;
- (id)scrollTextLabel;
- (void)didTapTransferButton;
- (void)setScrollTextLabel:;
- (void)setTipsImageView:;
- (void)setTransferButton:;
- (void)setTransferImageView:;
- (void)setupScrollTextViewConstraints;
- (void)startScrollAnimation;
- (id)tipsImageView;
- (id)transferButton;
- (id)transferImageView;
- (void)updateUIWithConfig:;
- (void)updateUIWithRivalsResponseTipInfo:;
- (void)updateUIWithTopTipInfo:;
- (void)setTapGestureRecognizer:;
- (void)setConfig:;
- (id)tapGestureRecognizer;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)config;
- (id)closeButton;
- (void)setCloseButton:;
- (void)didTapCloseButton;
- (void)layoutUI;
@end
