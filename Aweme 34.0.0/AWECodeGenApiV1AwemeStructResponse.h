@interface AWECodeGenApiV1AwemeStructResponse : AWEBaseResponseModel
@property (nonatomic) AWECodeGenAwemeModel awemeV2Model;
@property (nonatomic) AWECodeGenAwemeModel awemeV1Model;
@property (nonatomic) AWECodeGenAwemeModel awemeLiteModel;
- (id)awemeV2Model;
- (void)setAwemeV2Model:;
- (id)awemeV1Model;
- (void)setAwemeV1Model:;
- (id)awemeLiteModel;
- (void)setAwemeLiteModel:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
