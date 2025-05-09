@interface UITraitCollection : NSObject
@property (nonatomic) @ danceui__environmentWrapper;
@property (nonatomic) BOOL vk_hasCompactHeight;
@property (nonatomic) BOOL vk_hasCompactWidth;
@property (nonatomic) BOOL vk_hasCompactSize;
@property (nonatomic) BOOL vk_isDark;
@property (nonatomic) BOOL vk_isRTL;
@property (nonatomic) double vk_contentSizeScaleFactor;
@property (nonatomic) UITraitCollection vk_traitCollectionClampedToNonaccessibilityContentSize;
@property (nonatomic) BOOL vk_shouldUseLargeButtons;
@property (nonatomic) UIColor sf_alternateTintColor;
@property (nonatomic) q sf_alternateUserInterfaceStyle;
@property (nonatomic) UITraitCollection sf_traitCollectionWithAlternateUserInterfaceColorAsPrimary;
@property (nonatomic) UIBlurEffect sf_backgroundBlurEffect;
@property (nonatomic) BOOL sf_usesVibrantAppearance;
@property (nonatomic) BOOL sf_usesSidebarPresentation;
@property (nonatomic) q crsui_mapStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL _isLargeContentViewerEnabled;
@property (nonatomic) q userInterfaceIdiom;
@property (nonatomic) q userInterfaceStyle;
@property (nonatomic) q layoutDirection;
@property (nonatomic) double displayScale;
@property (nonatomic) q horizontalSizeClass;
@property (nonatomic) q verticalSizeClass;
@property (nonatomic) q forceTouchCapability;
@property (nonatomic) NSString preferredContentSizeCategory;
@property (nonatomic) q displayGamut;
@property (nonatomic) q accessibilityContrast;
@property (nonatomic) q userInterfaceLevel;
@property (nonatomic) q legibilityWeight;
@property (nonatomic) q activeAppearance;
@property (nonatomic) q toolbarItemPresentationSize;
- (id)danceui__environmentWrapper;
- (id)danceui__valueForTraitNamed:;
- (BOOL)mf_supportsPopoverPresentation;
- (BOOL)mf_hasCompactDimension;
- (BOOL)mf_useSplitViewStyling;
- (long long)mf_correspondingBarMetrics;
- (id)ic_traitCollectionByAppendingNonNilTraitCollection:;
- (void)vk_performAsCurrent:;
- (BOOL)vk_hasCompactSize;
- (BOOL)vk_hasCompactHeight;
- (BOOL)vk_hasCompactWidth;
- (BOOL)vk_isDark;
- (BOOL)vk_isRTL;
- (BOOL)vk_hasEqualSizeToTraitCollection:;
- (id)vk_traitCollectionClampedToNonaccessibilityContentSize;
- (id)vk_traitCollectionWithContentSize:;
- (id)vk_traitCollectionByAppendingNonNilTraitCollection:;
- (double)vk_contentSizeScaleFactor;
- (BOOL)vk_shouldUseLargeButtons;
- (id)sf_alternateTintColor;
- (long long)sf_alternateUserInterfaceStyle;
- (id)sf_traitCollectionWithAlternateUserInterfaceColorAsPrimary;
- (id)sf_backgroundBlurEffect;
- (BOOL)sf_usesVibrantAppearance;
- (BOOL)sf_hasSameVisualEffectAs:;
- (BOOL)sf_usesSidebarPresentation;
- (BOOL)_lp_prefersDarkInterface;
- (long long)crsui_mapStyle;
- (id)init;
- (long long)userInterfaceLevel;
- (void)dealloc;
- (id)_description;
- (id)imageConfiguration;
- (id)preferredContentSizeCategory;
- (id)initWithCoder:;
- (long long)legibilityWeight;
- (unsigned long long)hash;
- (long long)verticalSizeClass;
- (long long)userInterfaceStyle;
- (double)displayScale;
- (void)encodeWithCoder:;
- (long long)userInterfaceIdiom;
- (long long)horizontalSizeClass;
- (id)description;
- (double)displayCornerRadius;
- (long long)_compare:;
- (long long)layoutDirection;
- (long long)activeAppearance;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)displayGamut;
- (unsigned long long)artworkSubtype;
- (long long)accessibilityContrast;
- (long long)_contrast;
- (long long)_updateFidelity;
- (id)_traitsDescription;
- (BOOL)containsTraitsInCollection:;
- (id)_traitNamesForUnspecifiedBuiltInTraits;
- (id)_valueForTraitNamed:;
- (long long)forceTouchCapability;
- (long long)_userInterfaceActiveAppearance;
- (long long)touchLevel;
- (unsigned long long)interactionModel;
- (unsigned long long)primaryInteractionModel;
- (long long)_userInterfaceRenderingMode;
- (long long)_presentationSemanticContext;
- (long long)_splitViewControllerContext;
- (BOOL)_hasSplitViewControllerContextPrimaryColumn;
- (BOOL)_hasSplitViewControllerContextSidebarColumn;
- (long long)_focusSystemState;
- (long long)_backlightLuminance;
- (long long)toolbarItemPresentationSize;
- (long long)_vibrancy;
- (long long)_backgroundLevel;
- (id)_environmentWrapper;
- (void)performAsCurrentTraitCollection:;
- (BOOL)hasDifferentColorAppearanceComparedToTraitCollection:;
- (id)_fallbackTraitCollection;
- (BOOL)_isLargeContentViewerEnabled;
- (id)_namedImageDescription;
+ (void)danceui_preload;
+ (id)danceui__traitCollectionWithEnvironmentWrapper:;
+ (id)danceui__traitCollectionWithValue:forTraitNamed:;
+ (id)appearanceClassForType:;
+ (id)sf_traitCollectionWithAlternateTraitCollection:;
+ (id)sf_traitCollectionWithAlternateUserInterfaceStyle:;
+ (id)sf_traitCollectionWithBackgroundBlurEffect:;
+ (id)sf_traitCollectionUsingVibrantAppearance;
+ (id)sf_traitCollectionWithSidebarPresentation:;
+ (id)crsui_traitCollectionWithMapStyle:;
+ (BOOL)supportsSecureCoding;
+ (id)_overrideTraitCollectionWithBuiltinTraitStorageBuilder:;
+ (id)_descriptionForChangeFromTraitCollection:toTraitCollection:;
+ (id)traitCollectionWithTraitsFromCollections:;
+ (id)traitCollectionWithUserInterfaceIdiom:;
+ (id)traitCollectionWithDisplayScale:;
+ (id)traitCollectionWithDisplayGamut:;
+ (id)traitCollectionWithHorizontalSizeClass:;
+ (id)traitCollectionWithVerticalSizeClass:;
+ (id)traitCollectionWithUserInterfaceStyle:;
+ (id)traitCollectionWithLayoutDirection:;
+ (id)traitCollectionWithForceTouchCapability:;
+ (id)traitCollectionWithDisplayCornerRadius:;
+ (id)traitCollectionWithLegibilityWeight:;
+ (id)traitCollectionWithActiveAppearance:;
+ (id)_traitCollectionWithUserInterfaceActiveAppearance:;
+ (id)traitCollectionWithAccessibilityContrast:;
+ (id)traitCollectionWithUserInterfaceLevel:;
+ (id)traitCollectionWithTouchLevel:;
+ (id)traitCollectionWithInteractionModel:;
+ (id)traitCollectionWithPrimaryInteractionModel:;
+ (id)traitCollectionWithArtworkSubtype:;
+ (id)_traitCollectionWithUserInterfaceRenderingMode:;
+ (id)_traitCollectionWithPresentationSemanticContext:;
+ (id)_traitCollectionWithSplitViewControllerContext:;
+ (id)_traitCollectionWithFocusSystemState:;
+ (id)_traitCollectionWithBacklightLuminance:;
+ (id)traitCollectionWithToolbarItemPresentationSize:;
+ (id)_traitCollectionForSidebarAppearance;
+ (id)_traitCollectionWithVibrancy:;
+ (id)_traitCollectionWithContrast:;
+ (id)_traitCollectionWithBackgroundLevel:;
+ (id)traitCollectionWithPreferredContentSizeCategory:;
+ (id)_traitCollectionWithEnvironmentWrapper:;
+ (id)_traitCollectionWithValue:forTraitNamed:;
+ (id)currentTraitCollection;
+ (void)setCurrentTraitCollection:;
+ (id)_currentTraitCollection;
+ (void)_setCurrentTraitCollection:;
@end
