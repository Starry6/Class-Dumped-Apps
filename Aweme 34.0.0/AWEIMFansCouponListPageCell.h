@interface AWEIMFansCouponListPageCell : UICollectionViewCell
@property (nonatomic) AWEIMCommerceCouponContainerView couponView;
@property (nonatomic) AWEIMFansGroupCouponModel model;
@property (nonatomic) <AWEIMFansCouponListPageCellProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithModel:;
- (void)__setupUI;
- (id)couponView;
- (void)setCouponView:;
- (void)processCurrentCommerceCoupon:;
- (void)refreshExtWithCouponModel:;
- (void)refreshCouponStatus;
- (void)trackDisplay;
- (void)setModel:;
- (id)delegate;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutSubviews;
+ (id)identifier;
@end
