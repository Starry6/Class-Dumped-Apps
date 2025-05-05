@interface UIKBStackViewController : UIViewController
@property (nonatomic) UIStackView stackView;
- (id)stackView;
- (void)addChildViewController:;
- (void)loadView;
- (void)removeChildViewController:;
@end
