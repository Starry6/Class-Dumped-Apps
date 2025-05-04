@interface AWEDouPlusCouponListViewModel : NSObject
@property (nonatomic) NSString itemID;
@property (nonatomic) NSArray couponModelList;
@property (nonatomic) AWEDouPlusCouponModel selectedCouponModel;
@property (nonatomic) NSString couponStatusDesc;
- (long long)seletedCouponIndex;
- (BOOL)hasCouponList;
- (void)handleSelectedCouponModelAtIndex:;
- (id)couponModelList;
- (long long)availableCouponCount;
- (id)couponModelAtIndex:;
- (void)handleSelectedCouponModel:;
- (long long)totalCouponCount;
- (void)setCouponModelList:;
- (void)defaultConfigSelectedCouponModel:;
- (void)setSelectedCouponModel:;
- (void)setCouponStatusDesc:;
- (void)fetchDouPlusCouponListWithIAPProduct:;
- (id)selectedCouponModel;
- (id)couponStatusDesc;
- (id)itemID;
- (void)setItemID:;
- (void).cxx_destruct;
- (id)initWithItemID:;
@end
