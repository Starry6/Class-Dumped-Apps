@interface AWEPlayletPanelRelativeAnnieXCardView : UIView
@property (nonatomic) UIView<AnnieXContainerBaseProtocol> containerView;
@property (nonatomic) <AnnieXCardModelProtocol> cardModel;
@property (nonatomic) double initTimeInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cardModel;
- (void)setCardModel:;
- (double)initTimeInterval;
- (void)setInitTimeInterval:;
- (void)updatePanelUIWithPlayletId:;
- (id)initWithSchemaModel:delegate:playletInfoModel:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setupUI;
@end
