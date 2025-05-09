@interface SFUnifiedBarItemView : UIButton
@property (nonatomic) SFUnifiedBarItem item;
@property (nonatomic) NSString reuseIdentifier;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL occluded;
@property (nonatomic) BOOL hovering;
@property (nonatomic) double squishedInset;
@property (nonatomic) NSString cutoutBorderCopyGroupName;
@property (nonatomic) BOOL needsEraserBasedCutoutBorder;
@property (nonatomic) UIView contentView;
@property (nonatomic) SFUnifiedBarMetrics barMetrics;
@property (nonatomic) SFUnifiedBarTheme barTheme;
@property (nonatomic) q platterStyle;
@property (nonatomic) double barBackgroundAlpha;
@property (nonatomic) double themeColorVisibility;
@property (nonatomic) double squishTransformFactor;
@property (nonatomic) double preferredWidth;
@property (nonatomic) UIDragPreviewParameters previewParameters;
- (BOOL)isOccluded;
- (id)item;
- (id)contentView;
- (id)reuseIdentifier;
- (id)barMetrics;
- (void)setVisible:;
- (void)layoutSubviews;
- (double)themeColorVisibility;
- (double)preferredWidth;
- (void)prepareForReuse;
- (id)hitTest:withEvent:;
- (id)initWithFrame:;
- (void)setItem:;
- (void)applyTheme;
- (void)setThemeColorVisibility:;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (BOOL)gestureRecognizerShouldBegin:;
- (BOOL)isVisible;
- (void)setBarMetrics:;
- (void)setOccluded:;
- (void)updateConstraints;
- (void)setReuseIdentifier:;
- (void)_updateContentAlpha;
- (id)previewParameters;
- (void)_buttonShapesEnabledDidChange;
- (void)_setShowsPlatter:;
- (void)_setShowsCutoutBorderEffects:;
- (void)_setShowsCutoutBorderEraser:;
- (void)setBarTheme:;
- (void)setPlatterStyle:;
- (void)setNeedsEraserBasedCutoutBorder:;
- (void)_updateShowsCutoutBorder;
- (void)_layOutCutoutBorder;
- (void)_disableVibrancyIfNeededForTheme:;
- (void)_updatePlatterEffect;
- (void)_applyThemeToPlatterView:;
- (void)_applyPlatterColor:;
- (void)_updateOverrideUserInterfaceStyle;
- (void)setCutoutBorderCopyGroupName:;
- (void)setBarBackgroundAlpha:;
- (void)_updateBackgroundAlpha;
- (BOOL)_shouldEnableCopyCutoutBorder;
- (BOOL)_shouldEnablePlatterCutoutBorder;
- (BOOL)_shouldHidePlatterView;
- (void)setSquishTransformFactor:;
- (void)updateCornerRadius;
- (id)barTheme;
- (long long)platterStyle;
- (double)barBackgroundAlpha;
- (double)squishTransformFactor;
- (BOOL)isHovering;
- (void)setHovering:;
- (double)squishedInset;
- (void)setSquishedInset:;
- (id)cutoutBorderCopyGroupName;
- (BOOL)needsEraserBasedCutoutBorder;
@end
