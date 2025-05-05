@interface SFExternalPasswordCredentialRemoteViewController : SFPasswordRemoteViewController
@property (nonatomic) <SFExternalPasswordCredentialRemoteViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)_canShowWhileLocked;
- (void)presentExternalPasswordCredentialRemoteViewController;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)passwordServiceViewControllerName;
@end
