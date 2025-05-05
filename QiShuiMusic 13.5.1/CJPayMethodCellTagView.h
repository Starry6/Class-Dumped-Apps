@interface CJPayMethodCellTagView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIColor borderColor;
@property (nonatomic) UIColor textColor;
- (void)p_setupUI;
- (void)setBorderColor:;
- (id)borderColor;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (id)titleLabel;
- (void)updateTitle:;
@end
