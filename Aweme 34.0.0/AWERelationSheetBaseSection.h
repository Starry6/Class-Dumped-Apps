@interface AWERelationSheetBaseSection : NSObject
@property (nonatomic) UIViewController<AWERelationSheetSectionContainer> viewController;
- (void)viewControllerDidAppear:;
- (void)viewControllerDidDisappear:;
- (void)commitChanges:;
- (void)sectionViewDidLoad;
- (void)goNextTextField;
- (id)textField;
- (id)viewController;
- (void).cxx_destruct;
- (void)setViewController:;
- (id)sectionView;
- (double)bottomSpacing;
- (void)viewControllerWillAppear:;
- (void)viewControllerWillDisappear:;
@end
