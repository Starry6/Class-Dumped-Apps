@interface AWEVideoCoverEvaluateViewModel : AWETemplateBaseViewModel
- (void)trackForTemplateViewShow;
- (void)viewDidTriggerAction:;
- (void)trackBarShow;
- (void)trackBarClick;
- (id)paramsForTracker;
+ (BOOL)shouldActiveWithData:scene:context:;
@end
