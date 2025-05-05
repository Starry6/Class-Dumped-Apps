@interface AWEIMFansCouponListPageCell : UICollectionViewCell
@property (nonatomic) AWEIMCommerceCouponContainerView couponView;
@property (nonatomic) AWEIMFansGroupCouponModel model;
@property (nonatomic) <AWEIMFansCouponListPageCellProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__setupUI;
- (void)configWithModel:;
- (id)couponView;
- (void)processCurrentCommerceCoupon:;
- (void)refreshCouponStatus;
- (void)refreshExtWithCouponModel:;
- (void)setCouponView:;
- (void)trackDisplay;
- (id)model;
- (void)setModel:;
- (void)layoutSubviews;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)identifier;
@end
