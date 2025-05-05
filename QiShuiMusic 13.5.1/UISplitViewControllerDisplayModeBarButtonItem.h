@interface UISplitViewControllerDisplayModeBarButtonItem : UIBarButtonItem
@property (nonatomic) <UISplitViewControllerImpl> impl;
@property (nonatomic) BOOL hasBeenUsed;
- (SEL)action;
- (id)_impl;
- (void).cxx_destruct;
- (id)target;
- (void)_setOwningNavigationItem:;
- (void)_wasUsed;
- (void)_setImpl:;
- (BOOL)_hasBeenUsed;
@end
