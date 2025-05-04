@interface AWEPlayletSkyLightAnnieXCardView : UIView
@property (nonatomic) UIView<AnnieXContainerBaseProtocol> containerView;
@property (nonatomic) <AnnieXCardModelProtocol> cardModel;
@property (nonatomic) double initTimeInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)container:didFinishLoadWithURL:;
- (void)container:didLoadFailedWithUrl:error:;
- (id)cardModel;
- (void)setCardModel:;
- (void)onShow;
- (void)onHide;
- (double)initTimeInterval;
- (void)setInitTimeInterval:;
- (void)updateInsertData:;
- (void)updateAnnieXCardHeight:;
- (void)updateAnnieXCardScreenSize:;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setupUI;
@end
