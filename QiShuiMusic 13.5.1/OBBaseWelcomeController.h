@interface OBBaseWelcomeController : UIViewController
@property (nonatomic) Q templateType;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (void)setTemplateType:;
- (unsigned long long)templateType;
- (id)directionalLayoutMargins;
- (void)viewDidAppear:;
- (void)loadView;
- (id)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)navigationItem;
- (void)updateDirectionalLayoutMargins;
- (id)insetsForTemplateType:;
- (long long)navigationBarScrollToEdgeBehavior;
- (double)autoScrollEdgeTransitionDistance;
- (void)_applyChromelessToBar:navigationItem:;
- (void)_presentationStyleValidationCheck;
+ (id)preferredContentSize;
@end
