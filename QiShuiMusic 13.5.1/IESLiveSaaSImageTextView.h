@interface IESLiveSaaSImageTextView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIButton button;
@property (nonatomic) @? tapBlock;
- (void)buttonClicked;
- (void)setTapBlock:;
- (void)setupSubViews;
- (id)tapBlock;
- (id)textLabel;
- (id)initWithFrame:;
- (id)button;
- (void).cxx_destruct;
- (id)imageView;
- (void)setButton:;
- (void)setImageView:;
- (void)setTextLabel:;
+ (id)initWithConfigBlock:;
@end
