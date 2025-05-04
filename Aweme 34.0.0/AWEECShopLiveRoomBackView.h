@interface AWEECShopLiveRoomBackView : UIView
@property (nonatomic) UIButton backButton;
@property (nonatomic) IESECServiceProxy<IESECShopForwardCoService> forwardService;
@property (nonatomic) IESECServiceProxy<IESECShopLayoutService> layoutService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)forwardService;
- (void)exitShop;
- (id)layoutService;
- (id)initWithShopContext:;
- (void)setForwardService:;
- (void)setLayoutService:;
- (id)backButton;
- (void)setBackButton:;
- (void).cxx_destruct;
- (void)setupViews;
@end
