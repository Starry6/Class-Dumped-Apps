@interface AWEPaidStreamIAAGetSendAwardConfigV2ResponseModel : AWEBaseApiModel
@property (nonatomic) AWEPaidStreamIAAGetSendAwardConfigV2ResultData resultData;
- (void).cxx_destruct;
- (id)resultData;
- (void)setResultData:;
+ (id)resultDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
