@interface AWESearchFeelGoodFloatingIconSpringView : UIView
@property (nonatomic) UIView iconImageView;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) MASConstraint titleToIconConstraint;
@property (nonatomic) UILabel title;
- (void)setTitleToIconConstraint:;
- (id)titleToIconConstraint;
- (void)updateTextWidth:;
- (void)updateTextLeftMargin:rightToIconMarginConstraint:;
- (void)updateImageInfo:;
- (void)updateImageSizeInfo:height:;
- (void)updateImageRadiusInfo:;
- (void)updateIconWidth:;
- (void)updateIconHeight:;
- (id)init;
- (id)iconView;
- (void)setIconView:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setIconImageView:;
- (void)setupUI;
@end
