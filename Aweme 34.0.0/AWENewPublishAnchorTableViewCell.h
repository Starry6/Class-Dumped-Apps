@interface AWENewPublishAnchorTableViewCell : AWENewPublishTableCell
@property (nonatomic) UIView separatorLine;
@property (nonatomic) UILabel AIAnchorLabel;
@property (nonatomic) UIImageView loadingView;
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) UIView accessibilityView;
- (id)tagLabel;
- (void)setTagLabel:;
- (void)addSubviewsForContentView;
- (void)setAccessibilityView:;
- (id)accessibilityView;
- (void)updateTagLabel:;
- (void)setAIAnchorLabel:;
- (id)AIAnchorLabel;
- (void)updateAIANchorFlag:;
- (void)setLoadingView:;
- (id)loadingView;
- (void).cxx_destruct;
- (id)separatorLine;
- (void)setSeparatorLine:;
- (void)updateAccessibilityLabel;
+ (BOOL)shouldClearAccessLabelTextWithTitle:tag:accessLabelText:;
@end
