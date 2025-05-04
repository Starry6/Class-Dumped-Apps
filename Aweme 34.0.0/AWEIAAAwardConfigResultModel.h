@interface AWEIAAAwardConfigResultModel : AWEBaseApiModel
@property (nonatomic) AWEIAAAwardConfigResponseModel resultData;
- (void).cxx_destruct;
- (id)resultData;
- (void)setResultData:;
+ (id)resultDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
