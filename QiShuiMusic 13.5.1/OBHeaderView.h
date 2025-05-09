@interface OBHeaderView : UIView
@property (nonatomic) OBAnimationView animationView;
@property (nonatomic) OBImageView imageView;
@property (nonatomic) UIView topAssetContainer;
@property (nonatomic) NSArray topAssetContainerConstraints;
@property (nonatomic) OBTemplateLabel headerLabel;
@property (nonatomic) OBTemplateLabel subtitleLabel;
@property (nonatomic) OBTemplateHeaderDetailLabel detailLabel;
@property (nonatomic) NSArray imageViewConstraints;
@property (nonatomic) NSArray detailLabelConstraints;
@property (nonatomic) NSArray subtitleLabelConstraints;
@property (nonatomic) OBHeaderAccessoryButton accessoryButton;
@property (nonatomic) Q templateType;
@property (nonatomic) UIImage originalIconImage;
@property (nonatomic) UIView customIconContainerView;
@property (nonatomic) BOOL underlineLinks;
@property (nonatomic) BOOL iconInheritsTint;
@property (nonatomic) BOOL allowFullWidthIcon;
- (double)topPadding;
- (void)setLanguage:;
- (id)subtitleLabel;
- (void)setDetailText:;
- (void)setSubtitleLabel:;
- (id)initWithTitle:;
- (void)setTitle:;
- (double)bottomPadding;
- (void)setTemplateType:;
- (void)setSubtitleText:;
- (void)tintColorDidChange;
- (id)headerFont;
- (void)traitCollectionDidChange:;
- (id)title;
- (id)_subtitleFont;
- (unsigned long long)templateType;
- (void).cxx_destruct;
- (id)imageView;
- (BOOL)underlineLinks;
- (void)setImageView:;
- (void)setUnderlineLinks:;
- (id)initWithTitle:icon:;
- (id)symbolConfiguration;
- (id)accessoryButton;
- (void)setAccessoryButton:;
- (id)initWithTitle:detailText:icon:;
- (id)detailLabel;
- (id)headerLabel;
- (void)setHeaderLabel:;
- (double)iconHeight;
- (void)setDetailLabel:;
- (id)animationView;
- (void)setAnimationView:;
- (id)initWithTitle:detailText:symbolName:;
- (void)setTitleTrailingSymbol:;
- (void)addAccessoryButton:;
- (id)initWithTitle:symbolName:;
- (void)extendedInitWithTitle:detailText:;
- (void)setAllowFullWidthIcon:;
- (void)setIconInheritsTint:;
- (void)setIcon:accessibilityLabel:;
- (void)setSymbol:accessibilityLabel:;
- (void)setDetailedTextHeader:detailedTextBody:;
- (void)setTitleHyphenationFactor:;
- (void)removeDetailLabel;
- (void)removeAccessoryButton;
- (id)_detailFont;
- (id)_createImageView:;
- (void)_insertAndLayoutImageViewIfNeeded;
- (void)_layoutTopAssetContainer;
- (id)_createDetailLabelIfNeeded;
- (void)_updateConstraintsForDetailLabel;
- (void)_updateConstraintsForSubtitle;
- (double)iconToHeaderLabelPadding;
- (double)headerLabelToDetailAndSubtitleLabelPadding;
- (double)detailLabelToAccessoryButtonPadding;
- (double)_setupAssistantIconHeight;
- (id)_symbolIconForHeaderStyle:configuration:;
- (void)_animateDetailLabelAlpha:duration:;
- (id)customIconContainerView;
- (BOOL)iconInheritsTint;
- (BOOL)allowFullWidthIcon;
- (id)topAssetContainer;
- (void)setTopAssetContainer:;
- (id)topAssetContainerConstraints;
- (void)setTopAssetContainerConstraints:;
- (id)imageViewConstraints;
- (void)setImageViewConstraints:;
- (id)detailLabelConstraints;
- (void)setDetailLabelConstraints:;
- (id)subtitleLabelConstraints;
- (void)setSubtitleLabelConstraints:;
- (id)originalIconImage;
- (void)setOriginalIconImage:;
- (void)setCustomIconContainerView:;
@end
