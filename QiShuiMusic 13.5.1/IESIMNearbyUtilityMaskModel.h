@interface IESIMNearbyUtilityMaskModel : IESIMBaseApiModel
@property (nonatomic) NSString normalStyleText;
@property (nonatomic) IESIMURLModel normalStyleIconURLModel;
@property (nonatomic) NSString specialStyleText;
@property (nonatomic) IESIMURLModel specialStyleIconURLModel;
@property (nonatomic) q type;
@property (nonatomic) q count;
- (id)normalStyleText;
- (id)normalStyleIconURLModel;
- (void)setNormalStyleIconURLModel:;
- (void)setNormalStyleText:;
- (void)setSpecialStyleIconURLModel:;
- (void)setSpecialStyleText:;
- (id)specialStyleIconURLModel;
- (id)specialStyleText;
- (void)setCount:;
- (void)setType:;
- (long long)type;
- (BOOL)isValid;
- (void).cxx_destruct;
- (long long)count;
+ (id)normalStyleIconURLModelJSONTransformer;
+ (id)specialStyleIconURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
