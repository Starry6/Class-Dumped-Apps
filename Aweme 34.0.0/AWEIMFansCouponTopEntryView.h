@interface AWEIMFansCouponTopEntryView : UIView
@property (nonatomic) UIVisualEffectView blurView;
@property (nonatomic) UIImageView couponImageView;
@property (nonatomic) UIView bottomLineView;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UIButton entryBtn;
@property (nonatomic) IESIMButton closeBtn;
@property (nonatomic) q couponCount;
- (id)bottomLineView;
- (void)setBottomLineView:;
- (void)refreshBackgroundColorWhileHasBackground:;
- (id)closeBtn;
- (void)setCloseBtn:;
- (id)couponImageView;
- (void)setCouponImageView:;
- (void)setCouponCount:;
- (long long)couponCount;
- (id)entryBtn;
- (void)setEntryBtn:;
- (void)updateCouponCount:;
- (id)blurView;
- (void)setBlurView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setTipLabel:;
- (id)tipLabel;
+ (double)contentHeight;
@end
