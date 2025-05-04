@interface AWEPayReceiveCoverView : UIView
@property (nonatomic) Q status;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView downArrow;
@property (nonatomic) UITapGestureRecognizer tapGesture;
@property (nonatomic) @? buttonBlock;
- (void)p_setupUI;
- (void)setButtonBlock:;
- (id)buttonBlock;
- (void)p_setTitle;
- (void)p_setupButtonClick;
- (void)switchStatus:;
- (id)getButtonName;
- (void)setDownArrow:;
- (id)initWithStatus:;
- (void)setStatus:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (unsigned long long)status;
- (id)titleLabel;
- (id)tapGesture;
- (void)setTapGesture:;
- (id)downArrow;
@end
