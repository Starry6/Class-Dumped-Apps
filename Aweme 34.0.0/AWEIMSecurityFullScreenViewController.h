@interface AWEIMSecurityFullScreenViewController : UIViewController
@property (nonatomic) AWEIMSecurityFullScreenCardView cardView;
@property (nonatomic) AWEIMSecurityGlobalToastConfigResponse model;
@property (nonatomic) AWEIMGlobalToastViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderModel:context:;
- (void)fullScreenRemindView:didClickButtonWithModel:;
- (void)setModel:;
- (void)dealloc;
- (id)viewModel;
- (void)viewDidLoad;
- (id)model;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)cardView;
- (void)setCardView:;
@end
