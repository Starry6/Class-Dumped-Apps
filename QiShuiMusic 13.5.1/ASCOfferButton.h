@interface ASCOfferButton : UIControl
@property (nonatomic) NSString size;
@property (nonatomic) ASCOfferButtonBackgroundImageView imageView;
@property (nonatomic) UILabel titleLabelIfLoaded;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabelIfLoaded;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) ASCModalViewInteraction modalInteraction;
@property (nonatomic) CAAnimation imageAnimation;
@property (nonatomic) UIViewPropertyAnimator currentTransition;
@property (nonatomic) ASCOfferTheme theme;
@property (nonatomic) ASCOfferMetadata metadata;
@property (nonatomic) <ASCOfferButtonDelegate> delegate;
@property (nonatomic) q subtitlePosition;
@property (nonatomic) BOOL fixedHeight;
@property (nonatomic) BOOL shouldTopAlign;
@property (nonatomic) double topPadding;
@property (nonatomic) BOOL shouldExpandBackground;
- (double)topPadding;
- (id)currentTransition;
- (void)setTheme:;
- (id)theme;
- (void)pressesCancelled:withEvent:;
- (unsigned long long)accessibilityTraits;
- (BOOL)canBecomeFocused;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (id)subtitleLabel;
- (id)accessibilityLabel;
- (void)setDelegate:;
- (id)metadata;
- (id)initWithCoder:;
- (void)setSemanticContentAttribute:;
- (void)setCurrentTransition:;
- (id)focusEffect;
- (void)invalidateIntrinsicContentSize;
- (void)setMetadata:;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void)pressesEnded:withEvent:;
- (void)encodeWithCoder:;
- (id)alignmentRectInsets;
- (id)delegate;
- (id)sizeThatFits:;
- (void)pressesBegan:withEvent:;
- (BOOL)isAccessibilityElement;
- (void)setEnabled:;
- (void)setFixedHeight:;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (id)imageView;
- (id)description;
- (BOOL)gestureRecognizerShouldBegin:;
- (id)titleLabel;
- (id)accessibilityHint;
- (id)accessibilityIdentifier;
- (void)setSize:;
- (id)size;
- (id)accessibilityValue;
- (BOOL)accessibilityActivate;
- (void)setTopPadding:;
- (id)subtitleLabelIfLoaded;
- (void)setSubtitleLabelIfLoaded:;
- (BOOL)isFixedHeight;
- (id)makeLayout;
- (void)setTitleLabelIfLoaded:;
- (void)updateImageStyleProperties;
- (void)updateLabelStyleProperties;
- (void)updateFocusState;
- (void)setSubtitlePosition:;
- (void)beginModalStateWithCancelBlock:;
- (void)endModalState;
- (id)imageAnimation;
- (void)setImageAnimation:;
- (BOOL)canTransitionToMetadata:;
- (BOOL)shouldTransitionImageViewFromMetadata:toMetadata:;
- (BOOL)chainTransitionToMetadata:scalingDurationBy:withCompletion:;
- (id)transitionImageForMetadata:;
- (id)transitionColorForMetadata:;
- (void)transitionToMetadata:scalingDurationBy:withCompletion:;
- (void)transitionToMetadata:withCompletion:;
- (long long)subtitlePosition;
- (BOOL)shouldTopAlign;
- (void)setShouldTopAlign:;
- (BOOL)shouldExpandBackground;
- (void)setShouldExpandBackground:;
- (id)titleLabelIfLoaded;
- (id)modalInteraction;
- (void)setModalInteraction:;
+ (id)smallTitleFontForText:compatibleWithTraitCollection:;
+ (id)mediumTitleFontForText:compatibleWithTraitCollection:;
+ (id)viewInAppStoreTitleFontForText:compatibleWithTraitCollection:;
+ (BOOL)adjustsTitleFontSizeToFitWidthForSize:;
+ (id)progressStateImageFittingSize:forTheme:startPercent:endPercent:useFullImageSize:;
@end
