@interface AWENoxusLongVideoTokenResponseModel : AWEBaseApiModel
@property (nonatomic) AWEDemaciaPlayTokenAuthModel tokenAuth;
- (id)tokenAuth;
- (void)setTokenAuth:;
- (void).cxx_destruct;
+ (id)tokenAuthJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
