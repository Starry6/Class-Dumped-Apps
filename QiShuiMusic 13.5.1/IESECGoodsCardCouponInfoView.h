@interface IESECGoodsCardCouponInfoView : UIView
@property (nonatomic) UIImageView couponImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel countDownLabel;
@property (nonatomic) IESECGradientView gradientView;
@property (nonatomic) IESECGoodsDetailCouponExtra couponExtra;
@property (nonatomic) double expireTime;
@property (nonatomic) NSTimer timer;
- (id)couponImageView;
- (void)setCouponExtra:;
- (void)bindData:;
- (id)countDownLabel;
- (id)couponExtra;
- (void)setCountDownLabel:;
- (void)setCouponImageView:;
- (void)updateCountDownLabel;
- (id)gradientView;
- (void)setTimer:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)timer;
- (void)setGradientView:;
- (id)nameLabel;
- (void)setNameLabel:;
- (double)expireTime;
- (void)setExpireTime:;
- (void)setupSubviews;
@end
