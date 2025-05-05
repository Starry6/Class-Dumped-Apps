@interface TLKButtonView : TLKView
@property (nonatomic) TLKStackView stackView;
@property (nonatomic) TLKLabel titleLabel;
@property (nonatomic) NSString title;
- (void)setTitleLabel:;
- (void)setStackView:;
- (void)setTitle:;
- (id)stackView;
- (id)title;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)setupContentView;
- (void)observedPropertiesChanged;
+ (id)defaultLayoutMargins;
@end
