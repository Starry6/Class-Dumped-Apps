@interface AWEMVChannelPlayerCardBaseController : AWEBaseController
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWEMVChannelPlayerCardBaseContainer view;
@property (nonatomic) AWEMVChannelPlayerCardContext context;
@property (nonatomic) BOOL appear;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAppear:;
- (void)updateState:;
- (void)setModel:;
- (id)container;
- (id)view;
- (void)viewDidLoad;
- (id)viewController;
- (void)setView:;
- (id)model;
- (void)setData:;
- (void).cxx_destruct;
- (BOOL)appear;
@end
