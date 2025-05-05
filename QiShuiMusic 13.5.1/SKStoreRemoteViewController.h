@interface SKStoreRemoteViewController : _UIRemoteViewController
@property (nonatomic) <SKStoreRemoteViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (void)viewServiceDidTerminateWithError:;
- (void)dismissViewControllerAnimated:completion:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setNeedsTabSelection;
- (void)presentRequestedViewControllerWithIdentifier:;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@end
