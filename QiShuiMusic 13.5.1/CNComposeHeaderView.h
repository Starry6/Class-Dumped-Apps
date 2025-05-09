@interface CNComposeHeaderView : UIView
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} mf_scribbleFrame;
@property (nonatomic) <CNComposeHeaderViewDelegate> internalDelegate;
@property (nonatomic) CNComposeHeaderLabelView labelView;
@property (nonatomic) UILabel composeFieldInfoLabel;
@property (nonatomic) UIView separator;
@property (nonatomic) UIView highlightedBackgroundView;
@property (nonatomic) NSString label;
@property (nonatomic) NSString navTitle;
@property (nonatomic) BOOL showsHighlightWhenTouched;
@property (nonatomic) <CNComposeHeaderViewDelegate> delegate;
@property (nonatomic) NSString composeFieldInfoText;
@property (nonatomic) {NSDirectionalEdgeInsets=dddd} separatorDirectionalEdgeInsets;
- (id)mf_scribbleFrame;
- (void)setSeparator:;
- (void)layoutMarginsDidChange;
- (BOOL)_canBecomeFirstResponder;
- (void)touchesBegan:withEvent:;
- (id)labelView;
- (void)layoutSubviews;
- (void)setDelegate:;
- (id)internalDelegate;
- (void)setInternalDelegate:;
- (id)_automationID;
- (void)setLabel:;
- (id)label;
- (id)initWithFrame:;
- (void)setHighlighted:animated:;
- (id)delegate;
- (void).cxx_destruct;
- (void)touchesEnded:withEvent:;
- (id)separator;
- (void)touchesCancelled:withEvent:;
- (id)_contentRect;
- (id)labelColor;
- (void)setLabelView:;
- (id)_baseAttributes;
- (id)titleLabelBaselineAlignmentRectForLabel:;
- (id)separatorDirectionalEdgeInsets;
- (void)setSeparatorDirectionalEdgeInsets:;
- (id)navTitle;
- (void)refreshPreferredContentSize;
- (double)labelTopPadding;
- (BOOL)_shouldEmbedLabelInTextView;
- (void)handleTouchesEnded;
- (id)_highlightedBackgroundView;
- (id)_recipientViewEdgeInsets;
- (id)_exclusionRectForView:alongEdge:;
- (void)setNavTitle:;
- (BOOL)showsHighlightWhenTouched;
- (void)setShowsHighlightWhenTouched:;
- (void)_notifyDelegateOfSizeChange;
- (double)_additionalContentHeight;
- (void)setComposeFieldInfoText:;
- (id)composeFieldInfoText;
- (void)createComposeFieldInfoLabelIfNeeded;
- (void)layoutComposeFieldInfoLabelWithContentRect:labelRect:;
- (id)headerViewDelegates;
- (id)composeFieldInfoLabel;
- (void)setComposeFieldInfoLabel:;
- (id)highlightedBackgroundView;
- (void)setHighlightedBackgroundView:;
+ (double)separatorHeight;
+ (double)preferredHeight;
+ (id)defaultFont;
+ (double)_labelTopPaddingSpecification;
+ (id)defaultSeparatorColor;
+ (id)supplimentalMessageFont;
@end
