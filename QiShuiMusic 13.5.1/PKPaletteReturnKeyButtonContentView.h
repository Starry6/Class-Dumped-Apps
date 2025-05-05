@interface PKPaletteReturnKeyButtonContentView : UIView
@property (nonatomic) NSString text;
@property (nonatomic) UIColor textColor;
@property (nonatomic) q layoutOrientation;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) BOOL useCompactLayout;
- (void)setText:;
- (void)setLayoutOrientation:;
- (id)initWithFrame:;
- (void)setTextColor:;
- (long long)layoutOrientation;
- (void).cxx_destruct;
- (id)textColor;
- (id)imageView;
- (id)text;
- (void)setImageView:;
- (void)_updateUI;
- (void)setUseCompactLayout:;
- (BOOL)useCompactLayout;
@end
