@interface IESECGoodsDetailBaseInfoDataModel : IESECBaseApiModel
@property (nonatomic) IESECGoodsDetailMarketingActivityDataModel activityItemDataModel;
@property (nonatomic) IESECGoodsDetailContentDataModel baseInfoContentDataModel;
- (id)activityItemDataModel;
- (id)baseInfoContentDataModel;
- (void)setActivityItemDataModel:;
- (void)setBaseInfoContentDataModel:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
