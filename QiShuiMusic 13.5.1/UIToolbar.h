@interface UIToolbar : UIView
@property (nonatomic) BOOL _locked;
@property (nonatomic) UIView _shadowView;
@property (nonatomic) NSString _backdropViewLayerGroupName;
@property (nonatomic) q _barTranslucence;
@property (nonatomic) double _backgroundTransitionProgress;
@property (nonatomic) UIBarButtonItem centerItem;
@property (nonatomic) BOOL autoHidesToolbarInFullscreen;
@property (nonatomic) q _hintFromCurrentAppearance;
@property (nonatomic) q _appearanceHint;
@property (nonatomic) UIView _backgroundView;
@property (nonatomic) BOOL _hidesShadow;
@property (nonatomic) BOOL _disableBlurTinting;
@property (nonatomic) NSArray backgroundEffects;
@property (nonatomic) BOOL _wantsLetterpressContent;
@property (nonatomic) BOOL _shouldStretchDuringCrossfadeTransition;
@property (nonatomic) q _itemDistribution;
@property (nonatomic) BOOL centerTextButtons;
@property (nonatomic) BOOL minibar;
@property (nonatomic) q barStyle;
@property (nonatomic) NSArray items;
@property (nonatomic) BOOL translucent;
@property (nonatomic) UIColor tintColor;
@property (nonatomic) UIColor barTintColor;
@property (nonatomic) UIToolbarAppearance standardAppearance;
@property (nonatomic) UIToolbarAppearance compactAppearance;
@property (nonatomic) UIToolbarAppearance scrollEdgeAppearance;
@property (nonatomic) UIToolbarAppearance compactScrollEdgeAppearance;
@property (nonatomic) <UIToolbarDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q barPosition;
- (id)configuration;
- (void)configureWithConfiguration:;
- (void)configureTransparent;
- (void)setCenterTextButtons:;
- (void)_setBackgroundView:;
- (void)_populateArchivedSubviews:;
- (long long)barStyle;
- (void)drawRect:;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (id)_traitCollectionForChildEnvironment:;
- (void)dealloc;
- (void)_setVisualAltitude:;
- (id)_itemAtPoint:;
- (id)intrinsicContentSize;
- (void)_updateBackgroundView;
- (void)setFrame:;
- (void)layoutSubviews;
- (id)_accessibilityHUDGestureManager:HUDItemForPoint:;
- (void)_setVisualAltitudeBias:;
- (void)_accessibilityHUDGestureManager:gestureLiftedAtPoint:;
- (id)items;
- (BOOL)pointInside:withEvent:;
- (void)setDelegate:;
- (id)barTintColor;
- (BOOL)_accessibilityHUDGestureManager:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)_didMoveFromWindow:toWindow:;
- (void)setTranslatesAutoresizingMaskIntoConstraints:;
- (id)initInView:withFrame:withItemList:;
- (id)backgroundEffects;
- (id)initWithCoder:;
- (long long)barPosition;
- (void)setBackgroundEffects:;
- (BOOL)centerTextButtons;
- (void)setBarTintColor:;
- (void)invalidateIntrinsicContentSize;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void)encodeWithCoder:;
- (void)setItems:;
- (id)centerItem;
- (id)_shadowView;
- (id)delegate;
- (id)sizeThatFits:;
- (void)setBounds:;
- (id)_backgroundView;
- (void).cxx_destruct;
- (void)setItems:animated:;
- (void)setTintColor:;
- (id)description;
- (void)setBarStyle:;
- (void)setTranslucent:;
- (BOOL)_shouldStretchDuringCrossfadeTransition;
- (BOOL)isTranslucent;
- (void)_setBarPosition:;
- (long long)_barPosition;
- (id)defaultSizeForOrientation:;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)_wantsLetterpressContent;
- (BOOL)_hidesShadow;
- (void)_sendAction:withEvent:;
- (void)_customViewChangedForButtonItem:;
- (void)_largeContentViewerEnabledStatusDidChange:;
- (BOOL)_disableBlurTinting;
- (void)_setDisableBlurTinting:;
- (void)_setButtonBackgroundImage:mini:forStates:;
- (long long)_barTranslucence;
- (id)_backdropViewLayerGroupName;
- (void)_setBackdropViewLayerGroupName:;
- (void)_setWantsLetterpressContent:;
- (void)_installDefaultAppearance;
- (void)setCompactAppearance:;
- (id)standardAppearance;
- (void)setStandardAppearance:;
- (void)setScrollEdgeAppearance:;
- (void)setCompactScrollEdgeAppearance:;
- (void)_effectiveBarTintColorDidChangeWithPreviousColor:;
- (void)_setHidesShadow:;
- (BOOL)isMinibar;
- (BOOL)_subclassImplementsDrawRect;
- (BOOL)_hostsLayoutEngineAllowsTAMIC_NO;
- (BOOL)_shouldDecodeSubviews;
- (id)_effectiveBarTintColor;
- (void)_setNeedsBackgroundViewUpdate;
- (void)_setupAXHUDGestureIfNecessary;
- (id)compactAppearance;
- (id)scrollEdgeAppearance;
- (id)compactScrollEdgeAppearance;
- (long long)_expectedInterfaceOrientation;
- (void)_setBackgroundTransitionProgress:;
- (double)_backgroundTransitionProgress;
- (void)_doCommonToolbarInit;
- (BOOL)_linkedBeforeWhitetailAndInitializedFromCoder;
- (id)__appearanceStorage;
- (void)_updateBarForStyle;
- (void)backdropView:didChangeToGraphicsQuality:;
- (long long)_itemDistribution;
- (void)_setItemDistribution:;
- (long long)_hintFromCurrentAppearance;
- (void)_setAppearanceHint:;
- (long long)_appearanceHint;
- (id)_frameOfBarButtonItem:;
- (void)_positionToolbarButtonsAndResetFontScaleAdjustment:;
- (void)_frameOrBoundsChangedWithVisibleSizeChange:wasMinibar:;
- (void)setBackgroundImage:forToolbarPosition:barMetrics:;
- (id)backgroundImageForToolbarPosition:barMetrics:;
- (void)setShadowImage:forToolbarPosition:;
- (id)shadowImageForToolbarPosition:;
- (void)_setLocked:;
- (BOOL)_isLocked;
- (void)_setForceTopBarAppearance:;
- (void)_46877859;
- (void)_setShadowView:;
- (void)setCenterItem:;
- (BOOL)autoHidesToolbarInFullscreen;
- (void)setAutoHidesToolbarInFullscreen:;
- (BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:;
- (double)_defaultAutolayoutSpacing;
- (double)_autolayoutSpacingAtEdge:forAttribute:inContainer:isGuide:;
+ (double)defaultHeight;
+ (id)defaultButtonFont;
+ (BOOL)_forceLegacyVisualProvider;
+ (id)_visualProviderForToolbar:;
+ (Class)_visualProviderClassForToolbar:;
+ (double)defaultHeightForBarSize:;
@end
