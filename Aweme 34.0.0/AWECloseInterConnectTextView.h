@interface AWECloseInterConnectTextView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIScrollView textView;
@property (nonatomic) NSString title;
@property (nonatomic) NSString text;
- (void)configUI;
- (id)textLabel;
- (id)textView;
- (void)setTextView:;
- (void)setText:;
- (id)initWithFrame:;
- (id)text;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)title;
- (id)titleLabel;
- (void)setTitle:;
- (void)setTextLabel:;
@end
