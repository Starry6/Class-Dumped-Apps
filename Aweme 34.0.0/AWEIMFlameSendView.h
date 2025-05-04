@interface AWEIMFlameSendView : UIView
@property (nonatomic) AWEIMFlameSendViewModel viewModel;
@property (nonatomic) UIButton flameReplyButton;
@property (nonatomic) UIButton flameSendButton;
@property (nonatomic) DUXBaseButton flameOrderButton;
- (void)initSubviews;
- (void)configWithViewModel:;
- (BOOL)shouldUseNewStyle;
- (id)flameReplyButton;
- (id)flameSendButton;
- (id)flameOrderButton;
- (void)handleClickFlameReply;
- (void)handleClickFlameSend;
- (void)handleClickFlameOrder;
- (void)setFlameReplyButton:;
- (void)setFlameSendButton:;
- (void)setFlameOrderButton:;
- (id)accessibilityElements;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)updateSubviews;
@end
