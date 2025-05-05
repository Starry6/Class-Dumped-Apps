@interface IESECTabKitNavItemView : UIView
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) <IESECTabKitNavItemViewDelegate> delegate;
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) Q fontSize;
@property (nonatomic) Q fontWeight;
@property (nonatomic) UIColor textColor;
- (void)configWithItemModel:;
- (void)navItemDidSelect;
- (id)textLabel;
- (void)setFontWeight:;
- (void)setDelegate:;
- (id)imageSize;
- (id)initWithFrame:;
- (unsigned long long)fontWeight;
- (void)setTextColor:;
- (id)delegate;
- (unsigned long long)fontSize;
- (void).cxx_destruct;
- (id)textColor;
- (id)imageView;
- (void)setFontSize:;
- (void)setImageView:;
- (void)setTextLabel:;
- (void)setImageSize:;
@end
