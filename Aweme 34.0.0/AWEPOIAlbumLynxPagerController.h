@interface AWEPOIAlbumLynxPagerController : UIViewController
@property (nonatomic) DitoPageContext context;
@property (nonatomic) AWEPOIAlbumLynxParamModel paramModel;
@property (nonatomic) UIView<BDXViewContainerProtocol> bulletView;
@property (nonatomic) <AWEPOIAlbumLynxPagerControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)container:didFinishLoadWithURL:;
- (void)container:didLoadFailedWithUrl:error:;
- (id)bulletView;
- (void)setBulletView:;
- (void)loadTemplate;
- (id)paramModel;
- (id)initWithContext:paramModel:;
- (void)setParamModel:;
- (id)delegate;
- (void)viewDidLoad;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)context;
@end
