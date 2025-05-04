@interface AWEPLVMixButtonHeaderButtonView : UIView
@property (nonatomic) UIImageView icon;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) Q buttonType;
@property (nonatomic) @? jumpSchemaOnClickBlock;
@property (nonatomic) UIGestureRecognizer tapGesture;
- (void)setupViewWithTitle:image:;
- (void)jumpSchemaOnClick;
- (id)jumpSchemaOnClickBlock;
- (void)setTitle:image:;
- (void)setToButtonTypeIfCan:;
- (void)setJumpSchemaOnClickBlock:;
- (unsigned long long)buttonType;
- (id)icon;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setButtonType:;
- (id)titleLabel;
- (id)tapGesture;
- (void)setTapGesture:;
- (id)initWithTitle:image:;
- (void)setupView;
@end
