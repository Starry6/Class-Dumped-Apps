@interface TLKButton : UIView
@property (nonatomic) TLKTapContainerButton button;
@property (nonatomic) CAShapeLayer outerProgressLayer;
@property (nonatomic) CAShapeLayer innerProgressLayer;
@property (nonatomic) double progress;
@property (nonatomic) TLKImageView imageView;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) BOOL toggled;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImage untoggledImage;
@property (nonatomic) UIImage toggledImage;
@property (nonatomic) UIImage overlayImage;
@property (nonatomic) {CGSize=dd} fixedSize;
@property (nonatomic) BOOL indeterminate;
@property (nonatomic) UIImage imageOnImageView;
@property (nonatomic) UIView hitView;
- (id)backgroundView;
- (id)init;
- (id)overlayImage;
- (id)intrinsicContentSize;
- (void)tlk_updateForAppearance:;
- (BOOL)isIndeterminate;
- (void)layoutSubviews;
- (id)containerView;
- (void)setContainerView:;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setProgress:;
- (void)setFixedSize:;
- (double)progress;
- (id)button;
- (id)sizeThatFits:;
- (BOOL)isToggled;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setBackgroundView:;
- (id)imageView;
- (id)fixedSize;
- (void)setButton:;
- (void)setImageView:;
- (void)setOverlayImage:;
- (id)iconColor;
- (void)setProgress:animated:;
- (id)toggledImage;
- (void)setToggledImage:;
- (void)beginIndeterminateAnimation;
- (void)endIndeterminateAnimation;
- (void)hideProgressAnimated:;
- (void)showPlayIndicator:;
- (void)_updateInnerProgressLayerStroke;
- (id)_innerProgressLayer;
- (id)_outerProgressLayer;
- (void)setToggled:;
- (id)imageOnImageView;
- (void)setButtonSelectionState:;
- (void)_beginIndeterminateAnimation;
- (void)updateOuterProgressLayerStroke;
- (id)_newShapeViewWithBounds:lineWidth:;
- (void)addTarget:forAction:;
- (id)hitView;
- (id)untoggledImage;
- (void)setUntoggledImage:;
- (id)outerProgressLayer;
- (void)setOuterProgressLayer:;
- (id)innerProgressLayer;
- (void)setInnerProgressLayer:;
+ (id)blurColorForImage:forButtonSize:withOffsetRight:withOffsetBottom:;
+ (id)blurColorForColor:;
+ (id)_calculateStatistics:withSize:;
@end
