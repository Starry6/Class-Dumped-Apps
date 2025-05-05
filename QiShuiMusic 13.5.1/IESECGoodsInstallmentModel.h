@interface IESECGoodsInstallmentModel : IESECBaseApiModel
@property (nonatomic) NSString cacheInstallmentTrackerListString;
@property (nonatomic) NSNumber cacheInstallmentTrackerRecommendTermCount;
@property (nonatomic) IESECGoodsInstallmentOpenInfoModel openInfoModel;
@property (nonatomic) IESECGoodsInstallmentDiscountInfoModel discountModel;
@property (nonatomic) IESECGoodsInstallmentTermInfoModel termModel;
- (id)cacheInstallmentTrackerListString;
- (id)cacheInstallmentTrackerRecommendTermCount;
- (id)discountModel;
- (id)installmentTrackerListString;
- (id)installmentTrackerRecommendTermCount;
- (id)installmentVoucherListTrackerString;
- (id)openInfoModel;
- (void)setCacheInstallmentTrackerListString:;
- (void)setCacheInstallmentTrackerRecommendTermCount:;
- (void)setDiscountModel:;
- (void)setOpenInfoModel:;
- (void)setTermModel:;
- (id)termModel;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
