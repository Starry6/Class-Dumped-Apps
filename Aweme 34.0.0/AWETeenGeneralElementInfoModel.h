@interface AWETeenGeneralElementInfoModel : AWEBaseApiModel
@property (nonatomic) Q elementType;
@property (nonatomic) Q showType;
@property (nonatomic) NSString text;
@property (nonatomic) AWEURLModel icon;
@property (nonatomic) AWETeenGeneralElementLandModel landModel;
- (id)landModel;
- (void)setLandModel:;
- (id)icon;
- (void)setText:;
- (id)text;
- (void)setIcon:;
- (void).cxx_destruct;
- (unsigned long long)elementType;
- (void)setElementType:;
- (void)setShowType:;
- (unsigned long long)showType;
+ (id)iconJSONTransformer;
+ (id)landModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
