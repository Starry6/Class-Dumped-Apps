@interface AWEPaidStreamIAAAwardConfigResultModel : AWEBaseApiModel
@property (nonatomic) AWEPaidStreamIAAAwardConfigResponseModel resultData;
- (void).cxx_destruct;
- (id)resultData;
- (void)setResultData:;
+ (id)resultDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
