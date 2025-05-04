@interface AWERelationAlertViewController : UIViewController
@property (nonatomic) AWERelationAlertView alertView;
@property (nonatomic) @? completionBlock;
@property (nonatomic) @? didShowBlock;
@property (nonatomic) AWEVCDAlertModel relationModel;
@property (nonatomic) AWEAuthorizeStateManager authorizeStateManager;
@property (nonatomic) @? didClickBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)didShowBlock;
- (void)setDidShowBlock:;
- (id)didClickBlock;
- (void)setDidClickBlock:;
- (id)relationModel;
- (void)setRelationModel:;
- (void)agreeAction;
- (void)setAuthorizeStateManager:;
- (id)authorizeStateManager;
- (void)nextTimeAction;
- (id)initWithRelationModel:didShowBlock:complete:;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void)viewDidLoad;
- (id)alertView;
- (void)setAlertView:;
- (void).cxx_destruct;
@end
