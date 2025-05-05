@interface SFPasswordRemoteViewController : _UIRemoteViewController
@property (nonatomic) <SFPasswordRemoteViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (void)viewServiceDidTerminateWithError:;
- (id)delegate;
- (void).cxx_destruct;
- (void)willDismissServiceViewController;
+ (id)exportedInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)requestViewControllerWithConnectionHandler:;
+ (id)passwordServiceViewControllerName;
@end
