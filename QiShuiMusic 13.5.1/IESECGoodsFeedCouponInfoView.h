@interface IESECGoodsFeedCouponInfoView : UIView
@property (nonatomic) UIImageView couponImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel countDownLabel;
@property (nonatomic) UIView contentView;
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
- (id)contentView;
- (void)setTimer:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)timer;
- (void)setContentView:;
- (id)nameLabel;
- (void)setNameLabel:;
- (double)expireTime;
- (void)setExpireTime:;
- (void)setupSubviews;
@end
