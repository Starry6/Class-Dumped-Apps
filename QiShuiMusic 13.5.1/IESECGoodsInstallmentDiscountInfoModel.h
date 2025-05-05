@interface IESECGoodsInstallmentDiscountInfoModel : IESECBaseApiModel
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) NSString discountDesc;
@property (nonatomic) IESECGoodsInstallmentDescModel descText;
@property (nonatomic) NSString activityType;
- (id)descText;
- (id)discountDesc;
- (void)setDescText:;
- (void)setDiscountDesc:;
- (id)activityType;
- (void)setActivityType:;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (void)setShouldShow:;
+ (id)JSONKeyPathsByPropertyKey;
@end
