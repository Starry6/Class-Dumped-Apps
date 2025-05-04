@interface AWENearbyUtilityModel : AWEBaseApiModel
@property (nonatomic) AWENearbyUtilityBottomBarModel barModel;
@property (nonatomic) AWENearbyUtilityMaskModel maskModel;
- (id)barModel;
- (void)setBarModel:;
- (id)maskModel;
- (void)setMaskModel:;
- (void).cxx_destruct;
+ (id)barModelJSONTransformer;
+ (id)maskModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
