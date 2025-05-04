@interface AWEModernFeedContentView : YYLabel
@property (nonatomic) AWEModernFeedContentFrame feedContentFrame;
@property (nonatomic) @? didTapShowFullTextBlock;
@property (nonatomic) @? didTapShowPanelBlock;
- (void)awe_themeDidChange:;
- (void)configWithFrame:;
- (void)setDidTapShowFullTextBlock:;
- (id)didTapShowFullTextBlock;
- (void)setFeedContentFrame:;
- (id)fullTextButtonWithAweme:;
- (void)addHighlightColorAttributeForAttrString:positions:highlightColor:;
- (id)feedContentFrame;
- (id)didTapShowPanelBlock;
- (id)trendingFullTextButtonWithAweme:;
- (id)abstractFullTextButtonWithAweme:;
- (id)abstractFullTextButtonWithAwemeForTitle:;
- (void)setDidTapShowPanelBlock:;
- (id)accessibilityLabel;
- (id)accessibilityElements;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setAccessibilityElements:;
- (void)viewDidAppear;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElementAtIndex:;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:;
- (BOOL)shouldGroupAccessibilityChildren;
@end
