@interface UIKeyboardDictationMenu : UIKeyboardMenuView
- (void)hide;
- (id)initWithFrame:;
- (id)preferredSize;
- (void)fade;
- (void)fadeWithDelay:;
- (BOOL)usesTable;
- (BOOL)centerPopUpOverKey;
- (void)performShowAnimation;
- (void)willShow;
- (void)cleanupForFadeOrHide;
- (BOOL)usesDimmingView;
+ (id)sharedInstance;
+ (id)activeInstance;
@end
