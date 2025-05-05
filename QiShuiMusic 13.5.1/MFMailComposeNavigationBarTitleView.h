@interface MFMailComposeNavigationBarTitleView : _UINavigationBarTitleView
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (id)title;
- (void)contentDidChange;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)subtitle;
- (id)_subtitleTextColor;
- (void)_updateHeightForCurrentTraits;
- (void)setSubtitle:withStyle:;
- (id)_contentInsetsWithExclusionRects:wantsUniformHorizontalInsets:;
- (void)_updateTrailingBarButtonItemsAlpha;
- (double)_verticalOffsetForSubtitleWhenMini:;
- (double)_topPaddingForTitleWhenMini:;
- (double)_titleFontSizeWhenMini:;
- (double)_subtitleFontSizeWhenMini:;
- (BOOL)_needsToLayoutTitleLabel;
@end
