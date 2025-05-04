@interface AWEIMShareMoreSelectionMyGroupPageLayout : IESIMContactPickerLayout
@property (nonatomic) BOOL isKeyboardShow;
- (double)panelHeight;
- (void)p_addObserver;
- (void)handleKeyboardShowNoti:;
- (void)handleKeyboardHideNoti:;
- (BOOL)isKeyboardShow;
- (void)setIsKeyboardShow:;
- (BOOL)needFollowKeyboard;
- (id)containerDarkColor;
- (id)containerLightColor;
- (BOOL)isContentSectionBottomEqualToBottomTop;
- (id)init;
- (id)backgroundColor;
- (id)contentBackgroundColor;
@end
