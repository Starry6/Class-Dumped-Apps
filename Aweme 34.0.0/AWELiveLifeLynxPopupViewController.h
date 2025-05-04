@interface AWELiveLifeLynxPopupViewController : UIViewController
@property (nonatomic) AWELiveLifeLynxView lynxView;
@property (nonatomic) AWEPOICubeModel model;
@property (nonatomic) NSString url;
@property (nonatomic) NSDictionary payload;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxView;
- (void)setLynxView:;
- (void)cubeViewWillStartLoading:;
- (void)cubeView:didFinishLoadWithURL:;
- (void)cubeView:didLoadFailedWithUrl:error:;
- (void)cubeView:didReceiveError:;
- (id)initWithURL:payload:;
- (void)setPayload:;
- (void)setModel:;
- (void)setUrl:;
- (id)payload;
- (void)viewDidLoad;
- (id)model;
- (void).cxx_destruct;
- (id)url;
- (void)tapAction;
- (void)dismissSelf;
+ (id)popVCList;
+ (void)dismissAllPopVC;
@end
