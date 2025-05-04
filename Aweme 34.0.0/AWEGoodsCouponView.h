@interface AWEGoodsCouponView : UIView
@property (nonatomic) UIColor couponBGColor;
@property (nonatomic) UIColor couponBorderColor;
@property (nonatomic) AWEButton tipView;
@property (nonatomic) AWEButton titleView;
@property (nonatomic) UIView seperatorView;
@property (nonatomic) NSNumber couponHeight;
- (void)setCouponTitle:;
- (void)setCouponBGColor:;
- (void)setCouponTip:;
- (id)couponHeight;
- (void)setCouponHeight:;
- (id)couponBGColor;
- (id)couponBorderColor;
- (void)setCouponBorderColor:;
- (id)titleView;
- (void)setTitleView:;
- (id)init;
- (void)setTipView:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateUI;
- (id)seperatorView;
- (void)setSeperatorView:;
- (id)tipView;
@end
