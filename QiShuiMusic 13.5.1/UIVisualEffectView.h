@interface UIVisualEffectView : UIView
@property (nonatomic) double _cornerRadius;
@property (nonatomic) _UIVisualEffectViewCornerMask _cornerMask;
@property (nonatomic) BOOL _applyCornerMaskToSelf;
@property (nonatomic) double _backdropViewBackgroundColorAlpha;
@property (nonatomic) NSArray backgroundEffects;
@property (nonatomic) NSArray contentEffects;
@property (nonatomic) BOOL useLiveMasking;
@property (nonatomic) BOOL _noiseEnabled;
@property (nonatomic) NSString _groupName;
@property (nonatomic) _UIVisualEffectBackdropView _captureView;
@property (nonatomic) BOOL allowsDithering;
@property (nonatomic) BOOL allowsBlurring;
@property (nonatomic) _UIVisualEffectViewBackdropCaptureGroup _captureGroup;
@property (nonatomic) NSArray _captureDependents;
@property (nonatomic) UIVisualEffectView _captureSource;
@property (nonatomic) q _renderMode;
@property (nonatomic) UIImage _maskImage;
@property (nonatomic) BOOL _allowsGroupFiltering;
@property (nonatomic) BOOL useReducedTransparencyForContentEffects;
@property (nonatomic) UIView contentView;
@property (nonatomic) UIVisualEffect effect;
- (void)sf_configureAsStartPageBackground;
- (void)sf_configureAsStartPageBackgroundWithNonVibrantBackgroundColor:;
- (void)sf_configureAsStartPageForegroundWithEffectStyle:;
- (void)sf_setHighlighted:cellState:;
- (void)sf_setHighlighted:cellState:nonVibrantBackgroundColor:;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (void)_commonInit;
- (void)_populateArchivedSubviews:;
- (id)contentView;
- (id)_traitCollectionForChildEnvironment:;
- (void)dealloc;
- (void)_updateSubviews;
- (id)_maskImage;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)setAllowsBlurring:;
- (void)_applyCornerRadiusToSubviews;
- (id)_captureView;
- (void)_setContinuousCornerRadius:;
- (void)_generateBackgroundEffects:contentEffects:;
- (void)_setCornerRadius:;
- (id)_groupName;
- (id)backgroundEffects;
- (void)_configureEffects;
- (id)initWithCoder:;
- (void)_updateEnvironmentAndFlagUpdatesIfNecessary:;
- (id)_initialValueForKey:;
- (void)setBackgroundEffects:;
- (void)_addSubview:positioned:relativeTo:;
- (void)_updateEffectForAccessibilityChanges:;
- (void)setContentEffects:;
- (void)setEffect:;
- (double)_cornerRadius;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void)encodeWithCoder:;
- (BOOL)allowsDithering;
- (void)_setGroupName:;
- (BOOL)_applyCornerMaskToSelf;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)description;
- (void)_generateDeferredAnimations:;
- (void)_ensureBackgroundHost;
- (void)setContentView:;
- (void)setAllowsDithering:;
- (id)contentEffects;
- (id)initWithEffect:;
- (id)effect;
- (double)_continuousCornerRadius;
- (BOOL)allowsBlurring;
- (id)_effectDescriptorForEffects:usage:;
- (id)_environment;
- (id)_cornerCurve;
- (id)_cornerMask;
- (void)_ensureContentHostWithView:;
- (void)_generateEffectAnimations:;
- (void)_setEffect:;
- (void)_updateEffectsFromLegacyEffect;
- (void)_updateSubView:frame:;
- (id)_captureGroup;
- (void)_setCaptureView:;
- (id)_captureDependents;
- (void)_setCaptureDependents:;
- (void)_addCaptureDependent:;
- (void)_removeCaptureDependent:;
- (void)_updateCaptureDependents;
- (long long)_renderMode;
- (void)_setRenderMode:;
- (void)_setCornerRadius:continuous:maskedCorners:;
- (void)_setCornerMask:;
- (void)_setNoiseEnabled:;
- (BOOL)_isNoiseEnabled;
- (id)_maskImageForMaskView:;
- (void)_setMaskView:;
- (id)_maskView;
- (void)_setMaskImage:;
- (BOOL)_allowsGroupFiltering;
- (void)_setAllowsGroupFiltering:;
- (id)_debug;
- (id)_whatsWrongWithThisEffect;
- (void)_setBackdropViewBackgroundColorAlpha:;
- (double)_backdropViewBackgroundColorAlpha;
- (void)_setUseReducedTransparencyForContentEffects:;
- (BOOL)_useReducedTransparencyForContentEffects;
- (void)_updateEffectForSnapshotWillBegin:;
- (void)_updateEffectForSnapshotDidEnd:;
- (void)_updateEffectForAlphaTransitionWillBegin:;
- (void)_updateEffectForAlphaTransitionDidEnd:;
- (void)_updateEffectBackgroundColor;
- (void)_resetEffect;
- (void)_updateEffectForReducedTransparency;
- (void)_setTintOpacity:;
- (id)_contentHost;
- (id)_backgroundHost;
- (id)_captureSource;
- (BOOL)_useLiveMasking;
- (void)_setUseLiveMasking:;
- (id)_colorViewBoundsOverlayCreateIfNecessary:;
+ (id)photoSmallAttributionVisualEffectView;
+ (id)sf_startPageCellBackgroundEffectViewWithShadow:;
+ (BOOL)supportsSecureCoding;
+ (Class)_contentViewClass;
@end
