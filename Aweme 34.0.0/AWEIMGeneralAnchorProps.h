@interface AWEIMGeneralAnchorProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? anchorViewTapped;
@property (nonatomic) NSString iconName;
@property (nonatomic) NSString title;
@property (nonatomic) BOOL shouldHideAnchor;
@property (nonatomic) NSString accessibilityLabelText;
- (void)setAnchorViewTapped:;
- (void)setAccessibilityLabelText:;
- (id)accessibilityLabelText;
- (id)anchorViewTapped;
- (BOOL)shouldHideAnchor;
- (void)setShouldHideAnchor:;
- (id)iconName;
- (void).cxx_destruct;
- (id)title;
- (void)setIconName:;
- (void)setTitle:;
@end
