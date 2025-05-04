@interface AWESearchHomeWeatherModel : AWEBaseApiModel
@property (nonatomic) AWESearchHomeWeatherDataModel data;
@property (nonatomic) NSString errNo;
@property (nonatomic) AWESearchHomeWeatherExtraModel extra;
@property (nonatomic) NSString logId;
@property (nonatomic) NSString msg;
- (void)setExtra:;
- (id)logId;
- (void)setLogId:;
- (id)errNo;
- (void)setErrNo:;
- (id)extra;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (void)setMsg:;
- (id)msg;
+ (id)extraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;
@end
