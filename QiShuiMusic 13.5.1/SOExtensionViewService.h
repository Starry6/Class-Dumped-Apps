@interface SOExtensionViewService : UIViewController
@property (nonatomic) SORemoteExtensionContext extensionContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)exportedInterface;
- (void).cxx_destruct;
- (id)extensionContext;
- (void)loadView;
- (void)setExtensionContext:;
- (void)connectToContextWithSessionID:completion:;
- (id)remoteViewControllerInterface;
- (void)_connectChildView;
+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@end
