@interface AWEAlbumIncentiveBarViewModel : AWETemplateBaseViewModel
- (void)trackForTemplateViewClick;
- (id)findRootViewControllerForViewController:;
+ (BOOL)shouldActiveWithData:scene:context:;
@end
