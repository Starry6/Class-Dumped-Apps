@interface TLKEnlargedTitleView : TLKView
@property (nonatomic) TLKLabel titleLabel;
@property (nonatomic) TLKLabel subtitleLabel;
@property (nonatomic) TLKMultilineText title;
@property (nonatomic) TLKMultilineText subtitle;
- (void)setTitleLabel:;
- (id)subtitleLabel;
- (void)setSubtitleLabel:;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)subtitle;
- (id)titleLabel;
- (id)titleLabelText;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (id)subtitleLabelText;
@end
