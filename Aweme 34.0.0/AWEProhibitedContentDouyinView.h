@interface AWEProhibitedContentDouyinView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel label;
@property (nonatomic) NSString text;
- (void)updateFont:;
- (void)configUI;
- (void)didChangedLanguage;
- (void)setLabel:;
- (void)dealloc;
- (void)setText:;
- (id)initWithFrame:;
- (id)text;
- (id)label;
- (id)iconImageView;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setIconImageView:;
@end
