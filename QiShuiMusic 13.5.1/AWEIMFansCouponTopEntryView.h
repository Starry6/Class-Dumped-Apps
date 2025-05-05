@interface AWEIMFansCouponTopEntryView : UIView
@property (nonatomic) UIImageView couponImageView;
@property (nonatomic) UIView bottomLineView;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UIButton entryBtn;
@property (nonatomic) AWEButton closeBtn;
@property (nonatomic) q couponCount;
- (void)setCouponCount:;
- (id)couponImageView;
- (id)closeBtn;
- (long long)couponCount;
- (id)entryBtn;
- (void)setCloseBtn:;
- (void)setCouponImageView:;
- (void)setEntryBtn:;
- (void)updateCouponCount:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)tipLabel;
- (void)setTipLabel:;
- (id)bottomLineView;
- (void)setBottomLineView:;
+ (double)contentHeight;
@end
