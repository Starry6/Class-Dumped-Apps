@interface AWEVCDImportFansViewController : UIViewController
@property (nonatomic) IESPlatformSDKContentSyncReq contentSyncReq;
@property (nonatomic) @? completedBlock;
@property (nonatomic) AWEVCDImportFansModel model;
@property (nonatomic) AWEVCDImportFansView importFansView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCompletedBlock:;
- (id)completedBlock;
- (void)dismissDidEnterBackgroundWithCompletion:;
- (void)setNavigationBar;
- (id)initWithAuthReq:userInfo:completedBlock:;
- (void)actionDidTapActionButton:;
- (id)importFansView;
- (id)contentSyncReq;
- (void)showFailAlert:;
- (void)actionDidTapCancelAuthButton:;
- (void)setContentSyncReq:;
- (void)setImportFansView:;
- (void)setModel:;
- (void)viewDidLoad;
- (void)dismissViewControllerAnimated:completion:;
- (id)model;
- (void).cxx_destruct;
- (void)dismissSelf;
@end
