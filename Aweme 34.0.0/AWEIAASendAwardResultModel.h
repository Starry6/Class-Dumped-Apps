@interface AWEIAASendAwardResultModel : AWEBaseApiModel
@property (nonatomic) AWEIAASendAwardResponseModel resultData;
- (void).cxx_destruct;
- (id)resultData;
- (void)setResultData:;
+ (id)resultDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
