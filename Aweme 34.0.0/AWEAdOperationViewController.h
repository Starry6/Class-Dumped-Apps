@interface AWEAdOperationViewController : UIViewController
@property (nonatomic) UIView<AWEAdOperationContentView> operationContentView;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) Q cardStatusCode;
@property (nonatomic) NSString formType;
@property (nonatomic) @? dismissBlock;
@property (nonatomic) @? downloadBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showFromView:model:;
- (unsigned long long)cardStatusCode;
- (void)setCardStatusCode:;
- (id)operationContentView;
- (void)preloadOperationWithModel:onView:cardStatusCode:;
- (void)preloadOperationWithModel:onView:;
- (void)setOperationContentView:;
- (void)setModel:;
- (id)init;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)model;
- (void).cxx_destruct;
- (id)formType;
- (void)setFormType:;
- (void)setupUI;
- (id)downloadBlock;
- (void)setDownloadBlock:;
- (id)dismissBlock;
- (void)setDismissBlock:;
@end
