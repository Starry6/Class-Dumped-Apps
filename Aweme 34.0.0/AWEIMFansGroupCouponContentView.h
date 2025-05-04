@interface AWEIMFansGroupCouponContentView : UIView
@property (nonatomic) AWEIMFansGroupCouponContentProps props;
@property (nonatomic) AWEIMCommerceCouponContainerView couponView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)couponView;
- (void)setCouponView:;
- (void)processCurrentCommerceCoupon:;
- (void)refreshExtWithCouponModel:;
- (void)enterprsieTrack;
- (void)refreshCouponStatus;
- (void)updateWithProps:;
- (id)props;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setProps:;
@end
