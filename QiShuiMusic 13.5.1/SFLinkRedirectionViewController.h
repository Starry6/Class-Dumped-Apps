@interface SFLinkRedirectionViewController : SFSafariViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithURL:;
- (void)viewDidLoad;
- (void)setDefersAddingRemoteViewController:;
- (void)remoteViewController:didResolveRedirectionWithURL:appLink:;
@end
