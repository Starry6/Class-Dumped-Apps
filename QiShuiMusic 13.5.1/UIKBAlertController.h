@interface UIKBAlertController : UIAlertController
@property (nonatomic) <UIKBAlertControllerDelegate> kbDelegate;
- (void)viewDidDisappear:;
- (id)kbDelegate;
- (void)setKbDelegate:;
@end
