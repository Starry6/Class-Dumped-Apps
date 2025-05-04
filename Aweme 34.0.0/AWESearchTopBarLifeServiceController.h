@interface AWESearchTopBarLifeServiceController : AWESearchTopBarBaseController
- (BOOL)enableSearchBigMode;
- (BOOL)enableUseTextField;
- (void)searchTopBarHostViewWillAppear;
- (void)configNewSearchTheme:currentModernFeedUITheme:uiThemeStyle:;
- (id)initWithContext:;
@end
