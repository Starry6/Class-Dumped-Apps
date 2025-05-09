@interface TLKDescriptionView : TLKView
@property (nonatomic) TLKStackView stackView;
@property (nonatomic) TLKLabel titleLabel;
@property (nonatomic) TLKTextView detailsTextView;
@property (nonatomic) TLKTextButton moreButton;
@property (nonatomic) TLKImageView imageView;
@property (nonatomic) NUIContainerBoxView imageAndDescriptionBoxView;
@property (nonatomic) UIBezierPath imageViewExclusionPath;
@property (nonatomic) UIBezierPath moreButtonExclusionPath;
@property (nonatomic) TLKTextButton footnoteButton;
@property (nonatomic) TLKTextButton trailingFootnoteButton;
@property (nonatomic) TLKStackView footnoteButtonStackView;
@property (nonatomic) UIView footnoteButtonStackDummyView;
@property (nonatomic) TLKImage image;
@property (nonatomic) TLKMultilineText text;
@property (nonatomic) TLKMultilineText title;
@property (nonatomic) NSString footnoteButtonText;
@property (nonatomic) NSString trailingFootnoteButtonText;
@property (nonatomic) NSString moreButtonText;
@property (nonatomic) <TLKDescriptionViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTitleLabel:;
- (void)setStackView:;
- (void)tlk_updateForAppearance:;
- (void)layoutSubviews;
- (void)setText:;
- (void)setDelegate:;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)viewForFirstBaselineLayout;
- (void)setImage:;
- (void)setTitle:;
- (id)stackView;
- (void)moreButtonPressed;
- (void)setMoreButton:;
- (id)title;
- (id)delegate;
- (void)containerViewDidLayoutArrangedSubviews:;
- (void).cxx_destruct;
- (id)moreButton;
- (void)didMoveToWindow;
- (id)imageView;
- (long long)numberOfLines;
- (id)text;
- (id)titleLabel;
- (id)image;
- (void)setImageView:;
- (void)containerView:willMeasureArrangedSubviewsFittingSize:forReason:;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (void)footnoteButtonPressed;
- (id)footnoteButtonText;
- (void)setFootnoteButtonText:;
- (id)footnoteButton;
- (void)setFootnoteButton:;
- (id)defaultBaselineRelativeLayoutMargins;
- (void)trailingFootnoteButtonPressed:;
- (void)setMoreButtonText:;
- (void)setTrailingFootnoteButtonText:;
- (void)setExclusionPathInContainer:includeMoreButton:;
- (id)textSizeForTextView:width:lineCount:;
- (BOOL)shouldHideMoreButtonForTextView:;
- (void)simulateMoreButtonPress;
- (id)imageExclusionPath;
- (id)detailTextViewText;
- (BOOL)moreButtonIsHidden;
- (id)exclusionPathsForTextView;
- (id)trailingFootnoteButtonText;
- (id)moreButtonText;
- (id)detailsTextView;
- (void)setDetailsTextView:;
- (id)imageAndDescriptionBoxView;
- (void)setImageAndDescriptionBoxView:;
- (id)imageViewExclusionPath;
- (void)setImageViewExclusionPath:;
- (id)moreButtonExclusionPath;
- (void)setMoreButtonExclusionPath:;
- (id)trailingFootnoteButton;
- (void)setTrailingFootnoteButton:;
- (id)footnoteButtonStackView;
- (void)setFootnoteButtonStackView:;
- (id)footnoteButtonStackDummyView;
- (void)setFootnoteButtonStackDummyView:;
@end
