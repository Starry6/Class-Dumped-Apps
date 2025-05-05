@interface SORemoteExtensionViewController : _UIRemoteViewController
@property (nonatomic) <SORemoteExtensionViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (void)viewServiceDidTerminateWithError:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@end
