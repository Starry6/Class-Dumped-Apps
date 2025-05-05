@interface IESECGetExplainProductDataModel : IESLiveBridgeModel
@property (nonatomic) NSNumber status;
@property (nonatomic) NSString promotionId;
- (void)setPromotionId:;
- (id)promotionId;
- (void)setStatus:;
- (void).cxx_destruct;
- (id)status;
+ (id)modelCustomPropertyMapper;
@end
