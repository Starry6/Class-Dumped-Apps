@interface SKStoreExtension : UIViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dismissViewControllerAnimated:completion:;
- (void)setupWithParameters:;
- (void)presentRequestedViewControllerWithIdentifier:;
- (void)setTabIdentifier:;
- (void)setRequestedIdentifier:;
- (void)openURL:sourceApplication:annotation:;
- (BOOL)shouldOpenURL:sourceApplication:annotation:;
+ (id)clientInterface;
+ (id)serviceInterface;
+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@end
