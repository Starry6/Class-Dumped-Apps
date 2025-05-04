@interface AWEUlikeAccountAuthResponseModel : ACCBaseApiModel
@property (nonatomic) AWEUlikeAccountAuthModel authInfo;
- (id)authInfo;
- (void).cxx_destruct;
- (void)setAuthInfo:;
+ (id)authInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
