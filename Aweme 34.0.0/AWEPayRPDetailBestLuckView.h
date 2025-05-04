@interface AWEPayRPDetailBestLuckView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) DUXButton sendButton;
@property (nonatomic) @? sendClickBlock;
- (void)p_setupUI;
- (id)sendClickBlock;
- (void)p_sendClicked;
- (void)setSendClickBlock:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (id)sendButton;
- (void)setSendButton:;
@end
