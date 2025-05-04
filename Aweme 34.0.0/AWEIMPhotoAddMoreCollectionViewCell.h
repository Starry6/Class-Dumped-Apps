@interface AWEIMPhotoAddMoreCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) UIVisualEffectView blurView;
@property (nonatomic) UIView backgroundContainer;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (void)addBlurView;
- (void)removeBlurView;
- (void)layoutViewWithIconWidth:labelFontSize:;
- (id)blurView;
- (void)setBlurView:;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)setBackgroundContainer:;
- (id)backgroundContainer;
@end
