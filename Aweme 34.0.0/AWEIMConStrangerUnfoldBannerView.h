@interface AWEIMConStrangerUnfoldBannerView : UIView
@property (nonatomic) AWEIMConStrangerUnfoldBannerConfig config;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton<IESIMRichButtonProtocol> confirmButton;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIView bottomLine;
- (void)updateWithChatHasBackground:;
- (void)__didTapConfirmButton:;
- (void)__didTapCloseButton:;
- (void)__createViews;
- (void)__layoutViews;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)confirmButton;
- (void)setConfirmButton:;
- (void)setCloseButton:;
- (id)closeButton;
- (id)bottomLine;
- (void)setBottomLine:;
@end
