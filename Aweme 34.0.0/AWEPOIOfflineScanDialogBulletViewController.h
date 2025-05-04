@interface AWEPOIOfflineScanDialogBulletViewController : UIViewController
@property (nonatomic) UIView<BDXViewContainerProtocol> bulletView;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSString url;
@property (nonatomic) NSMutableArray subscribeList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)container:didLoadFailedWithUrl:error:;
- (id)subscribeList;
- (void)setSubscribeList:;
- (id)bulletView;
- (void)setBulletView:;
- (void)loadUrl:;
- (id)initWithParams:url:;
- (void)setUrl:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)params;
- (id)url;
- (void)setParams:;
@end
