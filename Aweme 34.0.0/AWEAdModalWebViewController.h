@interface AWEAdModalWebViewController : AWEAdWebViewController
- (id)aweui_emptyPageConfigForState:;
- (id)aweui_emptyPageEdgeInsets;
- (BOOL)needChangeBar;
- (void)updateNavigationItemOnErrorIfNeeded;
- (void)setupAppendixView:;
- (id)init;
@end
