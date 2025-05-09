@interface MTMaterialLayer : CABackdropLayer
@property (nonatomic) NSString recipeName;
@property (nonatomic) BOOL blurEnabled;
@property (nonatomic) BOOL zoomEnabled;
@property (nonatomic) @? backdropScaleAdjustment;
@property (nonatomic) double backdropScale;
@property (nonatomic) @? blurRadiusTransformer;
@property (nonatomic) BOOL shouldCrossfade;
@property (nonatomic) BOOL contentReplacedWithSnapshot;
@property (nonatomic) double privateOpacity;
@property (nonatomic) <MTRecipeMaterialSettingsProviding> recipeSettings;
@property (nonatomic) @? defaultBackdropScaleAdjustment;
@property (nonatomic) NSString recipe;
@property (nonatomic) double weighting;
@property (nonatomic) BOOL reduceTransparencyEnabled;
@property (nonatomic) BOOL reduceMotionEnabled;
@property (nonatomic) NSString debugIdentifier;
- (void)setBlurEnabled:;
- (BOOL)isReduceMotionEnabled;
- (BOOL)isBlurEnabled;
- (BOOL)isZoomEnabled;
- (void)setZoomEnabled:;
- (BOOL)shouldArchiveValueForKey:;
- (id)recipeName;
- (void)setReduceMotionEnabled:;
- (BOOL)shouldCrossfade;
- (id)init;
- (void)setShouldCrossfade:;
- (id)visualStylingProviderForCategory:;
- (void)addAnimation:forKey:;
- (id)debugIdentifier;
- (void)setDelegate:;
- (BOOL)isContentReplacedWithSnapshot;
- (void)didChangeValueForKey:;
- (void)setDebugIdentifier:;
- (BOOL)isReduceTransparencyEnabled;
- (void)layoutSublayers;
- (void)setBlurRadiusTransformer:;
- (void).cxx_destruct;
- (void)setBackdropScaleAdjustment:;
- (void)setContentReplacedWithSnapshot:;
- (void)setUnsafeUnretainedDelegate:;
- (id)description;
- (void)setRecipeName:;
- (void)setReduceTransparencyEnabled:;
- (void)prune;
- (id)backdropScaleAdjustment;
- (id)blurRadiusTransformer;
- (void)willChangeValueForKey:;
- (BOOL)allowsInPlaceFiltering;
- (void)setAllowsInPlaceFiltering:;
- (void)setRecipeName:fromBundle:;
- (void)_pruneAtCompletionOfCurrentTransaction;
- (void)_updateForChangeInRecipeAndConfiguration;
- (void)_updateForChangeInWeighting;
- (void)_configureIfNecessaryWithSettingsInterpolator:;
- (void)_configureBackdropLayerIfNecessaryWithSettingsInterpolator:;
- (void)_configureBackdropLayer:withSettingsInterpolator:preservingFiltersIfIdentity:;
- (void)_adjustScaleOfBackdropLayer:ifNecessaryWithSettingsInterpolator:;
- (void)_configureDelegateFlagsForDelegate:;
- (void)_updateVisualStylingProviders;
- (BOOL)_delegateManagesWeighting;
- (BOOL)_isDelegateManagingOpacity;
- (BOOL)_isDelegateManagingInterpolation;
- (BOOL)_didValueChangeForKey:withPendingChange:;
- (BOOL)_needsPruning;
- (id)_effectiveDebugIdentifier;
- (id)defaultBackdropScaleAdjustment;
- (void)setDefaultBackdropScaleAdjustment:;
- (double)_backdropScale;
- (double)_privateOpacity;
- (void)_setPrivateOpacity:removingIfIdentity:;
- (void)_setNeedsConfiguring;
- (void)_reevaluateDefaultShouldCrossfade;
+ (id)mt_implicitlyAnimatableKeys;
+ (id)mt_animatableKeys;
+ (id)_unserializedAttributeKeys;
+ (id)_attributeKeys;
@end
