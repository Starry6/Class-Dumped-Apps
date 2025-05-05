@interface CJPayBalancePromotionModel : JSONModel
@property (nonatomic) NSString promotionDescription;
@property (nonatomic) NSString resourceNo;
@property (nonatomic) NSString planNo;
@property (nonatomic) NSString materialNo;
@property (nonatomic) NSString bizType;
@property (nonatomic) BOOL hasBindCardLottery;
@property (nonatomic) NSString bindCardInfo;
- (id)bizType;
- (id)bindCardInfo;
- (BOOL)hasBindCardLottery;
- (id)materialNo;
- (id)planNo;
- (id)promotionDescription;
- (id)resourceNo;
- (void)setBindCardInfo:;
- (void)setBizType:;
- (void)setHasBindCardLottery:;
- (void)setMaterialNo:;
- (void)setPlanNo:;
- (void)setPromotionDescription:;
- (void)setResourceNo:;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
