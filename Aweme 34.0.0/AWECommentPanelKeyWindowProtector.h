@interface AWECommentPanelKeyWindowProtector : NSObject
@property (nonatomic) UIWindow mainKeyWindow;
- (id)mainKeyWindow;
- (void)setMainKeyWindow:;
- (BOOL)savePanelHostWindowIfNeeded:;
- (void)restorePanelHostWindowIfNeeded:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
