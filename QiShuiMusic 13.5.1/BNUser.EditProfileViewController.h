@interface BNUser.EditProfileViewController : BNCommonAdapter.BNBasicViewController
@property (nonatomic) NSString etPageName;
@property (nonatomic) BOOL etPageIgnored;
@property (nonatomic) _TtC15BNSceneContract19LunaProfilePageItem param;
- (BOOL)etPageIgnored;
- (id)etPageName;
- (id)initWithCoder:;
- (id)param;
- (void)setParam:;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
