@interface AWELeftSideBarPlayletCellTopLeftLabelDataModel : MTLModel
@property (nonatomic) BOOL isExclusive;
@property (nonatomic) AWEPlayletChargeInfoModel chargeInfoModel;
@property (nonatomic) AWEVideoChargeStrategyStruct chargeStrategyModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)chargeStrategyModel;
- (void)setChargeStrategyModel:;
- (id)chargeInfoModel;
- (void)setChargeInfoModel:;
- (BOOL)isExclusive;
- (id)description;
- (void).cxx_destruct;
- (void)setIsExclusive:;
+ (id)chargeStrategyModelJSONTransformer;
+ (id)chargeInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
