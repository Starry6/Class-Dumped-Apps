@interface SFPasswordPickerRemoteViewController : SFPasswordRemoteViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)_canShowWhileLocked;
- (void)selectedCredential:;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)passwordServiceViewControllerName;
@end
