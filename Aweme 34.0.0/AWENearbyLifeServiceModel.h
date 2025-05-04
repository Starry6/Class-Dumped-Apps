@interface AWENearbyLifeServiceModel : AWEBaseApiModel
@property (nonatomic) AWENearbyCapsuleModel capsuleModel;
@property (nonatomic) AWENearbyLifeBarModel barModel;
- (id)barModel;
- (void)setBarModel:;
- (id)capsuleModel;
- (void)setCapsuleModel:;
- (void).cxx_destruct;
+ (id)barModelJSONTransformer;
+ (id)capsuleModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
