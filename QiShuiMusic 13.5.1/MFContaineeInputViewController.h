@interface MFContaineeInputViewController : UIInputViewController
@property (nonatomic) UIViewController contentViewController;
@property (nonatomic) NSLayoutConstraint heightConstraint;
@property (nonatomic) BOOL allowsSelfSizing;
- (void)setHeightConstraint:;
- (id)heightConstraint;
- (BOOL)allowsSelfSizing;
- (id)contentViewController;
- (void)setContentViewController:;
- (void)traitCollectionDidChange:;
- (void)setAllowsSelfSizing:;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_updateContentViewControllerHeight;
- (id)initWithContentViewController:;
@end
