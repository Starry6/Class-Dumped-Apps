@interface UIPrintActivityWrapperNavigationController : UINavigationController
@property (nonatomic) BOOL presentedPrintInteractionController;
@property (nonatomic) UIPrintInteractionController printInteractionController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)printInteractionController;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (void)viewDidLoad;
- (id)initWithPrintInteractionController:completion:;
- (BOOL)presentedPrintInteractionController;
- (void)setPresentedPrintInteractionController:;
- (void)setPrintInteractionController:;
@end
