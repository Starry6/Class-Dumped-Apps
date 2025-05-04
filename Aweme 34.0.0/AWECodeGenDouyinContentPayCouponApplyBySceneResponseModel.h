@interface AWECodeGenDouyinContentPayCouponApplyBySceneResponseModel : AWEBaseDataModel
@property (nonatomic) NSInteger applyStatus;
@property (nonatomic) NSArray applyCouponsModelArray;
@property (nonatomic) AWECodeGenEnPurchasePackageInfoModel purchasePackageInfoModel;
@property (nonatomic) AWECodeGenPopUpConfModel couponPopUpConfModel;
@property (nonatomic) NSInteger statusCode;
@property (nonatomic) NSString statusMsg;
- (id)statusMsg;
- (void)setStatusMsg:;
- (id)applyCouponsModelArray;
- (void)setApplyCouponsModelArray:;
- (id)purchasePackageInfoModel;
- (void)setPurchasePackageInfoModel:;
- (id)couponPopUpConfModel;
- (void)setCouponPopUpConfModel:;
- (int)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
- (void)setApplyStatus:;
- (int)applyStatus;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
