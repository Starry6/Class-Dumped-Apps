@interface UISwitch : UIControl
@property (nonatomic) UIColor tintColor;
@property (nonatomic) UISwitchVisualElement visualElement;
@property (nonatomic) BOOL alwaysShowOnOffLabel;
@property (nonatomic) UIImpactFeedbackGenerator impactFeedbackGenerator;
@property (nonatomic) q switchStyle;
@property (nonatomic) UIColor onTintColor;
@property (nonatomic) UIColor thumbTintColor;
@property (nonatomic) UIImage onImage;
@property (nonatomic) UIImage offImage;
@property (nonatomic) NSString title;
@property (nonatomic) q style;
@property (nonatomic) q preferredStyle;
@property (nonatomic) BOOL on;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rac_newOnChannel;
- (id)sf_initWithOn:valueChangeHandler:;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_intrinsicContentSizeInvalidatedForChildView:;
- (void)_populateArchivedSubviews:;
- (id)thumbTintColor;
- (id)init;
- (void)setOnTintColor:;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)setThumbTintColor:;
- (void)dealloc;
- (id)_intrinsicSizeWithinSize:;
- (void)setFrame:;
- (BOOL)isOn;
- (id)pointerInteraction:regionForRequest:defaultRegion:;
- (void)setOffImage:;
- (id)tintColor;
- (void)pointerInteraction:willExitRegion:animator:;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)setOn:;
- (void)setSemanticContentAttribute:;
- (void)tintColorDidChange;
- (void)pointerInteraction:willEnterRegion:animator:;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void)encodeWithCoder:;
- (id)alignmentRectInsets;
- (id)pointerInteraction:styleForRegion:;
- (id)title;
- (id)offImage;
- (id)sizeThatFits:;
- (void)setEnabled:;
- (void)setVisualElement:;
- (void).cxx_destruct;
- (void)setTintColor:;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)setOn:animated:;
- (long long)style;
- (long long)preferredStyle;
- (id)onImage;
- (void)_setStyle:;
- (id)visualElement;
- (void)setOnImage:;
- (id)accessibilityActivationPoint;
- (unsigned long long)defaultAccessibilityTraits;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)setPreferredStyle:;
- (void)_refreshVisualElement;
- (void)_refreshVisualElementForTraitCollection:populatingAPIProperties:;
- (void)visualElement:transitionedToOn:;
- (void)visualElementHadTouchUpInside:;
- (BOOL)pointMostlyInside:;
- (void)setSwitchStyle:;
- (BOOL)_isFixedSize;
- (void)setOn:animated:notifyingVisualElement:;
- (void)_setAlwaysShowsOnOffLabel:;
- (BOOL)_shouldShowOnOffLabels;
- (void)_showingOnOffLabelChanged;
- (void)_setImpactFeedbackGenerator:;
- (id)_impactFeedbackGenerator;
- (id)onTintColor;
- (BOOL)_alwaysShowOnOffLabel;
- (long long)switchStyle;
+ (void)_setAllowsUnsupportedMacIdiomBehavior:;
+ (BOOL)_allowsUnsupportedMacIdiomBehavior;
+ (id)visualElementForTraitCollection:;
+ (id)visualElementForTraitCollection:style:;
+ (void)setVisualElementProvider:;
@end
