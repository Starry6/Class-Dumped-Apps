@interface AWEECShopLiveRoomTipsView : UIView
@property (nonatomic) UILabel textLabel;
@property (nonatomic) LOTAnimationView lottieView;
@property (nonatomic) UIImageView backgroundView;
@property (nonatomic) IESECServiceProxy<IESECShopForwardCoService> forwardService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString enterMethod;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)lottieView;
- (void)setLottieView:;
- (id)forwardService;
- (id)initWithShopContext:;
- (void)setForwardService:;
- (BOOL)checkFrequencyLimit;
- (void)beginCountdown:;
- (void)slideTipsView;
- (void)updateWithTipsConfigs:;
- (id)textLabel;
- (void)setBackgroundView:;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (void)setupViews;
@end
