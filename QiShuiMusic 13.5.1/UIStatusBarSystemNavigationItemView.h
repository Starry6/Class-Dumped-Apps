@interface UIStatusBarSystemNavigationItemView : UIStatusBarItemView
@property (nonatomic) UIButton button;
@property (nonatomic) double maxWidth;
@property (nonatomic) NSString title;
@property (nonatomic) NSInteger currentLabelCompressionLevel;
- (id)accessibilityHUDRepresentation;
- (double)maxWidth;
- (void)setMaxWidth:;
- (void)setTitle:;
- (id)title;
- (id)button;
- (void).cxx_destruct;
- (id)_buttonSize;
- (void)setButton:;
- (double)updateContentsAndWidth;
- (double)extraRightPadding;
- (double)extraLeftPadding;
- (long long)labelLineBreakMode;
- (void)userDidActivateButton:;
- (id)shortenedTitleWithCompressionLevel:;
- (double)resetContentOverlap;
- (double)addContentOverlap:;
- (BOOL)layoutImageOnTrailingEdge;
- (BOOL)_shouldLayoutImageOnRight;
- (int)currentLabelCompressionLevel;
- (void)setCurrentLabelCompressionLevel:;
@end
