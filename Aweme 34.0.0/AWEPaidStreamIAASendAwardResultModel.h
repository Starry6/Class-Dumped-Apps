@interface AWEPaidStreamIAASendAwardResultModel : AWEBaseApiModel
@property (nonatomic) AWEPaidStreamIAASendAwardResponseModel resultData;
- (void).cxx_destruct;
- (id)resultData;
- (void)setResultData:;
+ (id)resultDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
