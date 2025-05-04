@interface AWEPadKeyboardBindingsDetailController : AWEAwemeNewDetailBaseController
- (id)aAWEPadModuleAdapter;
- (void)viewDidLoadAfterTableviewSetup;
- (id)splitController;
- (id)trackCommonParams;
- (void)p_dismissSharePanel;
- (void)registerKeyboardBindings;
- (BOOL)shouldResponseKeyboardBindingKeys;
- (BOOL)scrollUp:;
- (void)trackKeyEvent:key:clickType:;
- (void)gotoUserProfile;
- (BOOL)keyboardScrollUpCrashFixEnable;
+ (Class)aAWEPadModuleAdapterClass;
@end
