@interface AWELuckyCatTaskDoneResponseModel : AWEBaseApiModel
@property (nonatomic) q errorNo;
@property (nonatomic) NSString errorTips;
@property (nonatomic) AWELuckyCatTaskDoneResponseDataModel data;
- (id)errorTips;
- (void)setErrorTips:;
- (long long)errorNo;
- (void)setErrorNo:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;
@end
