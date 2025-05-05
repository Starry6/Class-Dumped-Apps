@interface UISystemKeyboardDockController : UIViewController
@property (nonatomic) UIKeyboardDockView dockView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dockView;
- (void)dealloc;
- (void)setDockView:;
- (void)_dictationDidBeginNotification:;
- (void)setKeyboardDockItem;
- (BOOL)_canShowWhileLocked;
- (void)traitCollectionDidChange:;
- (void)updateDockItemsVisibility;
- (void)dictationItemButtonWasPressed:withEvent:isRunningButton:;
- (void).cxx_destruct;
- (void)loadView;
- (void)globeItemButtonWasPressed:withEvent:;
- (void)keyboardDockView:didPressDockItem:withEvent:;
- (void)keyboardItemButtonWasTapped:withEvent:;
- (void)viewDidLoad;
@end
