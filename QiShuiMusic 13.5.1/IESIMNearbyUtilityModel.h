@interface IESIMNearbyUtilityModel : IESIMBaseApiModel
@property (nonatomic) IESIMNearbyUtilityBottomBarModel barModel;
@property (nonatomic) IESIMNearbyUtilityMaskModel maskModel;
- (id)barModel;
- (id)maskModel;
- (void)setBarModel:;
- (void)setMaskModel:;
- (void).cxx_destruct;
+ (id)barModelJSONTransformer;
+ (id)maskModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
