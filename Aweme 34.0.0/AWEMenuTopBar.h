@interface AWEMenuTopBar : UIView
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton doneButton;
@property (nonatomic) UIView bottomLine;
- (id)doneButton;
- (void)setDoneButton:;
- (void)setCancelButton:;
- (id)intrinsicContentSize;
- (id)initWithFrame:;
- (id)sizeThatFits:;
- (void)setTitleLabel:;
- (id)cancelButton;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (id)bottomLine;
- (void)setBottomLine:;
@end
