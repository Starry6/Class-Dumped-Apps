@interface AWEPlayletPanelRecommendCardViewController : UIViewController
@property (nonatomic) AWEPlayletPanelRecommendAnnieXCardView lynxView;
@property (nonatomic) AWEPlayletSchemaModel schemaModel;
@property (nonatomic) NSDictionary schemaLogExtras;
@property (nonatomic) <AWEDiscoverDPlayletPanelDelegate> delegate;
@property (nonatomic) <AnnieXCardModelProtocol> cardModel;
- (id)cardModel;
- (id)schemaModel;
- (id)lynxView;
- (void)setLynxView:;
- (void)setCardModel:;
- (void)setSchemaModel:;
- (void)setSchemaLogExtras:;
- (id)schemaLogExtras;
- (id)initWithSchemaModel:delegate:;
- (void)updatePanelUI;
- (id)delegate;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
