@interface AWETemplateMixOrPlayletViewModel : AWETemplateBaseViewModel
- (void)viewController_viewDidAppear;
- (id)commonParams;
- (void)trackForTemplateViewShow;
- (void)trackForTemplateViewClick;
- (id)paramsForTemplateViewTransfer;
- (void)playletRequestPreload;
@end
