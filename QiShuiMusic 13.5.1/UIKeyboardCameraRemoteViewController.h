@interface UIKeyboardCameraRemoteViewController : _UIRemoteViewController
@property (nonatomic) <UIKeyboardCameraRemoteViewControllerHost> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (BOOL)_canShowWhileLocked;
- (id)delegate;
- (void).cxx_destruct;
- (void)keyboardCameraDidUpdateString:;
- (void)keyboardCameraDidAccept;
- (void)keyboardCameraDidCancel;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@end
