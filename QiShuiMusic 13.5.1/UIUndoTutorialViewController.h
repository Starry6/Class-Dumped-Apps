@interface UIUndoTutorialViewController : UIViewController
@property (nonatomic) @? completionHandler;
@property (nonatomic) UIUndoTutorialView tutorialView;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (void)doneButtonPressed;
- (void)setCompletionHandler:;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCompletionHandler:;
- (void)viewDidLoad;
- (id)completionHandler;
- (id)tutorialView;
- (void)setTutorialView:;
@end
