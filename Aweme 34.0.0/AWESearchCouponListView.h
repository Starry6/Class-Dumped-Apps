@interface AWESearchCouponListView : UIView
@property (nonatomic) AWESearchMerchandiseModel merchandiseModel;
@property (nonatomic) NSArray couponList;
@property (nonatomic) NSMutableArray displayMeteIDS;
- (id)couponList;
- (void)setCouponList:;
- (id)merchandiseModel;
- (void)setMerchandiseModel:;
- (id)displayMeteIDS;
- (void)logCoupon:couponServiceInfo:;
- (id)getDisplayMeteIDListWith:maxWidth:;
- (void)configCouponList:merchandiseModel:;
- (void)setDisplayMeteIDS:;
- (void).cxx_destruct;
- (void)layoutSubviews;
@end
