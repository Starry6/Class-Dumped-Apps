@interface AWEIMFansGroupCouponMessage : AWEIMMessage
@property (nonatomic) AWEIMFansGroupCouponModel couponModel;
@property (nonatomic) NSDictionary contentDict;
- (void)setContentDict:;
- (void)setCouponModel:;
- (id)contentDict;
- (id)couponModel;
- (unsigned long long)couponType;
- (id)getContentDict;
- (id)getContentDictForModel;
- (id)initWithContentDict:;
- (void).cxx_destruct;
@end
