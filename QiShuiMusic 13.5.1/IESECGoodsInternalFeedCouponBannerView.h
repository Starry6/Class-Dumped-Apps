@interface IESECGoodsInternalFeedCouponBannerView : UIView
@property (nonatomic) q couponExpireTime;
@property (nonatomic) @? actionHandler;
@property (nonatomic) YYLabel couponPromptCountdownLabel;
@property (nonatomic) NSTimer couponCountdownTimer;
@property (nonatomic) IESECGoodsDetailCouponUrgeInfo couponUrgeInfo;
- (id)setupCouponPromptCountdownLabel;
- (id)couponCountdownTimer;
- (long long)couponExpireTime;
- (id)couponPromptCountdownLabel;
- (id)couponUrgeInfo;
- (id)getCountdownText;
- (id)initWithIsTop:couponUrgeInfo:;
- (void)invalidateCouponCountDownTimer;
- (void)setCouponCountdownTimer:;
- (void)setCouponExpireTime:;
- (void)setCouponPromptCountdownLabel:;
- (void)setCouponUrgeInfo:;
- (void)setupCouponCountdownTimer;
- (void)setupWithIsTop:couponUrgeInfo:;
- (void)tapCloseImageGesture;
- (void)updateCouponPromptCountdownLabel;
- (void)dealloc;
- (void)setActionHandler:;
- (id)actionHandler;
- (void).cxx_destruct;
@end
