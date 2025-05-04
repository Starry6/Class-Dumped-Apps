@interface AWEPlayletPanelRelativeAnnieXCardViewController : UIViewController
@property (nonatomic) AWEPlayletPanelRelativeAnnieXCardView lynxView;
@property (nonatomic) AWEPlayletSchemaModel schemaModel;
@property (nonatomic) NSDictionary schemaLogExtras;
@property (nonatomic) <AWEDiscoverDPlayletBasePanelDelegate> delegate;
@property (nonatomic) <AnnieXCardModelProtocol> cardModel;
@property (nonatomic) AWEPlayletInfoModel playletInfoModel;
- (id)cardModel;
- (id)playletInfoModel;
- (id)schemaModel;
- (id)lynxView;
- (void)setLynxView:;
- (void)setCardModel:;
- (void)setPlayletInfoModel:;
- (void)setSchemaModel:;
- (void)updatePanelUIWithPlayletId:;
- (void)setSchemaLogExtras:;
- (id)schemaLogExtras;
- (id)initWithSchemaModel:delegate:playletInfoModel:;
- (id)delegate;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
