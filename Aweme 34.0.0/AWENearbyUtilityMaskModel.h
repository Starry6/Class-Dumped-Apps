@interface AWENearbyUtilityMaskModel : AWEBaseApiModel
@property (nonatomic) NSString normalStyleText;
@property (nonatomic) AWEURLModel normalStyleIconURLModel;
@property (nonatomic) NSString specialStyleText;
@property (nonatomic) AWEURLModel specialStyleIconURLModel;
@property (nonatomic) q type;
@property (nonatomic) q count;
- (id)normalStyleText;
- (id)normalStyleIconURLModel;
- (id)specialStyleText;
- (id)specialStyleIconURLModel;
- (void)setNormalStyleText:;
- (void)setNormalStyleIconURLModel:;
- (void)setSpecialStyleText:;
- (void)setSpecialStyleIconURLModel:;
- (void)setCount:;
- (long long)count;
- (long long)type;
- (void)setType:;
- (BOOL)isValid;
- (void).cxx_destruct;
+ (id)normalStyleIconURLModelJSONTransformer;
+ (id)specialStyleIconURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
